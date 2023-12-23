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
	 * 		Name   -> Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_StartUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.Construct");
		
		UWidget_5MinuteMode_StartUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.SetupReferences
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_StartUI_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.SetupReferences");
		
		UWidget_5MinuteMode_StartUI_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.ExecuteUbergraph_Widget_5MinuteMode_StartUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_5MinuteMode_StartUI_C::ExecuteUbergraph_Widget_5MinuteMode_StartUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C.ExecuteUbergraph_Widget_5MinuteMode_StartUI");
		
		UWidget_5MinuteMode_StartUI_C_ExecuteUbergraph_Widget_5MinuteMode_StartUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_5MinuteMode_StartUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_5MinuteMode_StartUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_5MinuteMode_StartUI.Widget_5MinuteMode_StartUI_C");
		return ptr;
	}

}


