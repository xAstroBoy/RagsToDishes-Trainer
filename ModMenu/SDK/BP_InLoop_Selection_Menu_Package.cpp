/**
 * Name: RagsToDishes
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.GetStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_InLoop_Selection_Menu_C::GetStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.GetStage");
		
		ABP_InLoop_Selection_Menu_C_GetStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_InLoop_Selection_Menu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.UserConstructionScript");
		
		ABP_InLoop_Selection_Menu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_InLoop_Selection_Menu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.ReceiveBeginPlay");
		
		ABP_InLoop_Selection_Menu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_InLoop_Selection_Menu_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.EndEvent");
		
		ABP_InLoop_Selection_Menu_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.ExecuteUbergraph_BP_InLoop_Selection_Menu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InLoop_Selection_Menu_C::ExecuteUbergraph_BP_InLoop_Selection_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C.ExecuteUbergraph_BP_InLoop_Selection_Menu");
		
		ABP_InLoop_Selection_Menu_C_ExecuteUbergraph_BP_InLoop_Selection_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_InLoop_Selection_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InLoop_Selection_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InLoop_Selection_Menu.BP_InLoop_Selection_Menu_C");
		return ptr;
	}

}


