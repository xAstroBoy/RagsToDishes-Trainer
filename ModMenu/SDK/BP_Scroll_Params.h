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
	 * Function BP_Scroll.BP_Scroll_C.Grab
	 */
	struct ABP_Scroll_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ANM3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.IsHeldByController
	 */
	struct ABP_Scroll_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.TraceToWrite
	 */
	struct ABP_Scroll_C_TraceToWrite_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.UserConstructionScript
	 */
	struct ABP_Scroll_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.SpawnAnimTL__FinishedFunc
	 */
	struct ABP_Scroll_C_SpawnAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.SpawnAnimTL__UpdateFunc
	 */
	struct ABP_Scroll_C_SpawnAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.EnableHighlight
	 */
	struct ABP_Scroll_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.DisableHighlight
	 */
	struct ABP_Scroll_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.Release
	 */
	struct ABP_Scroll_C_Release_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.ReturnQuill
	 */
	struct ABP_Scroll_C_ReturnQuill_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.SpawnAnimation
	 */
	struct ABP_Scroll_C_SpawnAnimation_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.ReceiveBeginPlay
	 */
	struct ABP_Scroll_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.CompleteScrollSigning
	 */
	struct ABP_Scroll_C_CompleteScrollSigning_Params
	{	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.BndEvt__InkWellCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Scroll_C_BndEvt__InkWellCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GROT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.ExecuteUbergraph_BP_Scroll
	 */
	struct ABP_Scroll_C_ExecuteUbergraph_BP_Scroll_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LDE1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Scroll.BP_Scroll_C.ScrollSigned__DelegateSignature
	 */
	struct ABP_Scroll_C_ScrollSigned__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
