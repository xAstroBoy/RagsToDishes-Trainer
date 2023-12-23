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
	 * Function BP_Dish.BP_Dish_C.IsHeldByController
	 */
	struct ABP_Dish_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.Grab
	 */
	struct ABP_Dish_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPUH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.CheckHitCount
	 */
	struct ABP_Dish_C_CheckHitCount_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SpawnTutorialArrow
	 */
	struct ABP_Dish_C_SpawnTutorialArrow_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SetNewTag
	 */
	struct ABP_Dish_C_SetNewTag_Params
	{
	public:
		class FName                                                NewTag;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.ReturnIfInSpawner
	 */
	struct ABP_Dish_C_ReturnIfInSpawner_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.EmptyDish
	 */
	struct ABP_Dish_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.UserConstructionScript
	 */
	struct ABP_Dish_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.InteractTimeline__FinishedFunc
	 */
	struct ABP_Dish_C_InteractTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.InteractTimeline__UpdateFunc
	 */
	struct ABP_Dish_C_InteractTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SpawnAnimationTimeline__FinishedFunc
	 */
	struct ABP_Dish_C_SpawnAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SpawnAnimationTimeline__UpdateFunc
	 */
	struct ABP_Dish_C_SpawnAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.ReceiveTick
	 */
	struct ABP_Dish_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.ReceiveHit
	 */
	struct ABP_Dish_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SXM7[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.Kill
	 */
	struct ABP_Dish_C_Kill_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.Release
	 */
	struct ABP_Dish_C_Release_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SetCanBeGrabbed
	 */
	struct ABP_Dish_C_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       CanBeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.AllowInteractAfterTime
	 */
	struct ABP_Dish_C_AllowInteractAfterTime_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.SpawnAnimation
	 */
	struct ABP_Dish_C_SpawnAnimation_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.DisableHighlight
	 */
	struct ABP_Dish_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.EnableHighlight
	 */
	struct ABP_Dish_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.ForceRelease
	 */
	struct ABP_Dish_C_ForceRelease_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.DeleteAfterInactivity
	 */
	struct ABP_Dish_C_DeleteAfterInactivity_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.ReceiveBeginPlay
	 */
	struct ABP_Dish_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dish.BP_Dish_C.ReceiveEndPlay
	 */
	struct ABP_Dish_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish.BP_Dish_C.ExecuteUbergraph_BP_Dish
	 */
	struct ABP_Dish_C_ExecuteUbergraph_BP_Dish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4NK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
