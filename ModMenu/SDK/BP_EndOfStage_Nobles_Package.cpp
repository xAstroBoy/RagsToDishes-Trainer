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
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckNumberOfTries
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TimeAdded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::CheckNumberOfTries(int32_t* TimeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckNumberOfTries");
		
		ABP_EndOfStage_Nobles_C_CheckNumberOfTries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeAdded != nullptr)
			*TimeAdded = params.TimeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_EndOfStage_Order                    CompareTo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               OrderCorrect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Nobles_C::CheckOrder(class ABP_Dish_C* CurrentOrder, const struct FStruct_EndOfStage_Order& CompareTo, bool* OrderCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckOrder");
		
		ABP_EndOfStage_Nobles_C_CheckOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckStewOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Nobles_C::CheckStewOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckStewOrder");
		
		ABP_EndOfStage_Nobles_C_CheckStewOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckPieOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Nobles_C::CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckPieOrder");
		
		ABP_EndOfStage_Nobles_C_CheckPieOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckSkewerOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Dish_C*                                  CurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                OrderIngredients                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CorrectOrder                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EndOfStage_Nobles_C::CheckSkewerOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckSkewerOrder");
		
		ABP_EndOfStage_Nobles_C_CheckSkewerOrder_Params params {};
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
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.UserConstructionScript");
		
		ABP_EndOfStage_Nobles_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1");
		
		ABP_EndOfStage_Nobles_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupMusicDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::SetupMusicDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupMusicDuration");
		
		ABP_EndOfStage_Nobles_C_SetupMusicDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ResetEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::ResetEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ResetEvent");
		
		ABP_EndOfStage_Nobles_C_ResetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Widget:DisplaySuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::WidgetDisplaySuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Widget:DisplaySuccess");
		
		ABP_EndOfStage_Nobles_C_WidgetDisplaySuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::EventEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventEnd");
		
		ABP_EndOfStage_Nobles_C_EventEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Play
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::MusicTransitionPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Play");
		
		ABP_EndOfStage_Nobles_C_MusicTransitionPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Story
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::MusicTransitionStory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Story");
		
		ABP_EndOfStage_Nobles_C_MusicTransitionStory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:SetupWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::EventFailedSetupWidgets(int32_t Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:SetupWidgets");
		
		ABP_EndOfStage_Nobles_C_EventFailedSetupWidgets_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupRoundOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::SetupRoundOrders(int32_t Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupRoundOrders");
		
		ABP_EndOfStage_Nobles_C_SetupRoundOrders_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetNumberOfTries
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::SetNumberOfTries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetNumberOfTries");
		
		ABP_EndOfStage_Nobles_C_SetNumberOfTries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.RoundComplete:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::RoundCompleteWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.RoundComplete:Widget");
		
		ABP_EndOfStage_Nobles_C_RoundCompleteWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayGreeting:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::DisplayGreetingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayGreeting:Widget");
		
		ABP_EndOfStage_Nobles_C_DisplayGreetingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayCheckpoint:Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::DisplayCheckpointWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayCheckpoint:Widget");
		
		ABP_EndOfStage_Nobles_C_DisplayCheckpointWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.GetOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::GetOrder(const class FString& Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.GetOrder");
		
		ABP_EndOfStage_Nobles_C_GetOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CleanUpLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::CleanUpLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CleanUpLevel");
		
		ABP_EndOfStage_Nobles_C_CleanUpLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupLevel");
		
		ABP_EndOfStage_Nobles_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Construction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::Construction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Construction");
		
		ABP_EndOfStage_Nobles_C_Construction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Enter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::BossEndAnimateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Enter");
		
		ABP_EndOfStage_Nobles_C_BossEndAnimateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Leave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::BossEndAnimateLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Leave");
		
		ABP_EndOfStage_Nobles_C_BossEndAnimateLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ClementineEndAnimate:Enter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::ClementineEndAnimateEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ClementineEndAnimate:Enter");
		
		ABP_EndOfStage_Nobles_C_ClementineEndAnimateEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:PlayAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Condtiion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::EventFailedPlayAnimation(int32_t Condtiion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:PlayAnimation");
		
		ABP_EndOfStage_Nobles_C_EventFailedPlayAnimation_Params params {};
		params.Condtiion = Condtiion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::MusicTransitionStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Stop");
		
		ABP_EndOfStage_Nobles_C_MusicTransitionStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.OrderDelivered:Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EndOfStage_Nobles_C::OrderDeliveredAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.OrderDelivered:Animation");
		
		ABP_EndOfStage_Nobles_C_OrderDeliveredAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CustomerImpatient
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::CustomerImpatient(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CustomerImpatient");
		
		ABP_EndOfStage_Nobles_C_CustomerImpatient_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ExecuteUbergraph_BP_EndOfStage_Nobles
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EndOfStage_Nobles_C::ExecuteUbergraph_BP_EndOfStage_Nobles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ExecuteUbergraph_BP_EndOfStage_Nobles");
		
		ABP_EndOfStage_Nobles_C_ExecuteUbergraph_BP_EndOfStage_Nobles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EndOfStage_Nobles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EndOfStage_Nobles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C");
		return ptr;
	}

}


