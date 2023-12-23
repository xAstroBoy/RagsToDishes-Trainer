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
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.Grab
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_Grab_Params
	{
	public:
		class USceneComponent*                                     MotionController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             PhysicsHandle;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicsHandleComponent*                             AngularPhysicsHandle;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HLLI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_MotionController_C*                              Controller;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     AttachPoint;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              AttachedActor;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.SetUpOption
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_SetUpOption_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.UserConstructionScript
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.SetEnabled
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.SelectStage
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_SelectStage_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.DeselectStage
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_DeselectStage_Params
	{	};

	/**
	 * Function BP_Menu_Item_Save_Slot_Stage.BP_Menu_Item_Save_Slot_Stage_C.ExecuteUbergraph_BP_Menu_Item_Save_Slot_Stage
	 */
	struct ABP_Menu_Item_Save_Slot_Stage_C_ExecuteUbergraph_BP_Menu_Item_Save_Slot_Stage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UE6P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
