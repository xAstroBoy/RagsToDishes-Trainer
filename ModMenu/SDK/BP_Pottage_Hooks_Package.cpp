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
	 * 		Name   -> Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Pottage_Hooks_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.UserConstructionScript");
		
		ABP_Pottage_Hooks_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.UnlockBeanPottage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Pottage_Hooks_C::UnlockBeanPottage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.UnlockBeanPottage");
		
		ABP_Pottage_Hooks_C_UnlockBeanPottage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.ExecuteUbergraph_BP_Pottage_Hooks
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pottage_Hooks_C::ExecuteUbergraph_BP_Pottage_Hooks(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pottage_Hooks.BP_Pottage_Hooks_C.ExecuteUbergraph_BP_Pottage_Hooks");
		
		ABP_Pottage_Hooks_C_ExecuteUbergraph_BP_Pottage_Hooks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pottage_Hooks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pottage_Hooks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pottage_Hooks.BP_Pottage_Hooks_C");
		return ptr;
	}

}


