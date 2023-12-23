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
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.UserConstructionScript");
		
		ABP_Upgrade_Glass_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseGlass_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::RaiseGlass_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseGlass_Timeline__FinishedFunc");
		
		ABP_Upgrade_Glass_C_RaiseGlass_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseGlass_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::RaiseGlass_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseGlass_Timeline__UpdateFunc");
		
		ABP_Upgrade_Glass_C_RaiseGlass_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnGlass_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::ReturnGlass_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnGlass_Timeline__FinishedFunc");
		
		ABP_Upgrade_Glass_C_ReturnGlass_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnGlass_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::ReturnGlass_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnGlass_Timeline__UpdateFunc");
		
		ABP_Upgrade_Glass_C_ReturnGlass_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseUpgradeGlass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::RaiseUpgradeGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.RaiseUpgradeGlass");
		
		ABP_Upgrade_Glass_C_RaiseUpgradeGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnUpgradeGlass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::ReturnUpgradeGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ReturnUpgradeGlass");
		
		ABP_Upgrade_Glass_C_ReturnUpgradeGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.StopRaiseGlass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::StopRaiseGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.StopRaiseGlass");
		
		ABP_Upgrade_Glass_C_StopRaiseGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.StopReturnGlass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrade_Glass_C::StopReturnGlass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.StopReturnGlass");
		
		ABP_Upgrade_Glass_C_StopReturnGlass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ExecuteUbergraph_BP_Upgrade_Glass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrade_Glass_C::ExecuteUbergraph_BP_Upgrade_Glass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrade_Glass.BP_Upgrade_Glass_C.ExecuteUbergraph_BP_Upgrade_Glass");
		
		ABP_Upgrade_Glass_C_ExecuteUbergraph_BP_Upgrade_Glass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Upgrade_Glass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Upgrade_Glass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Upgrade_Glass.BP_Upgrade_Glass_C");
		return ptr;
	}

}


