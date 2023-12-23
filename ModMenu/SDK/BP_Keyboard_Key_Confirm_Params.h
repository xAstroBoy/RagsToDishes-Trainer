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
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.Grab
	 */
	struct ABP_Keyboard_Key_Confirm_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4J4F[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.UserConstructionScript
	 */
	struct ABP_Keyboard_Key_Confirm_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.AnimTL__FinishedFunc
	 */
	struct ABP_Keyboard_Key_Confirm_C_AnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.AnimTL__UpdateFunc
	 */
	struct ABP_Keyboard_Key_Confirm_C_AnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.ReceiveBeginPlay
	 */
	struct ABP_Keyboard_Key_Confirm_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.AnimateButton
	 */
	struct ABP_Keyboard_Key_Confirm_C_AnimateButton_Params
	{	};

	/**
	 * Function BP_Keyboard_Key_Confirm.BP_Keyboard_Key_Confirm_C.ExecuteUbergraph_BP_Keyboard_Key_Confirm
	 */
	struct ABP_Keyboard_Key_Confirm_C_ExecuteUbergraph_BP_Keyboard_Key_Confirm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
