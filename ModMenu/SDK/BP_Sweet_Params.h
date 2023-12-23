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
	 * Function BP_Sweet.BP_Sweet_C.Grab
	 */
	struct ABP_Sweet_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8WK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.IsHeldByController
	 */
	struct ABP_Sweet_C_IsHeldByController_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.UserConstructionScript
	 */
	struct ABP_Sweet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.EnableHighlight
	 */
	struct ABP_Sweet_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.DisableHighlight
	 */
	struct ABP_Sweet_C_DisableHighlight_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.Release
	 */
	struct ABP_Sweet_C_Release_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.ReceiveBeginPlay
	 */
	struct ABP_Sweet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.FreeSampleUsed
	 */
	struct ABP_Sweet_C_FreeSampleUsed_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.ReturnFreeSample
	 */
	struct ABP_Sweet_C_ReturnFreeSample_Params
	{	};

	/**
	 * Function BP_Sweet.BP_Sweet_C.ExecuteUbergraph_BP_Sweet
	 */
	struct ABP_Sweet_C_ExecuteUbergraph_BP_Sweet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
