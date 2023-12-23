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
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.IsHeldByController
	 */
	struct ABP_Object_Spawner_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.Grab
	 */
	struct ABP_Object_Spawner_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8CP1[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.CheckSpawnedActors
	 */
	struct ABP_Object_Spawner_C_CheckSpawnedActors_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.Reset
	 */
	struct ABP_Object_Spawner_C_Reset_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.SpawnTutorialArrow
	 */
	struct ABP_Object_Spawner_C_SpawnTutorialArrow_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.ReturnObjectToSpawner
	 */
	struct ABP_Object_Spawner_C_ReturnObjectToSpawner_Params
	{
	public:
		class AActor*                                              ActorToReturn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.ClearSpawnedObjectReference
	 */
	struct ABP_Object_Spawner_C_ClearSpawnedObjectReference_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.SpawnObjectAtSpawner
	 */
	struct ABP_Object_Spawner_C_SpawnObjectAtSpawner_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.SpawnAndAttachObject
	 */
	struct ABP_Object_Spawner_C_SpawnAndAttachObject_Params
	{
	public:
		class AActor*                                              ObjectRef;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.UserConstructionScript
	 */
	struct ABP_Object_Spawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.FlashAnimationTimeline__FinishedFunc
	 */
	struct ABP_Object_Spawner_C_FlashAnimationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.FlashAnimationTimeline__UpdateFunc
	 */
	struct ABP_Object_Spawner_C_FlashAnimationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.Release
	 */
	struct ABP_Object_Spawner_C_Release_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.ReceiveBeginPlay
	 */
	struct ABP_Object_Spawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.EnableHighlight
	 */
	struct ABP_Object_Spawner_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.DisableHighlight
	 */
	struct ABP_Object_Spawner_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.EnableFlash
	 */
	struct ABP_Object_Spawner_C_EnableFlash_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.DisableFlash
	 */
	struct ABP_Object_Spawner_C_DisableFlash_Params
	{	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.DestroyItem
	 */
	struct ABP_Object_Spawner_C_DestroyItem_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.RemoveActor
	 */
	struct ABP_Object_Spawner_C_RemoveActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Object_Spawner.BP_Object_Spawner_C.ExecuteUbergraph_BP_Object_Spawner
	 */
	struct ABP_Object_Spawner_C_ExecuteUbergraph_BP_Object_Spawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0X9Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
