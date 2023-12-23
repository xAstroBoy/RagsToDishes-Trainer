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
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetCustomers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABP_Customer_C*>                      customers                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_DeliveryBay_Royals_C::GetCustomers(TArray<class ABP_Customer_C*>* customers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetCustomers");
		
		ABP_DeliveryBay_Royals_C_GetCustomers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (customers != nullptr)
			*customers = params.customers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.MealDelivered
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Main                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MealPartCorrect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::MealDelivered(const struct FStruct_Order& Order, class ABP_Customer_C* Customer, int32_t Index, bool Main, bool* OrderCorrect, bool* MealPartCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.MealDelivered");
		
		ABP_DeliveryBay_Royals_C_MealDelivered_Params params {};
		params.Order = Order;
		params.Customer = Customer;
		params.Index = Index;
		params.Main = Main;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderCorrect != nullptr)
			*OrderCorrect = params.OrderCorrect;
		if (MealPartCorrect != nullptr)
			*MealPartCorrect = params.MealPartCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetRushHourVariables
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LoopTimeOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RushMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RushHourMultiplier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RushHourBonus                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::GetRushHourVariables(bool* LoopTimeOut, bool* RushMode, float* RushHourMultiplier, int32_t* RushHourBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetRushHourVariables");
		
		ABP_DeliveryBay_Royals_C_GetRushHourVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoopTimeOut != nullptr)
			*LoopTimeOut = params.LoopTimeOut;
		if (RushMode != nullptr)
			*RushMode = params.RushMode;
		if (RushHourMultiplier != nullptr)
			*RushHourMultiplier = params.RushHourMultiplier;
		if (RushHourBonus != nullptr)
			*RushHourBonus = params.RushHourBonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetOrderManager_Orders
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FStruct_Order>                       Orders                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_DeliveryBay_Royals_C::GetOrderManager_Orders(TArray<struct FStruct_Order>* Orders)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetOrderManager_Orders");
		
		ABP_DeliveryBay_Royals_C_GetOrderManager_Orders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Orders != nullptr)
			*Orders = params.Orders;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetIndividualCustomer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              customers                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::GetIndividualCustomer(int32_t OrderIndex, class ABP_Customer_C** customers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.GetIndividualCustomer");
		
		ABP_DeliveryBay_Royals_C_GetIndividualCustomer_Params params {};
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (customers != nullptr)
			*customers = params.customers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.OrderCorrectWorkoutMoney
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_Customer_Satisfaction                         CustomerSatisfaction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BonusCustomer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UpdatedOrderValue                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::OrderCorrectWorkoutMoney(int32_t OrderValue, Enum_Customer_Satisfaction CustomerSatisfaction, bool BonusCustomer, int32_t* UpdatedOrderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.OrderCorrectWorkoutMoney");
		
		ABP_DeliveryBay_Royals_C_OrderCorrectWorkoutMoney_Params params {};
		params.OrderValue = OrderValue;
		params.CustomerSatisfaction = CustomerSatisfaction;
		params.BonusCustomer = BonusCustomer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedOrderValue != nullptr)
			*UpdatedOrderValue = params.UpdatedOrderValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckOrderSimple
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               CorrectOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<struct FStruct_Order>                       Orders                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MealPartCorrect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckOrderSimple(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CorrectOrder, TArray<struct FStruct_Order>* Orders, bool* OrderCorrect, bool* MealPartCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckOrderSimple");
		
		ABP_DeliveryBay_Royals_C_CheckOrderSimple_Params params {};
		params.CurrentOrder = CurrentOrder;
		params.CorrectOrder = CorrectOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Orders != nullptr)
			*Orders = params.Orders;
		if (OrderCorrect != nullptr)
			*OrderCorrect = params.OrderCorrect;
		if (MealPartCorrect != nullptr)
			*MealPartCorrect = params.MealPartCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckPlatterOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckPlatterOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckPlatterOrder");
		
		ABP_DeliveryBay_Royals_C_CheckPlatterOrder_Params params {};
		params.CurrentOrder = CurrentOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderIngredients != nullptr)
			*OrderIngredients = params.OrderIngredients;
		if (CorrectOrder != nullptr)
			*CorrectOrder = params.CorrectOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckCakeOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckCakeOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckCakeOrder");
		
		ABP_DeliveryBay_Royals_C_CheckCakeOrder_Params params {};
		params.CurrentOrder = CurrentOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderIngredients != nullptr)
			*OrderIngredients = params.OrderIngredients;
		if (CorrectOrder != nullptr)
			*CorrectOrder = params.CorrectOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckFruitOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckFruitOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckFruitOrder");
		
		ABP_DeliveryBay_Royals_C_CheckFruitOrder_Params params {};
		params.CurrentOrder = CurrentOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderIngredients != nullptr)
			*OrderIngredients = params.OrderIngredients;
		if (CorrectOrder != nullptr)
			*CorrectOrder = params.CorrectOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckPieOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckPieOrder");
		
		ABP_DeliveryBay_Royals_C_CheckPieOrder_Params params {};
		params.CurrentOrder = CurrentOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderIngredients != nullptr)
			*OrderIngredients = params.OrderIngredients;
		if (CorrectOrder != nullptr)
			*CorrectOrder = params.CorrectOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckMeal
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               CheckOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FText                                        OrderDrink                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_Dish_Types                                    DishTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MealPartCorrect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::CheckMeal(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CheckOrder, const class FText& OrderDrink, int32_t OrderIndex, Enum_Dish_Types DishTag, bool* OrderCorrect, bool* MealPartCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckMeal");
		
		ABP_DeliveryBay_Royals_C_CheckMeal_Params params {};
		params.CurrentOrder = CurrentOrder;
		params.CheckOrder = CheckOrder;
		params.OrderDrink = OrderDrink;
		params.OrderIndex = OrderIndex;
		params.DishTag = DishTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderCorrect != nullptr)
			*OrderCorrect = params.OrderCorrect;
		if (MealPartCorrect != nullptr)
			*MealPartCorrect = params.MealPartCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DeliveryBay_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.UserConstructionScript");
		
		ABP_DeliveryBay_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DeliveryBay_Royals_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ReceiveBeginPlay");
		
		ABP_DeliveryBay_Royals_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CustomerSatisfaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Customer_Satisfaction                         Satisfaction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::CustomerSatisfaction(Enum_Customer_Satisfaction Satisfaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CustomerSatisfaction");
		
		ABP_DeliveryBay_Royals_C_CustomerSatisfaction_Params params {};
		params.Satisfaction = Satisfaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ConsecutiveFastOrders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OriginalTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeliveryTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::ConsecutiveFastOrders(float OriginalTime, float DeliveryTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ConsecutiveFastOrders");
		
		ABP_DeliveryBay_Royals_C_ConsecutiveFastOrders_Params params {};
		params.OriginalTime = OriginalTime;
		params.DeliveryTime = DeliveryTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.SetRushHour
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::SetRushHour(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.SetRushHour");
		
		ABP_DeliveryBay_Royals_C_SetRushHour_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckFreeSample
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BayNumber                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::CheckFreeSample(class AActor* Actor, int32_t BayNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.CheckFreeSample");
		
		ABP_DeliveryBay_Royals_C_CheckFreeSample_Params params {};
		params.Actor = Actor;
		params.BayNumber = BayNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DeliveryBay_Royals_C_BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.AcceptOrder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Burnt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DeliveryBay_Royals_C::AcceptOrder(const struct FStruct_Order& Order, int32_t OrderIndex, bool Burnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.AcceptOrder");
		
		ABP_DeliveryBay_Royals_C_AcceptOrder_Params params {};
		params.Order = Order;
		params.OrderIndex = OrderIndex;
		params.Burnt = Burnt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.SpawnCoinsWhenOrderCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        CoinStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParticleSpawnPoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::SpawnCoinsWhenOrderCompleted(int32_t OrderValue, class ABP_Customer_C* Customer, class UStaticMeshComponent* CoinStack, class USceneComponent* ParticleSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.SpawnCoinsWhenOrderCompleted");
		
		ABP_DeliveryBay_Royals_C_SpawnCoinsWhenOrderCompleted_Params params {};
		params.OrderValue = OrderValue;
		params.Customer = Customer;
		params.CoinStack = CoinStack;
		params.ParticleSpawnPoint = ParticleSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.DeliveryBay2_Throw
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::DeliveryBay2_Throw(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.DeliveryBay2_Throw");
		
		ABP_DeliveryBay_Royals_C_DeliveryBay2_Throw_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.DeliveryBay2_HandIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::DeliveryBay2_HandIn(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.DeliveryBay2_HandIn");
		
		ABP_DeliveryBay_Royals_C_DeliveryBay2_HandIn_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ExecuteUbergraph_BP_DeliveryBay_Royals
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeliveryBay_Royals_C::ExecuteUbergraph_BP_DeliveryBay_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C.ExecuteUbergraph_BP_DeliveryBay_Royals");
		
		ABP_DeliveryBay_Royals_C_ExecuteUbergraph_BP_DeliveryBay_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DeliveryBay_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeliveryBay_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeliveryBay_Royals.BP_DeliveryBay_Royals_C");
		return ptr;
	}

}


