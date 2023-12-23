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
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.SetUncookedPorridge
	 */
	struct ABP_Porridge_Pot_C_SetUncookedPorridge_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.SetCookedPorridge
	 */
	struct ABP_Porridge_Pot_C_SetCookedPorridge_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.AddOats
	 */
	struct ABP_Porridge_Pot_C_AddOats_Params
	{
	public:
		bool                                                       AddedSuccesfully;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0U1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.AddWater
	 */
	struct ABP_Porridge_Pot_C_AddWater_Params
	{
	public:
		bool                                                       AddedSuccessfully;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.UpgradeEquipment
	 */
	struct ABP_Porridge_Pot_C_UpgradeEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MaxLevel;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ON2N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.SetUpEquipment
	 */
	struct ABP_Porridge_Pot_C_SetUpEquipment_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCSM[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.UserConstructionScript
	 */
	struct ABP_Porridge_Pot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Porridge_Pot_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQAQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.IngredientCheck
	 */
	struct ABP_Porridge_Pot_C_IngredientCheck_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.ReceiveBeginPlay
	 */
	struct ABP_Porridge_Pot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Porridge_Pot_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.CheckServings
	 */
	struct ABP_Porridge_Pot_C_CheckServings_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.EmptyEquipment
	 */
	struct ABP_Porridge_Pot_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.CalculateStirValue
	 */
	struct ABP_Porridge_Pot_C_CalculateStirValue_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.UpdateWaterMeshPosition
	 */
	struct ABP_Porridge_Pot_C_UpdateWaterMeshPosition_Params
	{
	public:
		class UStaticMeshComponent*                                WaterMesh;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.SetControllerRumble
	 */
	struct ABP_Porridge_Pot_C_SetControllerRumble_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.ShowNextTutorialStep
	 */
	struct ABP_Porridge_Pot_C_ShowNextTutorialStep_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.ReceiveWater
	 */
	struct ABP_Porridge_Pot_C_ReceiveWater_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.ReceiveEndPlay
	 */
	struct ABP_Porridge_Pot_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.ExecuteUbergraph_BP_Porridge_Pot
	 */
	struct ABP_Porridge_Pot_C_ExecuteUbergraph_BP_Porridge_Pot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.PorridgeMixed__DelegateSignature
	 */
	struct ABP_Porridge_Pot_C_PorridgeMixed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.OatsAdded__DelegateSignature
	 */
	struct ABP_Porridge_Pot_C_OatsAdded__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Porridge_Pot.BP_Porridge_Pot_C.WaterAdded__DelegateSignature
	 */
	struct ABP_Porridge_Pot_C_WaterAdded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
