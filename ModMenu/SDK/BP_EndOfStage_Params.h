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
	 * Function BP_EndOfStage.BP_EndOfStage_C.Setup:AnimBPs
	 */
	struct ABP_EndOfStage_C_SetupAnimBPs_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.UpdateRoyalsFace
	 */
	struct ABP_EndOfStage_C_UpdateRoyalsFace_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.UpdateClementineFace
	 */
	struct ABP_EndOfStage_C_UpdateClementineFace_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SetupLevel
	 */
	struct ABP_EndOfStage_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.UpdateBossFace
	 */
	struct ABP_EndOfStage_C_UpdateBossFace_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CleanUpLevel
	 */
	struct ABP_EndOfStage_C_CleanUpLevel_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CheckNumberOfTries
	 */
	struct ABP_EndOfStage_C_CheckNumberOfTries_Params
	{
	public:
		int32_t                                                    TimeAdded;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.FixForHand
	 */
	struct ABP_EndOfStage_C_FixForHand_Params
	{
	public:
		class ABP_Dish_C*                                          Order;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CheckOrder
	 */
	struct ABP_EndOfStage_C_CheckOrder_Params
	{
	public:
		class ABP_Dish_C*                                          CurrentOrder;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_EndOfStage_Order                            CompareTo;                                               // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       OrderCorrect;                                            // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E9VB[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CheckOrderDeliveryBay
	 */
	struct ABP_EndOfStage_C_CheckOrderDeliveryBay_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.UserConstructionScript
	 */
	struct ABP_EndOfStage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Boss:EnterTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_C_BossEnterTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Boss:EnterTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_C_BossEnterTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Boss:LeaveTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_C_BossLeaveTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Boss:LeaveTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_C_BossLeaveTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Clementine:EnterTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_C_ClementineEnterTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Clementine:EnterTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_C_ClementineEnterTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Clementine:LeaveTimeline__FinishedFunc
	 */
	struct ABP_EndOfStage_C_ClementineLeaveTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Clementine:LeaveTimeline__UpdateFunc
	 */
	struct ABP_EndOfStage_C_ClementineLeaveTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__FinishedFunc
	 */
	struct ABP_EndOfStage_C_OrderTimer_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.OrderTimer_Timeline__UpdateFunc
	 */
	struct ABP_EndOfStage_C_OrderTimer_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ReceiveBeginPlay
	 */
	struct ABP_EndOfStage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.GenerateOrder
	 */
	struct ABP_EndOfStage_C_GenerateOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    WidgetIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Start;                                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N80J[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1KDS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__DeliveryBay1Collision_Throw_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ResetBay1-Meal
	 */
	struct ABP_EndOfStage_C_ResetBay1Meal_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.GenerateOrderByRound
	 */
	struct ABP_EndOfStage_C_GenerateOrderByRound_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Play:EndOfStageEvent
	 */
	struct ABP_EndOfStage_C_PlayEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SetUp:RoundComplete
	 */
	struct ABP_EndOfStage_C_SetUpRoundComplete_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.EventFailed
	 */
	struct ABP_EndOfStage_C_EventFailed_Params
	{
	public:
		int32_t                                                    Condition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.EventSuccessful
	 */
	struct ABP_EndOfStage_C_EventSuccessful_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.PlayRound
	 */
	struct ABP_EndOfStage_C_PlayRound_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.MakeDeliveryBayVisible
	 */
	struct ABP_EndOfStage_C_MakeDeliveryBayVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ActivateOrders
	 */
	struct ABP_EndOfStage_C_ActivateOrders_Params
	{
	public:
		int32_t                                                    WidgetIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.StartEquipment
	 */
	struct ABP_EndOfStage_C_StartEquipment_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.AnimateLeave:Boss
	 */
	struct ABP_EndOfStage_C_AnimateLeaveBoss_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.AnimateEnter:Boss
	 */
	struct ABP_EndOfStage_C_AnimateEnterBoss_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.EventEnd
	 */
	struct ABP_EndOfStage_C_EventEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SpawnOrders
	 */
	struct ABP_EndOfStage_C_SpawnOrders_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CheckOrderDelivered
	 */
	struct ABP_EndOfStage_C_CheckOrderDelivered_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.AnimateLeave:Clementine
	 */
	struct ABP_EndOfStage_C_AnimateLeaveClementine_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.AnimateEnter:Clementine
	 */
	struct ABP_EndOfStage_C_AnimateEnterClementine_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CharactersLeave
	 */
	struct ABP_EndOfStage_C_CharactersLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SetupMusicDuration
	 */
	struct ABP_EndOfStage_C_SetupMusicDuration_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ResetEvent
	 */
	struct ABP_EndOfStage_C_ResetEvent_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Widget:DisplaySuccess
	 */
	struct ABP_EndOfStage_C_WidgetDisplaySuccess_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.MusicTransition:Story
	 */
	struct ABP_EndOfStage_C_MusicTransitionStory_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.EventFailed:SetupWidgets
	 */
	struct ABP_EndOfStage_C_EventFailedSetupWidgets_Params
	{
	public:
		int32_t                                                    Condition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SetupRoundOrders
	 */
	struct ABP_EndOfStage_C_SetupRoundOrders_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.SetNumberOfTries
	 */
	struct ABP_EndOfStage_C_SetNumberOfTries_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.MusicTransition:Play
	 */
	struct ABP_EndOfStage_C_MusicTransitionPlay_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.RoundComplete:Widget
	 */
	struct ABP_EndOfStage_C_RoundCompleteWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.DisplayGreeting:Widget
	 */
	struct ABP_EndOfStage_C_DisplayGreetingWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.DisplayCheckpoint:Widget
	 */
	struct ABP_EndOfStage_C_DisplayCheckpointWidget_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.GetOrder
	 */
	struct ABP_EndOfStage_C_GetOrder_Params
	{
	public:
		class FString                                              Order;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Construction
	 */
	struct ABP_EndOfStage_C_Construction_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BossEndAnimate:Leave
	 */
	struct ABP_EndOfStage_C_BossEndAnimateLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BossEndAnimate:Enter
	 */
	struct ABP_EndOfStage_C_BossEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ClementineEndAnimate:Leave
	 */
	struct ABP_EndOfStage_C_ClementineEndAnimateLeave_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ClementineEndAnimate:Enter
	 */
	struct ABP_EndOfStage_C_ClementineEndAnimateEnter_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Retry
	 */
	struct ABP_EndOfStage_C_Retry_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Talk
	 */
	struct ABP_EndOfStage_C_Talk_Params
	{
	public:
		bool                                                       LeftCharacter;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECutsceneList                                              TalkOverride;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__BossBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__BossBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9P1Z[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_EndOfStage_C_BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_831S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.EventFailed:PlayAnimation
	 */
	struct ABP_EndOfStage_C_EventFailedPlayAnimation_Params
	{
	public:
		int32_t                                                    Condtiion;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CheckFree Sample
	 */
	struct ABP_EndOfStage_C_CheckFreeSample_Params
	{
	public:
		class AActor*                                              DishDelivered;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Clementine;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.StartOrderTimer
	 */
	struct ABP_EndOfStage_C_StartOrderTimer_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.MusicTransition:Stop
	 */
	struct ABP_EndOfStage_C_MusicTransitionStop_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Stop:OrderTimer
	 */
	struct ABP_EndOfStage_C_StopOrderTimer_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.OrderDelivered:Animation
	 */
	struct ABP_EndOfStage_C_OrderDeliveredAnimation_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.CustomerImpatient
	 */
	struct ABP_EndOfStage_C_CustomerImpatient_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.Talk End
	 */
	struct ABP_EndOfStage_C_TalkEnd_Params
	{	};

	/**
	 * Function BP_EndOfStage.BP_EndOfStage_C.ExecuteUbergraph_BP_EndOfStage
	 */
	struct ABP_EndOfStage_C_ExecuteUbergraph_BP_EndOfStage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKG0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
