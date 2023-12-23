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
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.UserConstructionScript");
		
		AFirstPersonCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");
		
		AFirstPersonCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");
		
		AFirstPersonCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_P_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_3");
		
		AFirstPersonCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_N_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_N_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_N_K2Node_InputKeyEvent_2");
		
		AFirstPersonCharacter_C_InpActEvt_N_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_U_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_U_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_U_K2Node_InputKeyEvent_1");
		
		AFirstPersonCharacter_C_InpActEvt_U_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158");
		
		AFirstPersonCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173");
		
		AFirstPersonCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182");
		
		AFirstPersonCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193");
		
		AFirstPersonCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35");
		
		AFirstPersonCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay");
		
		AFirstPersonCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SetMenuInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::SetMenuInteraction(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SetMenuInteraction");
		
		AFirstPersonCharacter_C_SetMenuInteraction_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ExecuteUbergraph_FirstPersonCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter");
		
		AFirstPersonCharacter_C_ExecuteUbergraph_FirstPersonCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFirstPersonCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFirstPersonCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FirstPersonCharacter.FirstPersonCharacter_C");
		return ptr;
	}

}


