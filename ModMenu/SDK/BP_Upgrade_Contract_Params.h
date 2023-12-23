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
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.Grab
	 */
	struct ABP_Upgrade_Contract_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0NLQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.IsHeldByController
	 */
	struct ABP_Upgrade_Contract_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.FReturn
	 */
	struct ABP_Upgrade_Contract_C_FReturn_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.UserConstructionScript
	 */
	struct ABP_Upgrade_Contract_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.Release
	 */
	struct ABP_Upgrade_Contract_C_Release_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.UpgradeInBasket
	 */
	struct ABP_Upgrade_Contract_C_UpgradeInBasket_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.CompleteScrollSigning
	 */
	struct ABP_Upgrade_Contract_C_CompleteScrollSigning_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.UpdateState
	 */
	struct ABP_Upgrade_Contract_C_UpdateState_Params
	{
	public:
		Enum_UpgradeContract                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RN9Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                UpgradeName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                UpgradePrice;                                            // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.HideContract
	 */
	struct ABP_Upgrade_Contract_C_HideContract_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.ShowContract
	 */
	struct ABP_Upgrade_Contract_C_ShowContract_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.DisableHighlight
	 */
	struct ABP_Upgrade_Contract_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.EnableHighlight
	 */
	struct ABP_Upgrade_Contract_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.ReceiveBeginPlay
	 */
	struct ABP_Upgrade_Contract_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.Set CanBeGrabbed
	 */
	struct ABP_Upgrade_Contract_C_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       CanbeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrade_Contract.BP_Upgrade_Contract_C.ExecuteUbergraph_BP_Upgrade_Contract
	 */
	struct ABP_Upgrade_Contract_C_ExecuteUbergraph_BP_Upgrade_Contract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHJH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
