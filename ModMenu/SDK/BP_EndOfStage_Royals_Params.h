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
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RemoveFreeSampleArrow
	 */
	struct ABP_EndOfStage_Royals_C_RemoveFreeSampleArrow_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SpawnFreeSample
	 */
	struct ABP_EndOfStage_Royals_C_SpawnFreeSample_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckOrder
	 */
	struct ABP_EndOfStage_Royals_C_CheckOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_EndOfStage_Order                            CompareTo;                                               // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPlatterOrder
	 */
	struct ABP_EndOfStage_Royals_C_CheckPlatterOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKJ8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckCakeOrder
	 */
	struct ABP_EndOfStage_Royals_C_CheckCakeOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKUL[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFruitOrder
	 */
	struct ABP_EndOfStage_Royals_C_CheckFruitOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OTET[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckPieOrder
	 */
	struct ABP_EndOfStage_Royals_C_CheckPieOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        OrderIngredients;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectOrder;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BT0L[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckNumberOfTries
	 */
	struct ABP_EndOfStage_Royals_C_CheckNumberOfTries_Params
	{
	public:
		int32_t                                                    TimeAdded;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Setup
	 */
	struct ABP_EndOfStage_Royals_C_SweetsEventSetup_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SweetsEvent:Warning
	 */
	struct ABP_EndOfStage_Royals_C_SweetsEventWarning_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UserConstructionScript
	 */
	struct ABP_EndOfStage_Royals_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Timeline_0__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_LeftEnterTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.LeftEnterTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_LeftEnterTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_RightEnterTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RightEnterTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_RightEnterTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_KingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_KingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_QueenTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_QueenTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_KingTimeline2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.KingTimeline2__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_KingTimeline2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_QueenTimeline2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.QueenTimeline2__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_QueenTimeline2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__FinishedFunc
	 */
	struct ABP_EndOfStage_Royals_C_OrderTimer_Royals_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderTimer_Royals_Timeline__UpdateFunc
	 */
	struct ABP_EndOfStage_Royals_C_OrderTimer_Royals_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_EndOfStage_Royals_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupMusicDuration
	 */
	struct ABP_EndOfStage_Royals_C_SetupMusicDuration_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ResetEvent
	 */
	struct ABP_EndOfStage_Royals_C_ResetEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Play
	 */
	struct ABP_EndOfStage_Royals_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Story
	 */
	struct ABP_EndOfStage_Royals_C_MusicTransitionStory_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Widget:DisplaySuccess
	 */
	struct ABP_EndOfStage_Royals_C_WidgetDisplaySuccess_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventEnd
	 */
	struct ABP_EndOfStage_Royals_C_EventEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:PlayAnimation
	 */
	struct ABP_EndOfStage_Royals_C_EventFailedPlayAnimation_Params
	{
	public:
		int32_t                                                    Condtiion;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupRoundOrders
	 */
	struct ABP_EndOfStage_Royals_C_SetupRoundOrders_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetNumberOfTries
	 */
	struct ABP_EndOfStage_Royals_C_SetNumberOfTries_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.RoundComplete:Widget
	 */
	struct ABP_EndOfStage_Royals_C_RoundCompleteWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayGreeting:Widget
	 */
	struct ABP_EndOfStage_Royals_C_DisplayGreetingWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.DisplayCheckpoint:Widget
	 */
	struct ABP_EndOfStage_Royals_C_DisplayCheckpointWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetUp:RoundComplete
	 */
	struct ABP_EndOfStage_Royals_C_SetUpRoundComplete_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:EndOfGameOldLady
	 */
	struct ABP_EndOfStage_Royals_C_PlayEndOfGameOldLady_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Play:SweetsEvent
	 */
	struct ABP_EndOfStage_Royals_C_PlaySweetsEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Success:SweetsEvent
	 */
	struct ABP_EndOfStage_Royals_C_SuccessSweetsEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CheckFree Sample
	 */
	struct ABP_EndOfStage_Royals_C_CheckFreeSample_Params
	{
	public:
		class AActor*                                              DishDelivered;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Clementine;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.GetOrder
	 */
	struct ABP_EndOfStage_Royals_C_GetOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsLeave
	 */
	struct ABP_EndOfStage_Royals_C_AnimateRoyalsLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateRoyalsEnter
	 */
	struct ABP_EndOfStage_Royals_C_AnimateRoyalsEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.AnimateEnter:Boss
	 */
	struct ABP_EndOfStage_Royals_C_AnimateEnterBoss_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Construction
	 */
	struct ABP_EndOfStage_Royals_C_Construction_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CleanUpLevel
	 */
	struct ABP_EndOfStage_Royals_C_CleanUpLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.SetupLevel
	 */
	struct ABP_EndOfStage_Royals_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.UpdateRoyalsFace
	 */
	struct ABP_EndOfStage_Royals_C_UpdateRoyalsFace_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Setup:AnimBPs
	 */
	struct ABP_EndOfStage_Royals_C_SetupAnimBPs_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Enter
	 */
	struct ABP_EndOfStage_Royals_C_ClementineEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ClementineEndAnimate:Leave
	 */
	struct ABP_EndOfStage_Royals_C_ClementineEndAnimateLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.EventFailed:SetupWidgets
	 */
	struct ABP_EndOfStage_Royals_C_EventFailedSetupWidgets_Params
	{
	public:
		int32_t                                                    Condition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_Royals_C_BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FAYP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_Royals_C_BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FK4K[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.MusicTransition:Stop
	 */
	struct ABP_EndOfStage_Royals_C_MusicTransitionStop_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.StartOrderTimer
	 */
	struct ABP_EndOfStage_Royals_C_StartOrderTimer_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Stop:OrderTimer
	 */
	struct ABP_EndOfStage_Royals_C_StopOrderTimer_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.OrderDelivered:Animation
	 */
	struct ABP_EndOfStage_Royals_C_OrderDeliveredAnimation_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.CustomerImpatient
	 */
	struct ABP_EndOfStage_Royals_C_CustomerImpatient_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk
	 */
	struct ABP_EndOfStage_Royals_C_Talk_Params
	{
	public:
		bool                                                       LeftCharacter;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECutsceneList                                              TalkOverride;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.Talk End
	 */
	struct ABP_EndOfStage_Royals_C_TalkEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage_Royals.BP_EndOfStage_Royals_C.ExecuteUbergraph_BP_EndOfStage_Royals
	 */
	struct ABP_EndOfStage_Royals_C_ExecuteUbergraph_BP_EndOfStage_Royals_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
