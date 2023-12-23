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
	 * 		Name   -> Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Quit_Confirm_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.UserConstructionScript");
		
		ABP_Menu_Item_Quit_Confirm_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.SelectMenuOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Item_Quit_Confirm_C::SelectMenuOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.SelectMenuOption");
		
		ABP_Menu_Item_Quit_Confirm_C_SelectMenuOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Menu_Item_Quit_Confirm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.ReceiveBeginPlay");
		
		ABP_Menu_Item_Quit_Confirm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.ExecuteUbergraph_BP_Menu_Item_Quit_Confirm
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Item_Quit_Confirm_C::ExecuteUbergraph_BP_Menu_Item_Quit_Confirm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C.ExecuteUbergraph_BP_Menu_Item_Quit_Confirm");
		
		ABP_Menu_Item_Quit_Confirm_C_ExecuteUbergraph_BP_Menu_Item_Quit_Confirm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Item_Quit_Confirm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Item_Quit_Confirm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Item_Quit_Confirm.BP_Menu_Item_Quit_Confirm_C");
		return ptr;
	}

}


