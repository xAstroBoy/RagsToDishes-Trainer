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
	 * Function MotionControllerPawn.MotionControllerPawn_C.UserConstructionScript
	 */
	struct AMotionControllerPawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.LevelTransition_Timeline__FinishedFunc
	 */
	struct AMotionControllerPawn_C_LevelTransition_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.LevelTransition_Timeline__UpdateFunc
	 */
	struct AMotionControllerPawn_C_LevelTransition_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.TLOrientationChangeFade__FinishedFunc
	 */
	struct AMotionControllerPawn_C_TLOrientationChangeFade__FinishedFunc_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.TLOrientationChangeFade__UpdateFunc
	 */
	struct AMotionControllerPawn_C_TLOrientationChangeFade__UpdateFunc_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_4
	 */
	struct AMotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_3
	 */
	struct AMotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_2
	 */
	struct AMotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_1
	 */
	struct AMotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.ReceiveBeginPlay
	 */
	struct AMotionControllerPawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.BndEvt__HeadVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMotionControllerPawn_C_BndEvt__HeadVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMJS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.SpawnHandControllers
	 */
	struct AMotionControllerPawn_C_SpawnHandControllers_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.LevelFade:Start
	 */
	struct AMotionControllerPawn_C_LevelFadeStart_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.SpawnPointingControllers
	 */
	struct AMotionControllerPawn_C_SpawnPointingControllers_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.LevelFade:End
	 */
	struct AMotionControllerPawn_C_LevelFadeEnd_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.Fade
	 */
	struct AMotionControllerPawn_C_Fade_Params
	{
	public:
		bool                                                       Goal;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.HMDRecenteredDelegate_Event
	 */
	struct AMotionControllerPawn_C_HMDRecenteredDelegate_Event_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.OrientationChangeFade
	 */
	struct AMotionControllerPawn_C_OrientationChangeFade_Params
	{	};

	/**
	 * Function MotionControllerPawn.MotionControllerPawn_C.ExecuteUbergraph_MotionControllerPawn
	 */
	struct AMotionControllerPawn_C_ExecuteUbergraph_MotionControllerPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
