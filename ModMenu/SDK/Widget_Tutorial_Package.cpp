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
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.ContinueDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UserInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_Tutorial_C::ContinueDialogue(bool UserInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.ContinueDialogue");
		
		UWidget_Tutorial_C_ContinueDialogue_Params params {};
		params.UserInput = UserInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.RenderNextDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::RenderNextDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.RenderNextDialogue");
		
		UWidget_Tutorial_C_RenderNextDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.DisplayContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::DisplayContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.DisplayContinueArrow");
		
		UWidget_Tutorial_C_DisplayContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.HideContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::HideContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.HideContinueArrow");
		
		UWidget_Tutorial_C_HideContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.SpawnEquipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::SpawnEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.SpawnEquipment");
		
		UWidget_Tutorial_C_SpawnEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.DestroyEquipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::DestroyEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.DestroyEquipment");
		
		UWidget_Tutorial_C_DestroyEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Tutorial_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.OnInitialized");
		
		UWidget_Tutorial_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tutorial.Widget_Tutorial_C.ExecuteUbergraph_Widget_Tutorial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Tutorial_C::ExecuteUbergraph_Widget_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tutorial.Widget_Tutorial_C.ExecuteUbergraph_Widget_Tutorial");
		
		UWidget_Tutorial_C_ExecuteUbergraph_Widget_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Tutorial.Widget_Tutorial_C");
		return ptr;
	}

}


