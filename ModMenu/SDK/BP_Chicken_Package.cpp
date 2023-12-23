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
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.SelectWalkLoc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Chicken_C::SelectWalkLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.SelectWalkLoc");
		
		ABP_Chicken_C_SelectWalkLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Chicken_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.UserConstructionScript");
		
		ABP_Chicken_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.WalkTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Chicken_C::WalkTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.WalkTL__FinishedFunc");
		
		ABP_Chicken_C_WalkTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.WalkTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Chicken_C::WalkTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.WalkTL__UpdateFunc");
		
		ABP_Chicken_C_WalkTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.TurnTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Chicken_C::TurnTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.TurnTL__FinishedFunc");
		
		ABP_Chicken_C_TurnTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.TurnTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Chicken_C::TurnTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.TurnTL__UpdateFunc");
		
		ABP_Chicken_C_TurnTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Chicken_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ReceiveBeginPlay");
		
		ABP_Chicken_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.Walk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Chicken_C::Walk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.Walk");
		
		ABP_Chicken_C_Walk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Chicken_C::ExecuteUbergraph_BP_Chicken(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken");
		
		ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Chicken_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Chicken_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chicken.BP_Chicken_C");
		return ptr;
	}

}


