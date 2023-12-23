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
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GetActorNearHand
	 */
	struct ABP_MotionController_Pointing_C_GetActorNearHand_Params
	{
	public:
		class AActor*                                              NearestMesh;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.UserConstructionScript
	 */
	struct ABP_MotionController_Pointing_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveBeginPlay
	 */
	struct ABP_MotionController_Pointing_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReceiveTick
	 */
	struct ABP_MotionController_Pointing_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.GrabActor
	 */
	struct ABP_MotionController_Pointing_C_GrabActor_Params
	{	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ReleaseActor
	 */
	struct ABP_MotionController_Pointing_C_ReleaseActor_Params
	{	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.EndGrab
	 */
	struct ABP_MotionController_Pointing_C_EndGrab_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.CheckHandOverlapping
	 */
	struct ABP_MotionController_Pointing_C_CheckHandOverlapping_Params
	{	};

	/**
	 * Function BP_MotionController_Pointing.BP_MotionController_Pointing_C.ExecuteUbergraph_BP_MotionController_Pointing
	 */
	struct ABP_MotionController_Pointing_C_ExecuteUbergraph_BP_MotionController_Pointing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
