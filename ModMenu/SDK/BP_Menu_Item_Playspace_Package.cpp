﻿/**
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
	 * 		Name   -> Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Playspace_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.UserConstructionScript");
		
		ABP_Menu_Item_Playspace_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Item_Playspace_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.ReceiveBeginPlay");
		
		ABP_Menu_Item_Playspace_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.SelectMenuOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Playspace_C::SelectMenuOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.SelectMenuOption");
		
		ABP_Menu_Item_Playspace_C_SelectMenuOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.ExecuteUbergraph_BP_Menu_Item_Playspace
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Item_Playspace_C::ExecuteUbergraph_BP_Menu_Item_Playspace(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C.ExecuteUbergraph_BP_Menu_Item_Playspace");
		
		ABP_Menu_Item_Playspace_C_ExecuteUbergraph_BP_Menu_Item_Playspace_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Item_Playspace_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Item_Playspace_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Item_Playspace.BP_Menu_Item_Playspace_C");
		return ptr;
	}

}


