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
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::SideOrderIconsRoyals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Royals");
		
		UWidget_MealOrder_Icons_C_SideOrderIconsRoyals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::MainOrderIconsRoyals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Royals");
		
		UWidget_MealOrder_Icons_C_MainOrderIconsRoyals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSkewerSeasoning
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Seasoning                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateBrush                                 Image                                                      (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_MealOrder_Icons_C::GetSkewerSeasoning(const class FText& Ingredient, const class FText& Seasoning, struct FSlateBrush* Image, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSkewerSeasoning");
		
		UWidget_MealOrder_Icons_C_GetSkewerSeasoning_Params params {};
		params.Ingredient = Ingredient;
		params.Seasoning = Seasoning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetStewIcons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UImage*                                      StewBowl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_MealOrder_Icons_C::GetStewIcons(const class FText& Ingredient, class UImage* StewBowl, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetStewIcons");
		
		UWidget_MealOrder_Icons_C_GetStewIcons_Params params {};
		params.Ingredient = Ingredient;
		params.StewBowl = StewBowl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::SideOrderIconsNobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Nobles");
		
		UWidget_MealOrder_Icons_C_SideOrderIconsNobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::MainOrderIconsNobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Nobles");
		
		UWidget_MealOrder_Icons_C_MainOrderIconsNobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::SideOrderIconsPeasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Peasants");
		
		UWidget_MealOrder_Icons_C_SideOrderIconsPeasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::MainOrderIconsPeasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Peasants");
		
		UWidget_MealOrder_Icons_C_MainOrderIconsPeasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Setup");
		
		UWidget_MealOrder_Icons_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSoupIcons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Ingredient                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateBrush                                 Icon                                                       (Parm, OutParm)
	 */
	void UWidget_MealOrder_Icons_C::GetSoupIcons(const class FText& Ingredient, struct FSlateBrush* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSoupIcons");
		
		UWidget_MealOrder_Icons_C_GetSoupIcons_Params params {};
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
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Construct");
		
		UWidget_MealOrder_Icons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ShowOrderValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_Customer_Satisfaction                         CustomerSatisfaction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BonusCustomer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_MealOrder_Icons_C::ShowOrderValue(int32_t OrderValue, Enum_Customer_Satisfaction CustomerSatisfaction, bool BonusCustomer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ShowOrderValue");
		
		UWidget_MealOrder_Icons_C_ShowOrderValue_Params params {};
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
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetMainDelivered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::SetMainDelivered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetMainDelivered");
		
		UWidget_MealOrder_Icons_C_SetMainDelivered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetSideDelivered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::SetSideDelivered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetSideDelivered");
		
		UWidget_MealOrder_Icons_C_SetSideDelivered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSatisfactionAndTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MealOrder_Icons_C::GetSatisfactionAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSatisfactionAndTime");
		
		UWidget_MealOrder_Icons_C_GetSatisfactionAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ExecuteUbergraph_Widget_MealOrder_Icons
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MealOrder_Icons_C::ExecuteUbergraph_Widget_MealOrder_Icons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ExecuteUbergraph_Widget_MealOrder_Icons");
		
		UWidget_MealOrder_Icons_C_ExecuteUbergraph_Widget_MealOrder_Icons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MealOrder_Icons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MealOrder_Icons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MealOrder_Icons.Widget_MealOrder_Icons_C");
		return ptr;
	}

}


