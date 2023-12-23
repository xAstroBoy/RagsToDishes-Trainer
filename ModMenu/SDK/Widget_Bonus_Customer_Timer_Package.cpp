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
	 * 		Name   -> Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Bonus_Customer_Timer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.Construct");
		
		UWidget_Bonus_Customer_Timer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.SetTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Bonus_Customer_Timer_C::SetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.SetTimer");
		
		UWidget_Bonus_Customer_Timer_C_SetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.ExecuteUbergraph_Widget_Bonus_Customer_Timer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Bonus_Customer_Timer_C::ExecuteUbergraph_Widget_Bonus_Customer_Timer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C.ExecuteUbergraph_Widget_Bonus_Customer_Timer");
		
		UWidget_Bonus_Customer_Timer_C_ExecuteUbergraph_Widget_Bonus_Customer_Timer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Bonus_Customer_Timer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Bonus_Customer_Timer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Bonus_Customer_Timer.Widget_Bonus_Customer_Timer_C");
		return ptr;
	}

}


