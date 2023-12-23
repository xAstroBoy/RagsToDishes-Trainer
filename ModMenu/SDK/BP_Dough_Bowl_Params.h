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
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.UserConstructionScript
	 */
	struct ABP_Dough_Bowl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Dough_Bowl_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T3GD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.IngredientCheck
	 */
	struct ABP_Dough_Bowl_C_IngredientCheck_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.AddWater
	 */
	struct ABP_Dough_Bowl_C_AddWater_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.AddFlour
	 */
	struct ABP_Dough_Bowl_C_AddFlour_Params
	{
	public:
		class AActor*                                              FlourRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Dough_Bowl_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.SpawnDough
	 */
	struct ABP_Dough_Bowl_C_SpawnDough_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.EmptyEquipment
	 */
	struct ABP_Dough_Bowl_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.UpdateWaterMeshPosition
	 */
	struct ABP_Dough_Bowl_C_UpdateWaterMeshPosition_Params
	{
	public:
		class UStaticMeshComponent*                                WaterMesh;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.CalculateKneadValue
	 */
	struct ABP_Dough_Bowl_C_CalculateKneadValue_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.RemoveActorFromEquipment
	 */
	struct ABP_Dough_Bowl_C_RemoveActorFromEquipment_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.ReceiveBeginPlay
	 */
	struct ABP_Dough_Bowl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.ShowNextTutorialStep
	 */
	struct ABP_Dough_Bowl_C_ShowNextTutorialStep_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.ReceiveWater
	 */
	struct ABP_Dough_Bowl_C_ReceiveWater_Params
	{	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.RemoveActor
	 */
	struct ABP_Dough_Bowl_C_RemoveActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dough_Bowl.BP_Dough_Bowl_C.ExecuteUbergraph_BP_Dough_Bowl
	 */
	struct ABP_Dough_Bowl_C_ExecuteUbergraph_BP_Dough_Bowl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
