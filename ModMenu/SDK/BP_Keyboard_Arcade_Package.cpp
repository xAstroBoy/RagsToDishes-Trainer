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
	 * 		Name   -> Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.SaveInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SavedSuccessfully                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Keyboard_Arcade_C::SaveInput(bool* SavedSuccessfully)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.SaveInput");
		
		ABP_Keyboard_Arcade_C_SaveInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SavedSuccessfully != nullptr)
			*SavedSuccessfully = params.SavedSuccessfully;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.Function:DestroyKeyboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Keyboard_Arcade_C::FunctionDestroyKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.Function:DestroyKeyboard");
		
		ABP_Keyboard_Arcade_C_FunctionDestroyKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Keyboard_Arcade_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.UserConstructionScript");
		
		ABP_Keyboard_Arcade_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Keyboard_Arcade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ReceiveBeginPlay");
		
		ABP_Keyboard_Arcade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ExecuteUbergraph_BP_Keyboard_Arcade
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Keyboard_Arcade_C::ExecuteUbergraph_BP_Keyboard_Arcade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ExecuteUbergraph_BP_Keyboard_Arcade");
		
		ABP_Keyboard_Arcade_C_ExecuteUbergraph_BP_Keyboard_Arcade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Keyboard_Arcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Keyboard_Arcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Keyboard_Arcade.BP_Keyboard_Arcade_C");
		return ptr;
	}

}


