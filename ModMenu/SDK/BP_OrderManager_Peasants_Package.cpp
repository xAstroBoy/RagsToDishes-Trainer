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
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnCustomer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACustomerSpawnPoint_C*                       SplineRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomerNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		Enum_Game_Stages                                   GameStage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Customer_C*                              Customer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnCustomer");
		
		ABP_OrderManager_Peasants_C_SpawnCustomer_Params params {};
		params.SplineRef = SplineRef;
		params.CustomerNumber = CustomerNumber;
		params.Order = Order;
		params.GameStage = GameStage;
		params.Bonus = Bonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Customer != nullptr)
			*Customer = params.Customer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetupOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OrderString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::SetupOrder(const class FString& OrderString, int32_t* OrderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetupOrder");
		
		ABP_OrderManager_Peasants_C_SetupOrder_Params params {};
		params.OrderString = OrderString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderValue != nullptr)
			*OrderValue = params.OrderValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetOrderInDeliveryBay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetOrderInDeliveryBay");
		
		ABP_OrderManager_Peasants_C_SetOrderInDeliveryBay_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderIndex != nullptr)
			*OrderIndex = params.OrderIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::GetOrderString(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString");
		
		ABP_OrderManager_Peasants_C_GetOrderString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString_Peasants
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::GetOrderString_Peasants(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetOrderString_Peasants");
		
		ABP_OrderManager_Peasants_C_GetOrderString_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetMeal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::GetMeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetMeal");
		
		ABP_OrderManager_Peasants_C_GetMeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBread
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        BreadType                                                  (Parm, OutParm)
	 */
	void ABP_OrderManager_Peasants_C::GetBread(class FText* BreadType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBread");
		
		ABP_OrderManager_Peasants_C_GetBread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreadType != nullptr)
			*BreadType = params.BreadType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetDrink
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Meal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Drink                                                      (Parm, OutParm)
	 */
	void ABP_OrderManager_Peasants_C::GetDrink(bool Meal, class FText* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetDrink");
		
		ABP_OrderManager_Peasants_C_GetDrink_Params params {};
		params.Meal = Meal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Drink != nullptr)
			*Drink = params.Drink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPlateMain
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Plate                                                      (Parm, OutParm)
	 */
	void ABP_OrderManager_Peasants_C::GetPlateMain(class FText* Plate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPlateMain");
		
		ABP_OrderManager_Peasants_C_GetPlateMain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Plate != nullptr)
			*Plate = params.Plate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPottage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Pottage                                                    (Parm, OutParm)
	 */
	void ABP_OrderManager_Peasants_C::GetPottage(class FText* Pottage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetPottage");
		
		ABP_OrderManager_Peasants_C_GetPottage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pottage != nullptr)
			*Pottage = params.Pottage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetSoup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                SoupOrder                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_OrderManager_Peasants_C::GetSoup(TArray<class FText>* SoupOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetSoup");
		
		ABP_OrderManager_Peasants_C_GetSoup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoupOrder != nullptr)
			*SoupOrder = params.SoupOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UserConstructionScript");
		
		ABP_OrderManager_Peasants_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockOatmeal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockOatmeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockOatmeal");
		
		ABP_OrderManager_Peasants_C_UnlockOatmeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockCheese
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockCheese()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockCheese");
		
		ABP_OrderManager_Peasants_C_UnlockCheese_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Pea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockPottagePea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Pea");
		
		ABP_OrderManager_Peasants_C_UnlockPottagePea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockSoup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoup");
		
		ABP_OrderManager_Peasants_C_UnlockSoup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockMeals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockMeals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockMeals");
		
		ABP_OrderManager_Peasants_C_UnlockMeals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockAle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockAle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockAle");
		
		ABP_OrderManager_Peasants_C_UnlockAle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Bean
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockPottageBean()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockPottage:Bean");
		
		ABP_OrderManager_Peasants_C_UnlockPottageBean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoupIngredients
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::UnlockSoupIngredients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.UnlockSoupIngredients");
		
		ABP_OrderManager_Peasants_C_UnlockSoupIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::SpawnOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SpawnOrders");
		
		ABP_OrderManager_Peasants_C_SpawnOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ClearStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ClearStats");
		
		ABP_OrderManager_Peasants_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.IncreaseOrderDifficulty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::IncreaseOrderDifficulty(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.IncreaseOrderDifficulty");
		
		ABP_OrderManager_Peasants_C_IncreaseOrderDifficulty_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBonusCustomerValueAndTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.GetBonusCustomerValueAndTime");
		
		ABP_OrderManager_Peasants_C_GetBonusCustomerValueAndTime_Params params {};
		params.Order = Order;
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetCustomerWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::SetCustomerWidget(int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.SetCustomerWidget");
		
		ABP_OrderManager_Peasants_C_SetCustomerWidget_Params params {};
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.BonusCustomerCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::BonusCustomerCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.BonusCustomerCounter");
		
		ABP_OrderManager_Peasants_C_BonusCustomerCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrderManager_Peasants_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.LoadGame");
		
		ABP_OrderManager_Peasants_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ExecuteUbergraph_BP_OrderManager_Peasants
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrderManager_Peasants_C::ExecuteUbergraph_BP_OrderManager_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrderManager_Peasants.BP_OrderManager_Peasants_C.ExecuteUbergraph_BP_OrderManager_Peasants");
		
		ABP_OrderManager_Peasants_C_ExecuteUbergraph_BP_OrderManager_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrderManager_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrderManager_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrderManager_Peasants.BP_OrderManager_Peasants_C");
		return ptr;
	}

}


