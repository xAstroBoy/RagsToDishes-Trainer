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
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetTimers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::GetTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetTimers");
		
		UWidget_End_Of_Stage_OrderIcons_C_GetTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Order_Container_Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::Order_Container_Visibility(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Order_Container_Visibility");
		
		UWidget_End_Of_Stage_OrderIcons_C_Order_Container_Visibility_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetStewIcon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UImage*                                      StewBowl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValidIngredient                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::GetStewIcon(const class FString& Ingredient, class UImage* StewBowl, bool* ValidIngredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetStewIcon");
		
		UWidget_End_Of_Stage_OrderIcons_C_GetStewIcon_Params params {};
		params.Ingredient = Ingredient;
		params.StewBowl = StewBowl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidIngredient != nullptr)
			*ValidIngredient = params.ValidIngredient;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Dish_Visibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::Get_Dish_Visibility(int32_t WidgetIndex, int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Dish_Visibility");
		
		UWidget_End_Of_Stage_OrderIcons_C_Get_Dish_Visibility_Params params {};
		params.WidgetIndex = WidgetIndex;
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Soup_Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ValidIngredient                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::Get_Soup_Icon(const class FString& Ingredient, bool* ValidIngredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Soup_Icon");
		
		UWidget_End_Of_Stage_OrderIcons_C_Get_Soup_Icon_Params params {};
		params.Ingredient = Ingredient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidIngredient != nullptr)
			*ValidIngredient = params.ValidIngredient;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Construct");
		
		UWidget_End_Of_Stage_OrderIcons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.SetOrderDelivered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::SetOrderDelivered(int32_t OrderNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.SetOrderDelivered");
		
		UWidget_End_Of_Stage_OrderIcons_C_SetOrderDelivered_Params params {};
		params.OrderNumber = OrderNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::StartUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartUI");
		
		UWidget_End_Of_Stage_OrderIcons_C_StartUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ToggleDishVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::ToggleDishVisibility(int32_t WidgetIndex, int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ToggleDishVisibility");
		
		UWidget_End_Of_Stage_OrderIcons_C_ToggleDishVisibility_Params params {};
		params.WidgetIndex = WidgetIndex;
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartTimer");
		
		UWidget_End_Of_Stage_OrderIcons_C_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetSatisfactionAndTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::GetSatisfactionAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetSatisfactionAndTime");
		
		UWidget_End_Of_Stage_OrderIcons_C_GetSatisfactionAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Start:SweetsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::StartSweetsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Start:SweetsEvent");
		
		UWidget_End_Of_Stage_OrderIcons_C_StartSweetsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.End:SweetsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::EndSweetsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.End:SweetsEvent");
		
		UWidget_End_Of_Stage_OrderIcons_C_EndSweetsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_OrderIcons_C::ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons");
		
		UWidget_End_Of_Stage_OrderIcons_C_ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_End_Of_Stage_OrderIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_End_Of_Stage_OrderIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C");
		return ptr;
	}

}


