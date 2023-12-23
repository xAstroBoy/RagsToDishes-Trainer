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
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnCustomer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACustomerSpawnPoint_C*                       SplineRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomerNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		Enum_Game_Stages                                   GameStage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Customer_C*                              Customer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnCustomer");
		
		ABP_Order_Manager_Nobles_C_SpawnCustomer_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetupOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OrderString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::SetupOrder(const class FString& OrderString, int32_t* OrderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetupOrder");
		
		ABP_Order_Manager_Nobles_C_SetupOrder_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetOrderInDeliveryBay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetOrderInDeliveryBay");
		
		ABP_Order_Manager_Nobles_C_SetOrderInDeliveryBay_Params params {};
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
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::GetOrderString(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString");
		
		ABP_Order_Manager_Nobles_C_GetOrderString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString_Nobles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::GetOrderString_Nobles(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetOrderString_Nobles");
		
		ABP_Order_Manager_Nobles_C_GetOrderString_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetMeal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::GetMeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetMeal");
		
		ABP_Order_Manager_Nobles_C_GetMeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetStewIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                StewOrder                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_Order_Manager_Nobles_C::GetStewIngredients(TArray<class FText>* StewOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetStewIngredients");
		
		ABP_Order_Manager_Nobles_C_GetStewIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StewOrder != nullptr)
			*StewOrder = params.StewOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetPieIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Pie                                                        (Parm, OutParm)
	 */
	void ABP_Order_Manager_Nobles_C::GetPieIngredients(class FText* Pie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetPieIngredients");
		
		ABP_Order_Manager_Nobles_C_GetPieIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pie != nullptr)
			*Pie = params.Pie;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetSkewerIngredients
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Skewer                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_Order_Manager_Nobles_C::GetSkewerIngredients(TArray<class FText>* Skewer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetSkewerIngredients");
		
		ABP_Order_Manager_Nobles_C_GetSkewerIngredients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skewer != nullptr)
			*Skewer = params.Skewer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetDrink
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Drink                                                      (Parm, OutParm)
	 */
	void ABP_Order_Manager_Nobles_C::GetDrink(class FText* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetDrink");
		
		ABP_Order_Manager_Nobles_C_GetDrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Drink != nullptr)
			*Drink = params.Drink;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBread
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        BreadType                                                  (Parm, OutParm)
	 */
	void ABP_Order_Manager_Nobles_C::GetBread(class FText* BreadType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBread");
		
		ABP_Order_Manager_Nobles_C_GetBread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreadType != nullptr)
			*BreadType = params.BreadType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.UserConstructionScript");
		
		ABP_Order_Manager_Nobles_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ClearStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ClearStats");
		
		ABP_Order_Manager_Nobles_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Pie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockPie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Pie");
		
		ABP_Order_Manager_Nobles_C_UnlockPie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Wine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockWine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Wine");
		
		ABP_Order_Manager_Nobles_C_UnlockWine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Stew
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockStew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Stew");
		
		ABP_Order_Manager_Nobles_C_UnlockStew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockSeasoningLevel1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel1");
		
		ABP_Order_Manager_Nobles_C_UnlockSeasoningLevel1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Fish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:Fish");
		
		ABP_Order_Manager_Nobles_C_UnlockFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::UnlockSeasoningLevel2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.Unlock:SeasoningLevel2");
		
		ABP_Order_Manager_Nobles_C_UnlockSeasoningLevel2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::SpawnOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SpawnOrders");
		
		ABP_Order_Manager_Nobles_C_SpawnOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.IncreaseOrderDifficulty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::IncreaseOrderDifficulty(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.IncreaseOrderDifficulty");
		
		ABP_Order_Manager_Nobles_C_IncreaseOrderDifficulty_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBonusCustomerValueAndTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.GetBonusCustomerValueAndTime");
		
		ABP_Order_Manager_Nobles_C_GetBonusCustomerValueAndTime_Params params {};
		params.Order = Order;
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetCustomerWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::SetCustomerWidget(int32_t OrderIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.SetCustomerWidget");
		
		ABP_Order_Manager_Nobles_C_SetCustomerWidget_Params params {};
		params.OrderIndex = OrderIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.BonusCustomerCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::BonusCustomerCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.BonusCustomerCounter");
		
		ABP_Order_Manager_Nobles_C_BonusCustomerCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Order_Manager_Nobles_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.LoadGame");
		
		ABP_Order_Manager_Nobles_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ExecuteUbergraph_BP_Order_Manager_Nobles
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Order_Manager_Nobles_C::ExecuteUbergraph_BP_Order_Manager_Nobles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C.ExecuteUbergraph_BP_Order_Manager_Nobles");
		
		ABP_Order_Manager_Nobles_C_ExecuteUbergraph_BP_Order_Manager_Nobles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Order_Manager_Nobles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Order_Manager_Nobles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C");
		return ptr;
	}

}


