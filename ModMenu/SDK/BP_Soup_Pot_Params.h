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
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.SetCookedVegetableMeshes
	 */
	struct ABP_Soup_Pot_C_SetCookedVegetableMeshes_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.SetUpEquipment
	 */
	struct ABP_Soup_Pot_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.UpgradeEquipment
	 */
	struct ABP_Soup_Pot_C_UpgradeEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MaxLevel;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJ3N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.SetVegetableMesh
	 */
	struct ABP_Soup_Pot_C_SetVegetableMesh_Params
	{
	public:
		class UStaticMeshComponent*                                MeshRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Tag;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.UserConstructionScript
	 */
	struct ABP_Soup_Pot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.SoupBoilingTimeline__FinishedFunc
	 */
	struct ABP_Soup_Pot_C_SoupBoilingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.SoupBoilingTimeline__UpdateFunc
	 */
	struct ABP_Soup_Pot_C_SoupBoilingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.AddWater
	 */
	struct ABP_Soup_Pot_C_AddWater_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.EmptyEquipment
	 */
	struct ABP_Soup_Pot_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Soup_Pot_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F9RG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.UpdateWaterMeshPosition
	 */
	struct ABP_Soup_Pot_C_UpdateWaterMeshPosition_Params
	{
	public:
		class UStaticMeshComponent*                                WaterMesh;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Soup_Pot_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VZ95[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.ShowNextTutorialStep
	 */
	struct ABP_Soup_Pot_C_ShowNextTutorialStep_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.CookSoup
	 */
	struct ABP_Soup_Pot_C_CookSoup_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.ReceiveWater
	 */
	struct ABP_Soup_Pot_C_ReceiveWater_Params
	{	};

	/**
	 * Function BP_Soup_Pot.BP_Soup_Pot_C.ExecuteUbergraph_BP_Soup_Pot
	 */
	struct ABP_Soup_Pot_C_ExecuteUbergraph_BP_Soup_Pot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
