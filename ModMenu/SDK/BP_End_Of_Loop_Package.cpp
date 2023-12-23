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
	 * 		Name   -> Function BP_End_Of_Loop.BP_End_Of_Loop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_End_Of_Loop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Loop.BP_End_Of_Loop_C.UserConstructionScript");
		
		ABP_End_Of_Loop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Loop.BP_End_Of_Loop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_End_Of_Loop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Loop.BP_End_Of_Loop_C.ReceiveBeginPlay");
		
		ABP_End_Of_Loop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Loop.BP_End_Of_Loop_C.CheckBonusAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_End_Of_Loop_C::CheckBonusAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Loop.BP_End_Of_Loop_C.CheckBonusAchievement");
		
		ABP_End_Of_Loop_C_CheckBonusAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Loop.BP_End_Of_Loop_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_End_Of_Loop_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Loop.BP_End_Of_Loop_C.EndEvent");
		
		ABP_End_Of_Loop_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Loop.BP_End_Of_Loop_C.ExecuteUbergraph_BP_End_Of_Loop
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_End_Of_Loop_C::ExecuteUbergraph_BP_End_Of_Loop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Loop.BP_End_Of_Loop_C.ExecuteUbergraph_BP_End_Of_Loop");
		
		ABP_End_Of_Loop_C_ExecuteUbergraph_BP_End_Of_Loop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_End_Of_Loop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_End_Of_Loop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_End_Of_Loop.BP_End_Of_Loop_C");
		return ptr;
	}

}


