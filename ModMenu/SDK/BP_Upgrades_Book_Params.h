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
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.Grab
	 */
	struct ABP_Upgrades_Book_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGG5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.IsHeldByController
	 */
	struct ABP_Upgrades_Book_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetPreviousUpgrade
	 */
	struct ABP_Upgrades_Book_C_GetPreviousUpgrade_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetCurrentUpgrade
	 */
	struct ABP_Upgrades_Book_C_GetCurrentUpgrade_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.GetNextUpgrade
	 */
	struct ABP_Upgrades_Book_C_GetNextUpgrade_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ToggleUpgrades
	 */
	struct ABP_Upgrades_Book_C_ToggleUpgrades_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.CheckAnimationPlaying
	 */
	struct ABP_Upgrades_Book_C_CheckAnimationPlaying_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.UserConstructionScript
	 */
	struct ABP_Upgrades_Book_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.EnableHighlight
	 */
	struct ABP_Upgrades_Book_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.DisableHighlight
	 */
	struct ABP_Upgrades_Book_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ReceiveBeginPlay
	 */
	struct ABP_Upgrades_Book_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.Release
	 */
	struct ABP_Upgrades_Book_C_Release_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.HideBook
	 */
	struct ABP_Upgrades_Book_C_HideBook_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ShowBook
	 */
	struct ABP_Upgrades_Book_C_ShowBook_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageForward
	 */
	struct ABP_Upgrades_Book_C_TogglePageForward_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.TogglePageBackward
	 */
	struct ABP_Upgrades_Book_C_TogglePageBackward_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.UpdateBag
	 */
	struct ABP_Upgrades_Book_C_UpdateBag_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetPrevious
	 */
	struct ABP_Upgrades_Book_C_ResetPrevious_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ResetNext
	 */
	struct ABP_Upgrades_Book_C_ResetNext_Params
	{	};

	/**
	 * Function BP_Upgrades_Book.BP_Upgrades_Book_C.ExecuteUbergraph_BP_Upgrades_Book
	 */
	struct ABP_Upgrades_Book_C_ExecuteUbergraph_BP_Upgrades_Book_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
