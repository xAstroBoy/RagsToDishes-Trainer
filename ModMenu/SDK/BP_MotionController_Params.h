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
	 * Function BP_MotionController.BP_MotionController_C.EnableCollision
	 */
	struct ABP_MotionController_C_EnableCollision_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ForceReleaseActor
	 */
	struct ABP_MotionController_C_ForceReleaseActor_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.UpdateRoomScaleOutline
	 */
	struct ABP_MotionController_C_UpdateRoomScaleOutline_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.SetupRoomScaleOutline
	 */
	struct ABP_MotionController_C_SetupRoomScaleOutline_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.GrabActor
	 */
	struct ABP_MotionController_C_GrabActor_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ReleaseActor
	 */
	struct ABP_MotionController_C_ReleaseActor_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.GetActorNearHand
	 */
	struct ABP_MotionController_C_GetActorNearHand_Params
	{
	public:
		class AActor*                                              NearestMesh;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.UserConstructionScript
	 */
	struct ABP_MotionController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.Haptic-Hit
	 */
	struct ABP_MotionController_C_HapticHit_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ReceiveTick
	 */
	struct ABP_MotionController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.EndGrab
	 */
	struct ABP_MotionController_C_EndGrab_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ReceiveBeginPlay
	 */
	struct ABP_MotionController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.CheckHandOverlapping
	 */
	struct ABP_MotionController_C_CheckHandOverlapping_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.Haptic-Grab
	 */
	struct ABP_MotionController_C_HapticGrab_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.Haptic-Constant
	 */
	struct ABP_MotionController_C_HapticConstant_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.Haptic-Stop
	 */
	struct ABP_MotionController_C_HapticStop_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_MotionController_C_BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3A1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_MotionController_C_BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.Haptic-Pouring
	 */
	struct ABP_MotionController_C_HapticPouring_Params
	{	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ApplyDeviceSettings
	 */
	struct ABP_MotionController_C_ApplyDeviceSettings_Params
	{
	public:
		Enum_Controller_Device                                     Device;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController.BP_MotionController_C.ExecuteUbergraph_BP_MotionController
	 */
	struct ABP_MotionController_C_ExecuteUbergraph_BP_MotionController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_64SJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
