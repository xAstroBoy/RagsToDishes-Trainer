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
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.Grab
	 */
	struct ABP_Upgrades_Bag_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBM5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.IsHeldByController
	 */
	struct ABP_Upgrades_Bag_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ResetUpgradeOrder
	 */
	struct ABP_Upgrades_Bag_C_ResetUpgradeOrder_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.UserConstructionScript
	 */
	struct ABP_Upgrades_Bag_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ReleaseBag_Timeline__FinishedFunc
	 */
	struct ABP_Upgrades_Bag_C_ReleaseBag_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ReleaseBag_Timeline__UpdateFunc
	 */
	struct ABP_Upgrades_Bag_C_ReleaseBag_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ReceiveBeginPlay
	 */
	struct ABP_Upgrades_Bag_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Upgrades_Bag_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VCTJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.Release
	 */
	struct ABP_Upgrades_Bag_C_Release_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.BndEvt__ConfirmationBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Upgrades_Bag_C_BndEvt__ConfirmationBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_80K6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.VisibilityOfScrollsInBasket
	 */
	struct ABP_Upgrades_Bag_C_VisibilityOfScrollsInBasket_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ResetButtonState
	 */
	struct ABP_Upgrades_Bag_C_ResetButtonState_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.BndEvt__UpgradesBag_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Upgrades_Bag_C_BndEvt__UpgradesBag_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.UpdateBag
	 */
	struct ABP_Upgrades_Bag_C_UpdateBag_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ReleaseBag
	 */
	struct ABP_Upgrades_Bag_C_ReleaseBag_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.EnableHighlight
	 */
	struct ABP_Upgrades_Bag_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.DisableHighlight
	 */
	struct ABP_Upgrades_Bag_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.EndEvent
	 */
	struct ABP_Upgrades_Bag_C_EndEvent_Params
	{	};

	/**
	 * Function BP_Upgrades_Bag.BP_Upgrades_Bag_C.ExecuteUbergraph_BP_Upgrades_Bag
	 */
	struct ABP_Upgrades_Bag_C_ExecuteUbergraph_BP_Upgrades_Bag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPQX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
