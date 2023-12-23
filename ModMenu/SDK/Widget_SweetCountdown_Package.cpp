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
	 * 		Name   -> Function Widget_SweetCountdown.Widget_SweetCountdown_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SweetCountdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SweetCountdown.Widget_SweetCountdown_C.Construct");
		
		UWidget_SweetCountdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SweetCountdown.Widget_SweetCountdown_C.GetTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SweetCountdown_C::GetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SweetCountdown.Widget_SweetCountdown_C.GetTimer");
		
		UWidget_SweetCountdown_C_GetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SweetCountdown.Widget_SweetCountdown_C.StartTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SweetCountdown_C::StartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SweetCountdown.Widget_SweetCountdown_C.StartTime");
		
		UWidget_SweetCountdown_C_StartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SweetCountdown.Widget_SweetCountdown_C.StopTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SweetCountdown_C::StopTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SweetCountdown.Widget_SweetCountdown_C.StopTime");
		
		UWidget_SweetCountdown_C_StopTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SweetCountdown.Widget_SweetCountdown_C.ExecuteUbergraph_Widget_SweetCountdown
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SweetCountdown_C::ExecuteUbergraph_Widget_SweetCountdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SweetCountdown.Widget_SweetCountdown_C.ExecuteUbergraph_Widget_SweetCountdown");
		
		UWidget_SweetCountdown_C_ExecuteUbergraph_Widget_SweetCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SweetCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SweetCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SweetCountdown.Widget_SweetCountdown_C");
		return ptr;
	}

}


