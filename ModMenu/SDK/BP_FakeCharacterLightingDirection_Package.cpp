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
	 * 		Name   -> Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FakeCharacterLightingDirection_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.UserConstructionScript");
		
		ABP_FakeCharacterLightingDirection_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FakeCharacterLightingDirection_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.ReceiveBeginPlay");
		
		ABP_FakeCharacterLightingDirection_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.ExecuteUbergraph_BP_FakeCharacterLightingDirection
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FakeCharacterLightingDirection_C::ExecuteUbergraph_BP_FakeCharacterLightingDirection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C.ExecuteUbergraph_BP_FakeCharacterLightingDirection");
		
		ABP_FakeCharacterLightingDirection_C_ExecuteUbergraph_BP_FakeCharacterLightingDirection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FakeCharacterLightingDirection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FakeCharacterLightingDirection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FakeCharacterLightingDirection.BP_FakeCharacterLightingDirection_C");
		return ptr;
	}

}


