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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnLoopSelectionMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_InLoopMenu                                    MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_InLoop_Selection_Menu_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SpawnLoopSelectionMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, class ABP_InLoop_Selection_Menu_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnLoopSelectionMenu");
		
		ABP_5Minute_Peasants_C_SpawnLoopSelectionMenu_Params params {};
		params.Transform = Transform;
		params.MenuOption = MenuOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnLoopMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanBeGrabbed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_Loop_Menu_Options                             Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Loop_Menu_Choice_Option_C*               MenuRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SpawnLoopMenu(bool CanBeGrabbed, const struct FTransform& Transform, Enum_Loop_Menu_Options Options, class ABP_Loop_Menu_Choice_Option_C** MenuRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnLoopMenu");
		
		ABP_5Minute_Peasants_C_SpawnLoopMenu_Params params {};
		params.CanBeGrabbed = CanBeGrabbed;
		params.Transform = Transform;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuRef != nullptr)
			*MenuRef = params.MenuRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnCustomer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACustomerSpawnPoint_C*                       SplineRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomerNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		Enum_Game_Stages                                   GameStage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Customer_C*                              Customer                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnCustomer");
		
		ABP_5Minute_Peasants_C_SpawnCustomer_Params params {};
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckFoodBurned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderNewValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Burnt                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::CheckFoodBurned(int32_t Value, int32_t* OrderNewValue, bool* Burnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckFoodBurned");
		
		ABP_5Minute_Peasants_C_CheckFoodBurned_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderNewValue != nullptr)
			*OrderNewValue = params.OrderNewValue;
		if (Burnt != nullptr)
			*Burnt = params.Burnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckOrderSimple
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               CorrectOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<struct FStruct_Order>                       Orders                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MealPartCorrect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::CheckOrderSimple(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CorrectOrder, TArray<struct FStruct_Order>* Orders, bool* OrderCorrect, bool* MealPartCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckOrderSimple");
		
		ABP_5Minute_Peasants_C_CheckOrderSimple_Params params {};
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckMeal
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_Order                               CheckOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            OrderIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_Dish_Types                                    DishTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MealPartCorrect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::CheckMeal(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CheckOrder, int32_t OrderIndex, Enum_Dish_Types DishTag, bool* OrderCorrect, bool* MealPartCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckMeal");
		
		ABP_5Minute_Peasants_C_CheckMeal_Params params {};
		params.CurrentOrder = CurrentOrder;
		params.CheckOrder = CheckOrder;
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckPlate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::CheckPlate(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckPlate");
		
		ABP_5Minute_Peasants_C_CheckPlate_Params params {};
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckSoup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::CheckSoup(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CheckSoup");
		
		ABP_5Minute_Peasants_C_CheckSoup_Params params {};
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetOrderPeasantsStage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::GetOrderPeasantsStage(class FString* Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetOrderPeasantsStage");
		
		ABP_5Minute_Peasants_C_GetOrderPeasantsStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Order != nullptr)
			*Order = params.Order;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetMeal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::GetMeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetMeal");
		
		ABP_5Minute_Peasants_C_GetMeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetSoup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                SoupOrder                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_5Minute_Peasants_C::GetSoup(TArray<class FText>* SoupOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetSoup");
		
		ABP_5Minute_Peasants_C_GetSoup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoupOrder != nullptr)
			*SoupOrder = params.SoupOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetPottage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Pottage                                                    (Parm, OutParm)
	 */
	void ABP_5Minute_Peasants_C::GetPottage(class FText* Pottage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetPottage");
		
		ABP_5Minute_Peasants_C_GetPottage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pottage != nullptr)
			*Pottage = params.Pottage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetPlateMain
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Plate                                                      (Parm, OutParm)
	 */
	void ABP_5Minute_Peasants_C::GetPlateMain(class FText* Plate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetPlateMain");
		
		ABP_5Minute_Peasants_C_GetPlateMain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Plate != nullptr)
			*Plate = params.Plate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetDrink
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Meal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_5Minute_Peasants_C::GetDrink(bool Meal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetDrink");
		
		ABP_5Minute_Peasants_C_GetDrink_Params params {};
		params.Meal = Meal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetBread
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        BreadType                                                  (Parm, OutParm)
	 */
	void ABP_5Minute_Peasants_C::GetBread(class FText* BreadType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetBread");
		
		ABP_5Minute_Peasants_C_GetBread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreadType != nullptr)
			*BreadType = params.BreadType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.UserConstructionScript");
		
		ABP_5Minute_Peasants_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ClearStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ClearStats");
		
		ABP_5Minute_Peasants_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetBonusCustomerValueAndTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_Order                               Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::GetBonusCustomerValueAndTimer(const struct FStruct_Order& Order, class ABP_Customer_C* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GetBonusCustomerValueAndTimer");
		
		ABP_5Minute_Peasants_C_GetBonusCustomerValueAndTimer_Params params {};
		params.Order = Order;
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnCoinsWhenOrderCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OrderValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Customer_C*                              Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        CoinStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParticleSpawnPoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SpawnCoinsWhenOrderCompleted(int32_t OrderValue, class ABP_Customer_C* Customer, class UStaticMeshComponent* CoinStack, class USceneComponent* ParticleSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnCoinsWhenOrderCompleted");
		
		ABP_5Minute_Peasants_C_SpawnCoinsWhenOrderCompleted_Params params {};
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
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ComboMoneyBurstMealPart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        MoneyStack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::ComboMoneyBurstMealPart(class UStaticMeshComponent* MoneyStack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ComboMoneyBurstMealPart");
		
		ABP_5Minute_Peasants_C_ComboMoneyBurstMealPart_Params params {};
		params.MoneyStack = MoneyStack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupLoopStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SetupLoopStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupLoopStart");
		
		ABP_5Minute_Peasants_C_SetupLoopStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GenerateOrderTag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::GenerateOrderTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.GenerateOrderTag");
		
		ABP_5Minute_Peasants_C_GenerateOrderTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SetupOrder(const class FString& Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupOrder");
		
		ABP_5Minute_Peasants_C_SetupOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupCustomerUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::SetupCustomerUI(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupCustomerUI");
		
		ABP_5Minute_Peasants_C_SetupCustomerUI_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.HideDeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::HideDeliveryBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.HideDeliveryBay");
		
		ABP_5Minute_Peasants_C_HideDeliveryBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::CloseCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CloseCurtain");
		
		ABP_5Minute_Peasants_C_CloseCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::OpenCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.OpenCurtain");
		
		ABP_5Minute_Peasants_C_OpenCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.RemoveEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::RemoveEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.RemoveEquipment");
		
		ABP_5Minute_Peasants_C_RemoveEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.MusicTransition:Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::MusicTransitionPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.MusicTransition:Play");
		
		ABP_5Minute_Peasants_C_MusicTransitionPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnEndUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SpawnEndUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnEndUI");
		
		ABP_5Minute_Peasants_C_SpawnEndUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupLoopPanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SetupLoopPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SetupLoopPanel");
		
		ABP_5Minute_Peasants_C_SetupLoopPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.Setup:Coin Chest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SetupCoinChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.Setup:Coin Chest");
		
		ABP_5Minute_Peasants_C_SetupCoinChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnBird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SpawnBird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnBird");
		
		ABP_5Minute_Peasants_C_SpawnBird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CreateComboUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::CreateComboUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.CreateComboUI");
		
		ABP_5Minute_Peasants_C_CreateComboUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnKeyboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_5Minute_Peasants_C::SpawnKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.SpawnKeyboard");
		
		ABP_5Minute_Peasants_C_SpawnKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ExecuteUbergraph_BP_5Minute_Peasants
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_5Minute_Peasants_C::ExecuteUbergraph_BP_5Minute_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_5Minute_Peasants.BP_5Minute_Peasants_C.ExecuteUbergraph_BP_5Minute_Peasants");
		
		ABP_5Minute_Peasants_C_ExecuteUbergraph_BP_5Minute_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_5Minute_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_5Minute_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_5Minute_Peasants.BP_5Minute_Peasants_C");
		return ptr;
	}

}


