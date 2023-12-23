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
	 * 		Name   -> Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.Get_Combo_Counter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_5MinuteMode_ComboBar_C::Get_Combo_Counter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.Get_Combo_Counter");
		
		UWidget_5MinuteMode_ComboBar_C_Get_Combo_Counter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_ComboBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.Construct");
		
		UWidget_5MinuteMode_ComboBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.ExecuteUbergraph_Widget_5MinuteMode_ComboBar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_5MinuteMode_ComboBar_C::ExecuteUbergraph_Widget_5MinuteMode_ComboBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C.ExecuteUbergraph_Widget_5MinuteMode_ComboBar");
		
		UWidget_5MinuteMode_ComboBar_C_ExecuteUbergraph_Widget_5MinuteMode_ComboBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_5MinuteMode_ComboBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_5MinuteMode_ComboBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_5MinuteMode_ComboBar.Widget_5MinuteMode_ComboBar_C");
		return ptr;
	}

}


