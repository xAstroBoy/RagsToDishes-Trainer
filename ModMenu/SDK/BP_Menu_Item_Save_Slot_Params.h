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
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.GrabToDelete
	 */
	struct ABP_Menu_Item_Save_Slot_C_GrabToDelete_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.Grab
	 */
	struct ABP_Menu_Item_Save_Slot_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHC2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.GetSaveData
	 */
	struct ABP_Menu_Item_Save_Slot_C_GetSaveData_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.UserConstructionScript
	 */
	struct ABP_Menu_Item_Save_Slot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Item_Save_Slot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.EnableHighlight
	 */
	struct ABP_Menu_Item_Save_Slot_C_EnableHighlight_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.Release
	 */
	struct ABP_Menu_Item_Save_Slot_C_Release_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot.BP_Menu_Item_Save_Slot_C.ExecuteUbergraph_BP_Menu_Item_Save_Slot
	 */
	struct ABP_Menu_Item_Save_Slot_C_ExecuteUbergraph_BP_Menu_Item_Save_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q2ZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
