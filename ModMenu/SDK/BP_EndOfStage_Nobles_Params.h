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
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckNumberOfTries
	 */
	struct ABP_EndOfStage_Nobles_C_CheckNumberOfTries_Params
	{
	public:
		int32_t                                                    TimeAdded;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckOrder
	 */
	struct ABP_EndOfStage_Nobles_C_CheckOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_EndOfStage_Order                            CompareTo;                                               // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckStewOrder
	 */
	struct ABP_EndOfStage_Nobles_C_CheckStewOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHF8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckPieOrder
	 */
	struct ABP_EndOfStage_Nobles_C_CheckPieOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZEE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CheckSkewerOrder
	 */
	struct ABP_EndOfStage_Nobles_C_CheckSkewerOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AXCJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.UserConstructionScript
	 */
	struct ABP_EndOfStage_Nobles_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_EndOfStage_Nobles_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupMusicDuration
	 */
	struct ABP_EndOfStage_Nobles_C_SetupMusicDuration_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ResetEvent
	 */
	struct ABP_EndOfStage_Nobles_C_ResetEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Widget:DisplaySuccess
	 */
	struct ABP_EndOfStage_Nobles_C_WidgetDisplaySuccess_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventEnd
	 */
	struct ABP_EndOfStage_Nobles_C_EventEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Play
	 */
	struct ABP_EndOfStage_Nobles_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Story
	 */
	struct ABP_EndOfStage_Nobles_C_MusicTransitionStory_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:SetupWidgets
	 */
	struct ABP_EndOfStage_Nobles_C_EventFailedSetupWidgets_Params
	{
	public:
		int32_t                                                    Condition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupRoundOrders
	 */
	struct ABP_EndOfStage_Nobles_C_SetupRoundOrders_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetNumberOfTries
	 */
	struct ABP_EndOfStage_Nobles_C_SetNumberOfTries_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.RoundComplete:Widget
	 */
	struct ABP_EndOfStage_Nobles_C_RoundCompleteWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayGreeting:Widget
	 */
	struct ABP_EndOfStage_Nobles_C_DisplayGreetingWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.DisplayCheckpoint:Widget
	 */
	struct ABP_EndOfStage_Nobles_C_DisplayCheckpointWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.GetOrder
	 */
	struct ABP_EndOfStage_Nobles_C_GetOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CleanUpLevel
	 */
	struct ABP_EndOfStage_Nobles_C_CleanUpLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.SetupLevel
	 */
	struct ABP_EndOfStage_Nobles_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.Construction
	 */
	struct ABP_EndOfStage_Nobles_C_Construction_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Enter
	 */
	struct ABP_EndOfStage_Nobles_C_BossEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.BossEndAnimate:Leave
	 */
	struct ABP_EndOfStage_Nobles_C_BossEndAnimateLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ClementineEndAnimate:Enter
	 */
	struct ABP_EndOfStage_Nobles_C_ClementineEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.EventFailed:PlayAnimation
	 */
	struct ABP_EndOfStage_Nobles_C_EventFailedPlayAnimation_Params
	{
	public:
		int32_t                                                    Condtiion;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.MusicTransition:Stop
	 */
	struct ABP_EndOfStage_Nobles_C_MusicTransitionStop_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.OrderDelivered:Animation
	 */
	struct ABP_EndOfStage_Nobles_C_OrderDeliveredAnimation_Params
	{	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.CustomerImpatient
	 */
	struct ABP_EndOfStage_Nobles_C_CustomerImpatient_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Nobles.BP_EndOfStage_Nobles_C.ExecuteUbergraph_BP_EndOfStage_Nobles
	 */
	struct ABP_EndOfStage_Nobles_C_ExecuteUbergraph_BP_EndOfStage_Nobles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
