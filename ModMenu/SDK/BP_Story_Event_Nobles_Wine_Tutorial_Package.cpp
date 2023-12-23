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
	 * 		Name   -> Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Story_Event_Nobles_Wine_Tutorial_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.UserConstructionScript");
		
		ABP_Story_Event_Nobles_Wine_Tutorial_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Story_Event_Nobles_Wine_Tutorial_C::InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1");
		
		ABP_Story_Event_Nobles_Wine_Tutorial_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Story_Event_Nobles_Wine_Tutorial_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.ReceiveBeginPlay");
		
		ABP_Story_Event_Nobles_Wine_Tutorial_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.EventEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Story_Event_Nobles_Wine_Tutorial_C::EventEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.EventEnd");
		
		ABP_Story_Event_Nobles_Wine_Tutorial_C_EventEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.ExecuteUbergraph_BP_Story_Event_Nobles_Wine_Tutorial
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Story_Event_Nobles_Wine_Tutorial_C::ExecuteUbergraph_BP_Story_Event_Nobles_Wine_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C.ExecuteUbergraph_BP_Story_Event_Nobles_Wine_Tutorial");
		
		ABP_Story_Event_Nobles_Wine_Tutorial_C_ExecuteUbergraph_BP_Story_Event_Nobles_Wine_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Story_Event_Nobles_Wine_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Story_Event_Nobles_Wine_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Story_Event_Nobles_Wine_Tutorial.BP_Story_Event_Nobles_Wine_Tutorial_C");
		return ptr;
	}

}


