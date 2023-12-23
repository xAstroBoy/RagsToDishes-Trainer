#pragma once

/**
 * Name: RagsToDishes
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CheckNumberOfTries
	 */
	struct ABP_EndOfStage_Peasants_C_CheckNumberOfTries_Params
	{
	public:
		int32_t                                                    TimeAdded;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CheckOrder
	 */
	struct ABP_EndOfStage_Peasants_C_CheckOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_EndOfStage_Order                            CompareTo;                                               // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CheckSoup
	 */
	struct ABP_EndOfStage_Peasants_C_CheckSoup_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RMTA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CheckPlate
	 */
	struct ABP_EndOfStage_Peasants_C_CheckPlate_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WUMS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.GetDrink
	 */
	struct ABP_EndOfStage_Peasants_C_GetDrink_Params
	{
	public:
		class FText                                                Drink;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.UserConstructionScript
	 */
	struct ABP_EndOfStage_Peasants_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_EndOfStage_Peasants_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.SetupMusicDuration
	 */
	struct ABP_EndOfStage_Peasants_C_SetupMusicDuration_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.ResetEvent
	 */
	struct ABP_EndOfStage_Peasants_C_ResetEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.Widget:DisplaySuccess
	 */
	struct ABP_EndOfStage_Peasants_C_WidgetDisplaySuccess_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.EventEnd
	 */
	struct ABP_EndOfStage_Peasants_C_EventEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.MusicTransition:Story
	 */
	struct ABP_EndOfStage_Peasants_C_MusicTransitionStory_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.EventFailed:SetupWidgets
	 */
	struct ABP_EndOfStage_Peasants_C_EventFailedSetupWidgets_Params
	{
	public:
		int32_t                                                    Condition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.SetupRoundOrders
	 */
	struct ABP_EndOfStage_Peasants_C_SetupRoundOrders_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.SetNumberOfTries
	 */
	struct ABP_EndOfStage_Peasants_C_SetNumberOfTries_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.MusicTransition:Play
	 */
	struct ABP_EndOfStage_Peasants_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.RoundComplete:Widget
	 */
	struct ABP_EndOfStage_Peasants_C_RoundCompleteWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.DisplayGreeting:Widget
	 */
	struct ABP_EndOfStage_Peasants_C_DisplayGreetingWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.DisplayCheckpoint:Widget
	 */
	struct ABP_EndOfStage_Peasants_C_DisplayCheckpointWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.GetOrder
	 */
	struct ABP_EndOfStage_Peasants_C_GetOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CleanUpLevel
	 */
	struct ABP_EndOfStage_Peasants_C_CleanUpLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.SetupLevel
	 */
	struct ABP_EndOfStage_Peasants_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.Construction
	 */
	struct ABP_EndOfStage_Peasants_C_Construction_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.BossEndAnimate:Enter
	 */
	struct ABP_EndOfStage_Peasants_C_BossEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.BossEndAnimate:Leave
	 */
	struct ABP_EndOfStage_Peasants_C_BossEndAnimateLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.ClementineEndAnimate:Enter
	 */
	struct ABP_EndOfStage_Peasants_C_ClementineEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.EventFailed:PlayAnimation
	 */
	struct ABP_EndOfStage_Peasants_C_EventFailedPlayAnimation_Params
	{
	public:
		int32_t                                                    Condtiion;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.MusicTransition:Stop
	 */
	struct ABP_EndOfStage_Peasants_C_MusicTransitionStop_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.OrderDelivered:Animation
	 */
	struct ABP_EndOfStage_Peasants_C_OrderDeliveredAnimation_Params
	{	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.CustomerImpatient
	 */
	struct ABP_EndOfStage_Peasants_C_CustomerImpatient_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C.ExecuteUbergraph_BP_EndOfStage_Peasants
	 */
	struct ABP_EndOfStage_Peasants_C_ExecuteUbergraph_BP_EndOfStage_Peasants_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
