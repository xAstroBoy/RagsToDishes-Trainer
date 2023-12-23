#include "pch.h"
#include "ConsoleUtils.h"
#include "SDK.h"

CG::AWorldSettings* GetWorldSettings()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr)
	{
		if (world->PersistentLevel != nullptr)
		{
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::ULocalPlayer* GetActiveLocalPlayer()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0)
	{
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr)
		{
			return localPlayer;
		}
	}
	return nullptr;
}

CG::APlayerController* GetActivePlayerController()
{
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr)
	{
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}

void SpawnCheatManager(CG::APlayerController* Pc)
{
	if (Pc != nullptr)
	{
		if (Pc->CheatManager == nullptr)
		{
			if (CG::UCheatManager* Cm = static_cast<CG::UCheatManager*>(Pc->CheatClass->CreateDefaultObject()))
			{
				if (Cm != nullptr)
				{
					Cm->Outer = Pc;
					Pc->CheatManager = Cm;
					//Cm->ReceiveInitCheatManager();
					//Pc->EnableCheats();
					ConsoleTools::ConsoleWrite("Spawned " + Cm->GetFullName() + " !");
					//SpawnConsole();
				}
			}
		}
	}
}