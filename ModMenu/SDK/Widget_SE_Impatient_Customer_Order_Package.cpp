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
	 * 		Name   -> Function Widget_SE_Impatient_Customer_Order.Widget_SE_Impatient_Customer_Order_C.RestoreTimerBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Impatient_Customer_Order_C::RestoreTimerBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Impatient_Customer_Order.Widget_SE_Impatient_Customer_Order_C.RestoreTimerBar");
		
		UWidget_SE_Impatient_Customer_Order_C_RestoreTimerBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Impatient_Customer_Order.Widget_SE_Impatient_Customer_Order_C.ExecuteUbergraph_Widget_SE_Impatient_Customer_Order
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SE_Impatient_Customer_Order_C::ExecuteUbergraph_Widget_SE_Impatient_Customer_Order(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Impatient_Customer_Order.Widget_SE_Impatient_Customer_Order_C.ExecuteUbergraph_Widget_SE_Impatient_Customer_Order");
		
		UWidget_SE_Impatient_Customer_Order_C_ExecuteUbergraph_Widget_SE_Impatient_Customer_Order_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SE_Impatient_Customer_Order_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SE_Impatient_Customer_Order_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SE_Impatient_Customer_Order.Widget_SE_Impatient_Customer_Order_C");
		return ptr;
	}

}


