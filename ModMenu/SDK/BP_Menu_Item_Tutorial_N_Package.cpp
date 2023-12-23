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
	 * 		Name   -> Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Tutorial_N_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.UserConstructionScript");
		
		ABP_Menu_Item_Tutorial_N_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Item_Tutorial_N_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.ReceiveBeginPlay");
		
		ABP_Menu_Item_Tutorial_N_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.SetState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Tutorial_N_C::SetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.SetState");
		
		ABP_Menu_Item_Tutorial_N_C_SetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.SelectMenuOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Tutorial_N_C::SelectMenuOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.SelectMenuOption");
		
		ABP_Menu_Item_Tutorial_N_C_SelectMenuOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.ExecuteUbergraph_BP_Menu_Item_Tutorial_N
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Item_Tutorial_N_C::ExecuteUbergraph_BP_Menu_Item_Tutorial_N(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C.ExecuteUbergraph_BP_Menu_Item_Tutorial_N");
		
		ABP_Menu_Item_Tutorial_N_C_ExecuteUbergraph_BP_Menu_Item_Tutorial_N_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Item_Tutorial_N_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Item_Tutorial_N_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Item_Tutorial_N.BP_Menu_Item_Tutorial_N_C");
		return ptr;
	}

}


