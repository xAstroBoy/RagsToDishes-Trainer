#include <regex>

#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#include "stdafx.h"
#include <typeinfo>
#include <thread>
#include <future>
#include <thread>

#include "Cheats.h"
#include "ConsoleCmd.h"
#include "ProcessEventLogger.h"


typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;


void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	auto maxFloatValue = static_cast<float>(9999999999);
	if (!thiz || !function) {
		// Either thiz or function is null, so exit early
		return;
	}

	if (!thiz->Class) {
		// Internal class is null, so exit early
		return;
	}
	const std::string func = function->GetFullName();

	if (func == "Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__UpdateFunc") return;
	if (func == "Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__FinishedFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__UpdateFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.SimpleOrder_Timeline__FinishedFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.BonusTime_Timeline__UpdateFunc") return;
	if (func == "Function BP_Customer.BP_Customer_C.BonusTime_Timeline__FinishedFunc") return;
	if (func == "Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__UpdateFunc") return;
	if (func == "Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__FinishedFunc") return;

	if(func == "Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__UpdateFunc")
	if (func == "Function BP_Stew_Pot.BP_Stew_Pot_C.BurningTimeline__FinishedFunc") return;

	if (func == "Function BP_Ingredient_Fish.BP_Ingredient_Fish_C.BurnIngredient") return;
	if (func == "Function BP_Ingredient_Fish.BP_Ingredient_Fish_C.CookAndBurnIngredient") return;

	if (func == "Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.BurnIngredient") return;
	if (func == "Function BP_Ingredient_Sausage.BP_Ingredient_Sausage_C.CookAndBurnIngredient") return;


	if (func == "Function BP_Ingredient.BP_Ingredient_C.BurnIngredient")
	{
		auto instance = static_cast<CG::ABP_Ingredient_C*>(thiz);
		if (instance != nullptr)
		{
			instance->Burned = false;
			instance->CookIngredient();
			return;
		}

	}
	if (func == "Function BP_Ingredient.BP_Ingredient_C.CookAndBurnIngredient")
	{
		auto instance = static_cast<CG::ABP_Ingredient_C*>(thiz);
		if (instance != nullptr)
		{
			instance->Burned = false;
			instance->CookIngredient();
			return;
		}
	}

	ProcessEventLogger::ReportCustomEvent(func);

	try {
		oProcessEvent(thiz, function, parms);
	}
	catch (...) {}
}

uintptr_t GetBaseAddress(const std::wstring& moduleName)
{
	return  reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
}

uintptr_t GetBaseAddress()
{
	return GetBaseAddress(L"RagsToDishes-Win64-Shipping.exe");
}

void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventOffset = 0x7598D0;
	uintptr_t ProcessEventAddress = mBaseAddress + ProcessEventOffset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Process Event!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Failed to Hook Process Event!");
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

	// Console (Used Mainly for Debug Purpose) (not needed)
	ConsoleTools::ShowConsole();

	bool init_hook = false;
	do
	{
		std::thread executor(Cheats::CheatExecutorThread);
		executor.detach();

		std::thread ProcessEventHookThread(StartProcessEventHook);
		ProcessEventHookThread.detach();

		init_hook = true;
	} while (!init_hook);

	ConsoleCmd::initializeCommands();
	ConsoleCmd::ConsoleInput();
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		MH_Initialize();
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}