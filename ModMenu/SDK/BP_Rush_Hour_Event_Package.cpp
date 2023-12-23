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
	 * 		Name   -> Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Rush_Hour_Event_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.UserConstructionScript");
		
		ABP_Rush_Hour_Event_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Rush_Hour_Event_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ReceiveBeginPlay");
		
		ABP_Rush_Hour_Event_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.SpawnCharacters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Rush_Hour_Event_C::SpawnCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.SpawnCharacters");
		
		ABP_Rush_Hour_Event_C_SpawnCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ClearCharacters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Rush_Hour_Event_C::ClearCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ClearCharacters");
		
		ABP_Rush_Hour_Event_C_ClearCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ExecuteUbergraph_BP_Rush_Hour_Event
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rush_Hour_Event_C::ExecuteUbergraph_BP_Rush_Hour_Event(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rush_Hour_Event.BP_Rush_Hour_Event_C.ExecuteUbergraph_BP_Rush_Hour_Event");
		
		ABP_Rush_Hour_Event_C_ExecuteUbergraph_BP_Rush_Hour_Event_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Rush_Hour_Event_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rush_Hour_Event_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rush_Hour_Event.BP_Rush_Hour_Event_C");
		return ptr;
	}

}


