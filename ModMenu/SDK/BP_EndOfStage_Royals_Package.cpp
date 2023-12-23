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
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RemoveFreeSampleArrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::RemoveFreeSampleArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RemoveFreeSampleArrow");
		
		ABP_EndOfStage_Royals_C_RemoveFreeSampleArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SpawnFreeSample
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SpawnFreeSample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SpawnFreeSample");
		
		ABP_EndOfStage_Royals_C_SpawnFreeSample_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_EndOfStage_Order                    CompareTo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckOrder(class ABP_Dish_C* CurrentOrder, const struct FStruct_EndOfStage_Order& CompareTo, bool* OrderCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckOrder");
		
		ABP_EndOfStage_Royals_C_CheckOrder_Params params {};
		params.CurrentOrder = CurrentOrder;
		params.CompareTo = CompareTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderCorrect != nullptr)
			*OrderCorrect = params.OrderCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPlatterOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckPlatterOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPlatterOrder");
		
		ABP_EndOfStage_Royals_C_CheckPlatterOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckCakeOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckCakeOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckCakeOrder");
		
		ABP_EndOfStage_Royals_C_CheckCakeOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFruitOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckFruitOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFruitOrder");
		
		ABP_EndOfStage_Royals_C_CheckFruitOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPieOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPieOrder");
		
		ABP_EndOfStage_Royals_C_CheckPieOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckNumberOfTries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TimeAdded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::CheckNumberOfTries(int32_t* TimeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckNumberOfTries");
		
		ABP_EndOfStage_Royals_C_CheckNumberOfTries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeAdded != nullptr)
			*TimeAdded = params.TimeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SweetsEventSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Setup");
		
		ABP_EndOfStage_Royals_C_SweetsEventSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Warning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::SweetsEventWarning(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Warning");
		
		ABP_EndOfStage_Royals_C_SweetsEventWarning_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UserConstructionScript");
		
		ABP_EndOfStage_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::LeftEnterTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_LeftEnterTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::LeftEnterTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_LeftEnterTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::RightEnterTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_RightEnterTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::RightEnterTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_RightEnterTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::KingTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_KingTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::KingTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_KingTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::QueenTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_QueenTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::QueenTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_QueenTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::KingTimeline2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_KingTimeline2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::KingTimeline2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_KingTimeline2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::QueenTimeline2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_QueenTimeline2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::QueenTimeline2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_QueenTimeline2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::OrderTimer_Royals_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__FinishedFunc");
		
		ABP_EndOfStage_Royals_C_OrderTimer_Royals_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::OrderTimer_Royals_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__UpdateFunc");
		
		ABP_EndOfStage_Royals_C_OrderTimer_Royals_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1");
		
		ABP_EndOfStage_Royals_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupMusicDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SetupMusicDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupMusicDuration");
		
		ABP_EndOfStage_Royals_C_SetupMusicDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ResetEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::ResetEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ResetEvent");
		
		ABP_EndOfStage_Royals_C_ResetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::MusicTransitionPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Play");
		
		ABP_EndOfStage_Royals_C_MusicTransitionPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Story
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::MusicTransitionStory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Story");
		
		ABP_EndOfStage_Royals_C_MusicTransitionStory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Widget:DisplaySuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::WidgetDisplaySuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Widget:DisplaySuccess");
		
		ABP_EndOfStage_Royals_C_WidgetDisplaySuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::EventEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventEnd");
		
		ABP_EndOfStage_Royals_C_EventEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:PlayAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Condtiion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::EventFailedPlayAnimation(int32_t Condtiion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:PlayAnimation");
		
		ABP_EndOfStage_Royals_C_EventFailedPlayAnimation_Params params {};
		params.Condtiion = Condtiion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupRoundOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::SetupRoundOrders(int32_t Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupRoundOrders");
		
		ABP_EndOfStage_Royals_C_SetupRoundOrders_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetNumberOfTries
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SetNumberOfTries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetNumberOfTries");
		
		ABP_EndOfStage_Royals_C_SetNumberOfTries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RoundComplete:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::RoundCompleteWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RoundComplete:Widget");
		
		ABP_EndOfStage_Royals_C_RoundCompleteWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayGreeting:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::DisplayGreetingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayGreeting:Widget");
		
		ABP_EndOfStage_Royals_C_DisplayGreetingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayCheckpoint:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::DisplayCheckpointWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayCheckpoint:Widget");
		
		ABP_EndOfStage_Royals_C_DisplayCheckpointWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetUp:RoundComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RoundNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::SetUpRoundComplete(int32_t RoundNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetUp:RoundComplete");
		
		ABP_EndOfStage_Royals_C_SetUpRoundComplete_Params params {};
		params.RoundNumber = RoundNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:EndOfGameOldLady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::PlayEndOfGameOldLady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:EndOfGameOldLady");
		
		ABP_EndOfStage_Royals_C_PlayEndOfGameOldLady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:SweetsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::PlaySweetsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:SweetsEvent");
		
		ABP_EndOfStage_Royals_C_PlaySweetsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Success:SweetsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SuccessSweetsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Success:SweetsEvent");
		
		ABP_EndOfStage_Royals_C_SuccessSweetsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFree Sample
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DishDelivered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clementine                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Royals_C::CheckFreeSample(class AActor* DishDelivered, bool Clementine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFree Sample");
		
		ABP_EndOfStage_Royals_C_CheckFreeSample_Params params {};
		params.DishDelivered = DishDelivered;
		params.Clementine = Clementine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.GetOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::GetOrder(const class FString& Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.GetOrder");
		
		ABP_EndOfStage_Royals_C_GetOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsLeave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::AnimateRoyalsLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsLeave");
		
		ABP_EndOfStage_Royals_C_AnimateRoyalsLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsEnter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::AnimateRoyalsEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsEnter");
		
		ABP_EndOfStage_Royals_C_AnimateRoyalsEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateEnter:Boss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::AnimateEnterBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateEnter:Boss");
		
		ABP_EndOfStage_Royals_C_AnimateEnterBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Construction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::Construction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Construction");
		
		ABP_EndOfStage_Royals_C_Construction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CleanUpLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::CleanUpLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CleanUpLevel");
		
		ABP_EndOfStage_Royals_C_CleanUpLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupLevel");
		
		ABP_EndOfStage_Royals_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UpdateRoyalsFace
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::UpdateRoyalsFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UpdateRoyalsFace");
		
		ABP_EndOfStage_Royals_C_UpdateRoyalsFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Setup:AnimBPs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::SetupAnimBPs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Setup:AnimBPs");
		
		ABP_EndOfStage_Royals_C_SetupAnimBPs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Enter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::ClementineEndAnimateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Enter");
		
		ABP_EndOfStage_Royals_C_ClementineEndAnimateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Leave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::ClementineEndAnimateLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Leave");
		
		ABP_EndOfStage_Royals_C_ClementineEndAnimateLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:SetupWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::EventFailedSetupWidgets(int32_t Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:SetupWidgets");
		
		ABP_EndOfStage_Royals_C_EventFailedSetupWidgets_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_EndOfStage_Royals_C::BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_EndOfStage_Royals_C_BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_EndOfStage_Royals_C::BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_EndOfStage_Royals_C_BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::MusicTransitionStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Stop");
		
		ABP_EndOfStage_Royals_C_MusicTransitionStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.StartOrderTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::StartOrderTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.StartOrderTimer");
		
		ABP_EndOfStage_Royals_C_StartOrderTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Stop:OrderTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::StopOrderTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Stop:OrderTimer");
		
		ABP_EndOfStage_Royals_C_StopOrderTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderDelivered:Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::OrderDeliveredAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderDelivered:Animation");
		
		ABP_EndOfStage_Royals_C_OrderDeliveredAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CustomerImpatient
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::CustomerImpatient(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CustomerImpatient");
		
		ABP_EndOfStage_Royals_C_CustomerImpatient_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeftCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECutsceneList                                      TalkOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::Talk(bool LeftCharacter, ECutsceneList TalkOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk");
		
		ABP_EndOfStage_Royals_C_Talk_Params params {};
		params.LeftCharacter = LeftCharacter;
		params.TalkOverride = TalkOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Royals_C::TalkEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk End");
		
		ABP_EndOfStage_Royals_C_TalkEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ExecuteUbergraph_BP_EndOfStage_Royals
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Royals_C::ExecuteUbergraph_BP_EndOfStage_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ExecuteUbergraph_BP_EndOfStage_Royals");
		
		ABP_EndOfStage_Royals_C_ExecuteUbergraph_BP_EndOfStage_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EndOfStage_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EndOfStage_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EndOfStage_Royals.BP_EndOfStage_Royals_C");
		return ptr;
	}

}


