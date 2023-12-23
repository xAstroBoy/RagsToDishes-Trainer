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
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::ShowOrderIconsRoyals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Royals");
		
		UWidget_SimpleOrder_Icons_C_ShowOrderIconsRoyals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Stew_Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_SimpleOrder_Icons_C::Get_Stew_Icon(const class FString& Ingredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Stew_Icon");
		
		UWidget_SimpleOrder_Icons_C_Get_Stew_Icon_Params params {};
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
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::ShowOrderIconsNobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Nobles");
		
		UWidget_SimpleOrder_Icons_C_ShowOrderIconsNobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::ShowOrderIconsPeasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Peasants");
		
		UWidget_SimpleOrder_Icons_C_ShowOrderIconsPeasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.SetupCustomer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::SetupCustomer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.SetupCustomer");
		
		UWidget_SimpleOrder_Icons_C_SetupCustomer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Soup_Icon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_SimpleOrder_Icons_C::Get_Soup_Icon(const class FString& Ingredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Soup_Icon");
		
		UWidget_SimpleOrder_Icons_C_Get_Soup_Icon_Params params {};
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
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Construct");
		
		UWidget_SimpleOrder_Icons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_Customer_Satisfaction                         CustomerSatisfaction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BonusCustomer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_SimpleOrder_Icons_C::ShowOrderValue(int32_t OrderValue, Enum_Customer_Satisfaction CustomerSatisfaction, bool BonusCustomer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderValue");
		
		UWidget_SimpleOrder_Icons_C_ShowOrderValue_Params params {};
		params.OrderValue = OrderValue;
		params.CustomerSatisfaction = CustomerSatisfaction;
		params.BonusCustomer = BonusCustomer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.GetSatisfactionAndTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SimpleOrder_Icons_C::GetSatisfactionAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.GetSatisfactionAndTime");
		
		UWidget_SimpleOrder_Icons_C_GetSatisfactionAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ExecuteUbergraph_Widget_SimpleOrder_Icons
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SimpleOrder_Icons_C::ExecuteUbergraph_Widget_SimpleOrder_Icons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ExecuteUbergraph_Widget_SimpleOrder_Icons");
		
		UWidget_SimpleOrder_Icons_C_ExecuteUbergraph_Widget_SimpleOrder_Icons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SimpleOrder_Icons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SimpleOrder_Icons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C");
		return ptr;
	}

}


