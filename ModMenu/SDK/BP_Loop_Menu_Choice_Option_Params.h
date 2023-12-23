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
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Grab
	 */
	struct ABP_Loop_Menu_Choice_Option_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F23N[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.IsHeldByController
	 */
	struct ABP_Loop_Menu_Choice_Option_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SetupUpgradesButton
	 */
	struct ABP_Loop_Menu_Choice_Option_C_SetupUpgradesButton_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReturnItemEvent
	 */
	struct ABP_Loop_Menu_Choice_Option_C_ReturnItemEvent_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.UserConstructionScript
	 */
	struct ABP_Loop_Menu_Choice_Option_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__FinishedFunc
	 */
	struct ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade_Timeline__UpdateFunc
	 */
	struct ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__FinishedFunc
	 */
	struct ABP_Loop_Menu_Choice_Option_C_SpawnAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SpawnAnimTL__UpdateFunc
	 */
	struct ABP_Loop_Menu_Choice_Option_C_SpawnAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ReceiveBeginPlay
	 */
	struct ABP_Loop_Menu_Choice_Option_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.Release
	 */
	struct ABP_Loop_Menu_Choice_Option_C_Release_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.SelectMenuOption
	 */
	struct ABP_Loop_Menu_Choice_Option_C_SelectMenuOption_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableSaveButton
	 */
	struct ABP_Loop_Menu_Choice_Option_C_DisableSaveButton_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.EnableHighlight
	 */
	struct ABP_Loop_Menu_Choice_Option_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.DisableHighlight
	 */
	struct ABP_Loop_Menu_Choice_Option_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PlayGame
	 */
	struct ABP_Loop_Menu_Choice_Option_C_PlayGame_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.PauseGame
	 */
	struct ABP_Loop_Menu_Choice_Option_C_PauseGame_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.NewUpgrade
	 */
	struct ABP_Loop_Menu_Choice_Option_C_NewUpgrade_Params
	{	};

	/**
	 * Function BP_Loop_Menu_Choice_Option.BP_Loop_Menu_Choice_Option_C.ExecuteUbergraph_BP_Loop_Menu_Choice_Option
	 */
	struct ABP_Loop_Menu_Choice_Option_C_ExecuteUbergraph_BP_Loop_Menu_Choice_Option_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L05T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
