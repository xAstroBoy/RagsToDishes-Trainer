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
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.Grab
	 */
	struct ABP_Chef_Hat_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9RXI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.IsHeldByController
	 */
	struct ABP_Chef_Hat_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.RotateHat
	 */
	struct ABP_Chef_Hat_C_RotateHat_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.UserConstructionScript
	 */
	struct ABP_Chef_Hat_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.SpawnAnimTL__FinishedFunc
	 */
	struct ABP_Chef_Hat_C_SpawnAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.SpawnAnimTL__UpdateFunc
	 */
	struct ABP_Chef_Hat_C_SpawnAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.Release
	 */
	struct ABP_Chef_Hat_C_Release_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.ReturnHat
	 */
	struct ABP_Chef_Hat_C_ReturnHat_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Chef_Hat_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0I8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.SpawnAnimation
	 */
	struct ABP_Chef_Hat_C_SpawnAnimation_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.ReceiveBeginPlay
	 */
	struct ABP_Chef_Hat_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.DisableHighlight
	 */
	struct ABP_Chef_Hat_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.EnableHighlight
	 */
	struct ABP_Chef_Hat_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.ExecuteUbergraph_BP_Chef_Hat
	 */
	struct ABP_Chef_Hat_C_ExecuteUbergraph_BP_Chef_Hat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PMPL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Chef_Hat.BP_Chef_Hat_C.HatPutOn__DelegateSignature
	 */
	struct ABP_Chef_Hat_C_HatPutOn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
