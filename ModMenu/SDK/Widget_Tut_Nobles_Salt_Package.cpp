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
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.DestroyPointers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::DestroyPointers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.DestroyPointers");
		
		UWidget_Tut_Nobles_Salt_C_DestroyPointers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.SpawnSaltPointers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::SpawnSaltPointers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.SpawnSaltPointers");
		
		UWidget_Tut_Nobles_Salt_C_SpawnSaltPointers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.RenderNextDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::RenderNextDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.RenderNextDialogue");
		
		UWidget_Tut_Nobles_Salt_C_RenderNextDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.DisplayContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::DisplayContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.DisplayContinueArrow");
		
		UWidget_Tut_Nobles_Salt_C_DisplayContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.HideContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::HideContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.HideContinueArrow");
		
		UWidget_Tut_Nobles_Salt_C_HideContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.SpawnEquipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Tut_Nobles_Salt_C::SpawnEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.SpawnEquipment");
		
		UWidget_Tut_Nobles_Salt_C_SpawnEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.ExecuteUbergraph_Widget_Tut_Nobles_Salt
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Tut_Nobles_Salt_C::ExecuteUbergraph_Widget_Tut_Nobles_Salt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C.ExecuteUbergraph_Widget_Tut_Nobles_Salt");
		
		UWidget_Tut_Nobles_Salt_C_ExecuteUbergraph_Widget_Tut_Nobles_Salt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Tut_Nobles_Salt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Tut_Nobles_Salt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Tut_Nobles_Salt.Widget_Tut_Nobles_Salt_C");
		return ptr;
	}

}


