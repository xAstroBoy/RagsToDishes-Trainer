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
	 * Function BP_Ingredient.BP_Ingredient_C.Grab
	 */
	struct ABP_Ingredient_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGP6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.IsHeldByController
	 */
	struct ABP_Ingredient_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.StopHaptic
	 */
	struct ABP_Ingredient_C_StopHaptic_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.CheckHitCount
	 */
	struct ABP_Ingredient_C_CheckHitCount_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.SetNewTag
	 */
	struct ABP_Ingredient_C_SetNewTag_Params
	{
	public:
		class FName                                                NewTag;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.SetCookedMesh
	 */
	struct ABP_Ingredient_C_SetCookedMesh_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.WashIngredient
	 */
	struct ABP_Ingredient_C_WashIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ChopIngredient
	 */
	struct ABP_Ingredient_C_ChopIngredient_Params
	{
	public:
		int32_t                                                    KnifeLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.CookIngredient
	 */
	struct ABP_Ingredient_C_CookIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.BurnIngredient
	 */
	struct ABP_Ingredient_C_BurnIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.CookAndBurnIngredient
	 */
	struct ABP_Ingredient_C_CookAndBurnIngredient_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.AllocateProperties
	 */
	struct ABP_Ingredient_C_AllocateProperties_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         MeshInHand;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionPosition;                                       // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionExtent;                                         // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ColourValue;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     DeathParticle;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DieOnDrop;                                               // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FI5P[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        NewTags;                                                 // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.UserConstructionScript
	 */
	struct ABP_Ingredient_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.DisabledInteractionDelay__FinishedFunc
	 */
	struct ABP_Ingredient_C_DisabledInteractionDelay__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.DisabledInteractionDelay__UpdateFunc
	 */
	struct ABP_Ingredient_C_DisabledInteractionDelay__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ChopAnimationTimeline__FinishedFunc
	 */
	struct ABP_Ingredient_C_ChopAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ChopAnimationTimeline__UpdateFunc
	 */
	struct ABP_Ingredient_C_ChopAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.SpawnAnimationTimeline__FinishedFunc
	 */
	struct ABP_Ingredient_C_SpawnAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.SpawnAnimationTimeline__UpdateFunc
	 */
	struct ABP_Ingredient_C_SpawnAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ReceiveBeginPlay
	 */
	struct ABP_Ingredient_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ReceiveHit
	 */
	struct ABP_Ingredient_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V92D[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ReturnToSpawner
	 */
	struct ABP_Ingredient_C_ReturnToSpawner_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.Kill
	 */
	struct ABP_Ingredient_C_Kill_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.AllowInteractAfterTime
	 */
	struct ABP_Ingredient_C_AllowInteractAfterTime_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.Release
	 */
	struct ABP_Ingredient_C_Release_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.Set CanBeGrabbed
	 */
	struct ABP_Ingredient_C_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       CanbeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ChopAnimation
	 */
	struct ABP_Ingredient_C_ChopAnimation_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.SpawnAnimation
	 */
	struct ABP_Ingredient_C_SpawnAnimation_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.EnableHighlight
	 */
	struct ABP_Ingredient_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.DisableHighlight
	 */
	struct ABP_Ingredient_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ForceRelease
	 */
	struct ABP_Ingredient_C_ForceRelease_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.DeleteAfterInactivivty
	 */
	struct ABP_Ingredient_C_DeleteAfterInactivivty_Params
	{	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ReceiveEndPlay
	 */
	struct ABP_Ingredient_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ingredient.BP_Ingredient_C.ExecuteUbergraph_BP_Ingredient
	 */
	struct ABP_Ingredient_C_ExecuteUbergraph_BP_Ingredient_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
