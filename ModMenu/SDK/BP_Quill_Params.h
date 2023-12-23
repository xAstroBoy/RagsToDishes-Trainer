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
	 * Function BP_Quill.BP_Quill_C.Grab
	 */
	struct ABP_Quill_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6GVF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Quill.BP_Quill_C.IsHeldByController
	 */
	struct ABP_Quill_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Quill.BP_Quill_C.TraceToWrite
	 */
	struct ABP_Quill_C_TraceToWrite_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.FReturn
	 */
	struct ABP_Quill_C_FReturn_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.UserConstructionScript
	 */
	struct ABP_Quill_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.Release
	 */
	struct ABP_Quill_C_Release_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.AutoRelease
	 */
	struct ABP_Quill_C_AutoRelease_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.HideQuill
	 */
	struct ABP_Quill_C_HideQuill_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.ShowQuill
	 */
	struct ABP_Quill_C_ShowQuill_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.ReceiveBeginPlay
	 */
	struct ABP_Quill_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.DisableHighlight
	 */
	struct ABP_Quill_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.EnableHighlight
	 */
	struct ABP_Quill_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Quill.BP_Quill_C.ExecuteUbergraph_BP_Quill
	 */
	struct ABP_Quill_C_ExecuteUbergraph_BP_Quill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J2A7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
