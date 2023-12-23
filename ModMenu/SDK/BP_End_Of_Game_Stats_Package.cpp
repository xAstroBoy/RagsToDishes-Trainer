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
	 * 		Name   -> Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_End_Of_Game_Stats_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.UserConstructionScript");
		
		ABP_End_Of_Game_Stats_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_End_Of_Game_Stats_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.ReceiveBeginPlay");
		
		ABP_End_Of_Game_Stats_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.ExecuteUbergraph_BP_End_Of_Game_Stats
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_End_Of_Game_Stats_C::ExecuteUbergraph_BP_End_Of_Game_Stats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C.ExecuteUbergraph_BP_End_Of_Game_Stats");
		
		ABP_End_Of_Game_Stats_C_ExecuteUbergraph_BP_End_Of_Game_Stats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_End_Of_Game_Stats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_End_Of_Game_Stats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_End_Of_Game_Stats.BP_End_Of_Game_Stats_C");
		return ptr;
	}

}


