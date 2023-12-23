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
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.Grab
	 */
	struct ABP_Stew_Pot_Lid_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBNE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.IsHeldByController
	 */
	struct ABP_Stew_Pot_Lid_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.UserConstructionScript
	 */
	struct ABP_Stew_Pot_Lid_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.LidBurningAnimation__FinishedFunc
	 */
	struct ABP_Stew_Pot_Lid_C_LidBurningAnimation__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.LidBurningAnimation__UpdateFunc
	 */
	struct ABP_Stew_Pot_Lid_C_LidBurningAnimation__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.InteractDelay__FinishedFunc
	 */
	struct ABP_Stew_Pot_Lid_C_InteractDelay__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.InteractDelay__UpdateFunc
	 */
	struct ABP_Stew_Pot_Lid_C_InteractDelay__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.ReceiveBeginPlay
	 */
	struct ABP_Stew_Pot_Lid_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.Release
	 */
	struct ABP_Stew_Pot_Lid_C_Release_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.SetCanBeGrabbed
	 */
	struct ABP_Stew_Pot_Lid_C_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       CanBeGrabbed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.AnimateLid
	 */
	struct ABP_Stew_Pot_Lid_C_AnimateLid_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.ReceiveHit
	 */
	struct ABP_Stew_Pot_Lid_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JYV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.AllowInteractAfterTime
	 */
	struct ABP_Stew_Pot_Lid_C_AllowInteractAfterTime_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.EnableHighlight
	 */
	struct ABP_Stew_Pot_Lid_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.DisableHighlight
	 */
	struct ABP_Stew_Pot_Lid_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.BndEvt__ReturnVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Stew_Pot_Lid_C_BndEvt__ReturnVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32AA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.ForceRelease
	 */
	struct ABP_Stew_Pot_Lid_C_ForceRelease_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.ReturnEquipment
	 */
	struct ABP_Stew_Pot_Lid_C_ReturnEquipment_Params
	{	};

	/**
	 * Function BP_Stew_Pot_Lid.BP_Stew_Pot_Lid_C.ExecuteUbergraph_BP_Stew_Pot_Lid
	 */
	struct ABP_Stew_Pot_Lid_C_ExecuteUbergraph_BP_Stew_Pot_Lid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
