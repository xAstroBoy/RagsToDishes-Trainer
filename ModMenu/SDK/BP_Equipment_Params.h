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
	 * Function BP_Equipment.BP_Equipment_C.CheckHitCount
	 */
	struct ABP_Equipment_C_CheckHitCount_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.ReceiveWater
	 */
	struct ABP_Equipment_C_ReceiveWater_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.ReturnEquipment
	 */
	struct ABP_Equipment_C_ReturnEquipment_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.ShowNextTutorialStep
	 */
	struct ABP_Equipment_C_ShowNextTutorialStep_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.SpawnTutorialArrow
	 */
	struct ABP_Equipment_C_SpawnTutorialArrow_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.SlotArrayCheck
	 */
	struct ABP_Equipment_C_SlotArrayCheck_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.RemoveActorFromEquipment
	 */
	struct ABP_Equipment_C_RemoveActorFromEquipment_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.SetUpEquipment
	 */
	struct ABP_Equipment_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.UpgradeEquipment
	 */
	struct ABP_Equipment_C_UpgradeEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MaxLevel;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RR64[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.UpdateWaterMeshPosition
	 */
	struct ABP_Equipment_C_UpdateWaterMeshPosition_Params
	{
	public:
		class UStaticMeshComponent*                                WaterMesh;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.EmptyEquipment
	 */
	struct ABP_Equipment_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.DeleteWrongIngredient
	 */
	struct ABP_Equipment_C_DeleteWrongIngredient_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Equipment.BP_Equipment_C.UserConstructionScript
	 */
	struct ABP_Equipment_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
