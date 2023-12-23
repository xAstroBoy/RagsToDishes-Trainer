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
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Stew_Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Bowl                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::Get_Stew_Icon(const class FString& Ingredient, class UImage* Bowl, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Stew_Icon");
		
		UWidget_End_Of_Stage_WrongOrder_C_Get_Stew_Icon_Params params {};
		params.Ingredient = Ingredient;
		params.Bowl = Bowl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_ActiveOrders
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::Get_ActiveOrders(int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_ActiveOrders");
		
		UWidget_End_Of_Stage_WrongOrder_C_Get_ActiveOrders_Params params {};
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Soup_Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::Get_Soup_Icon(const class FString& Ingredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Soup_Icon");
		
		UWidget_End_Of_Stage_WrongOrder_C_Get_Soup_Icon_Params params {};
		params.Ingredient = Ingredient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.SetupWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::SetupWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.SetupWidget");
		
		UWidget_End_Of_Stage_WrongOrder_C_SetupWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.BurntOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::BurntOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.BurntOrder");
		
		UWidget_End_Of_Stage_WrongOrder_C_BurntOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.GetDeliveredDish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::GetDeliveredDish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.GetDeliveredDish");
		
		UWidget_End_Of_Stage_WrongOrder_C_GetDeliveredDish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_WrongOrder_C::ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder");
		
		UWidget_End_Of_Stage_WrongOrder_C_ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_End_Of_Stage_WrongOrder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_End_Of_Stage_WrongOrder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C");
		return ptr;
	}

}


