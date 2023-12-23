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
	 * Function BP_Menu_Item.BP_Menu_Item_C.Grab
	 */
	struct ABP_Menu_Item_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ART[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.IsHeldByController
	 */
	struct ABP_Menu_Item_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.UserConstructionScript
	 */
	struct ABP_Menu_Item_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.SpawnTimeline__FinishedFunc
	 */
	struct ABP_Menu_Item_C_SpawnTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.SpawnTimeline__UpdateFunc
	 */
	struct ABP_Menu_Item_C_SpawnTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.DespawnTimeline__FinishedFunc
	 */
	struct ABP_Menu_Item_C_DespawnTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.DespawnTimeline__UpdateFunc
	 */
	struct ABP_Menu_Item_C_DespawnTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.Release
	 */
	struct ABP_Menu_Item_C_Release_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Item_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.EnableHighlight
	 */
	struct ABP_Menu_Item_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.DisableHighlight
	 */
	struct ABP_Menu_Item_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.SelectMenuOption
	 */
	struct ABP_Menu_Item_C_SelectMenuOption_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.ReceiveTick
	 */
	struct ABP_Menu_Item_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.AnimateSpawn
	 */
	struct ABP_Menu_Item_C_AnimateSpawn_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.AnimateDespawn
	 */
	struct ABP_Menu_Item_C_AnimateDespawn_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.SetState
	 */
	struct ABP_Menu_Item_C_SetState_Params
	{	};

	/**
	 * Function BP_Menu_Item.BP_Menu_Item_C.ExecuteUbergraph_BP_Menu_Item
	 */
	struct ABP_Menu_Item_C_ExecuteUbergraph_BP_Menu_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGLF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
