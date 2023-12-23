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
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnCustomer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACustomerSpawnPoint_C*                       SplineRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomerNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		Enum_Game_Stages                                   GameStage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Customer_C*                              Customer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnCustomer");
		
		ABP_Order_Manager_Royals_C_SpawnCustomer_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetMeal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::GetMeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetMeal");
		
		ABP_Order_Manager_Royals_C_GetMeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetupOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OrderString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::SetupOrder(const class FString& OrderString, int32_t* OrderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetupOrder");
		
		ABP_Order_Manager_Royals_C_SetupOrder_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetOrderInDeliveryBay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetOrderInDeliveryBay");
		
		ABP_Order_Manager_Royals_C_SetOrderInDeliveryBay_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::GetOrderString(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString");
		
		ABP_Order_Manager_Royals_C_GetOrderString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPlatterIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Platter                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_Order_Manager_Royals_C::GetPlatterIngredients(TArray<class FText>* Platter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPlatterIngredients");
		
		ABP_Order_Manager_Royals_C_GetPlatterIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Platter != nullptr)
			*Platter = params.Platter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetCakeIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Cake                                                       (Parm, OutParm)
	 */
	void ABP_Order_Manager_Royals_C::GetCakeIngredients(class FText* Cake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetCakeIngredients");
		
		ABP_Order_Manager_Royals_C_GetCakeIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cake != nullptr)
			*Cake = params.Cake;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetFruitsIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Fruits                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_Order_Manager_Royals_C::GetFruitsIngredients(TArray<class FText>* Fruits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetFruitsIngredients");
		
		ABP_Order_Manager_Royals_C_GetFruitsIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fruits != nullptr)
			*Fruits = params.Fruits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString_Royals
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::GetOrderString_Royals(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetOrderString_Royals");
		
		ABP_Order_Manager_Royals_C_GetOrderString_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetDrink
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Drink                                                      (Parm, OutParm)
	 */
	void ABP_Order_Manager_Royals_C::GetDrink(class FText* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetDrink");
		
		ABP_Order_Manager_Royals_C_GetDrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Drink != nullptr)
			*Drink = params.Drink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPieIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NoApple                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Pie                                                        (Parm, OutParm)
	 */
	void ABP_Order_Manager_Royals_C::GetPieIngredients(bool NoApple, class FText* Pie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetPieIngredients");
		
		ABP_Order_Manager_Royals_C_GetPieIngredients_Params params {};
		params.NoApple = NoApple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pie != nullptr)
			*Pie = params.Pie;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UserConstructionScript");
		
		ABP_Order_Manager_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockCake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::UnlockCake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockCake");
		
		ABP_Order_Manager_Royals_C_UnlockCake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockPlatters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::UnlockPlatters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockPlatters");
		
		ABP_Order_Manager_Royals_C_UnlockPlatters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockChocolate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::UnlockChocolate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockChocolate");
		
		ABP_Order_Manager_Royals_C_UnlockChocolate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockLobster
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::UnlockLobster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.UnlockLobster");
		
		ABP_Order_Manager_Royals_C_UnlockLobster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.IncreaseOrderDifficulty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::IncreaseOrderDifficulty(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.IncreaseOrderDifficulty");
		
		ABP_Order_Manager_Royals_C_IncreaseOrderDifficulty_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ClearStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ClearStats");
		
		ABP_Order_Manager_Royals_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::SpawnOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SpawnOrders");
		
		ABP_Order_Manager_Royals_C_SpawnOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetCustomerWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::SetCustomerWidget(int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.SetCustomerWidget");
		
		ABP_Order_Manager_Royals_C_SetCustomerWidget_Params params {};
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.BonusCustomerCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::BonusCustomerCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.BonusCustomerCounter");
		
		ABP_Order_Manager_Royals_C_BonusCustomerCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Royals_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.LoadGame");
		
		ABP_Order_Manager_Royals_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetBonusCustomerValueAndTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.GetBonusCustomerValueAndTime");
		
		ABP_Order_Manager_Royals_C_GetBonusCustomerValueAndTime_Params params {};
		params.Order = Order;
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ExecuteUbergraph_BP_Order_Manager_Royals
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Royals_C::ExecuteUbergraph_BP_Order_Manager_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Royals.BP_Order_Manager_Royals_C.ExecuteUbergraph_BP_Order_Manager_Royals");
		
		ABP_Order_Manager_Royals_C_ExecuteUbergraph_BP_Order_Manager_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Order_Manager_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Order_Manager_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Order_Manager_Royals.BP_Order_Manager_Royals_C");
		return ptr;
	}

}


