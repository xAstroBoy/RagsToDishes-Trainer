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
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.ReturnLid
	 */
	struct ABP_Cake_Pan_C_ReturnLid_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.AddEggs
	 */
	struct ABP_Cake_Pan_C_AddEggs_Params
	{
	public:
		bool                                                       AddedSuccessfully;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7VZ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.AddFlour
	 */
	struct ABP_Cake_Pan_C_AddFlour_Params
	{
	public:
		class ABP_Ingredient_C*                                    FlourRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddedSuccessfully;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.UserConstructionScript
	 */
	struct ABP_Cake_Pan_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BakingTimeline__FinishedFunc
	 */
	struct ABP_Cake_Pan_C_BakingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BakingTimeline__UpdateFunc
	 */
	struct ABP_Cake_Pan_C_BakingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BurningTimeline__FinishedFunc
	 */
	struct ABP_Cake_Pan_C_BurningTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BurningTimeline__UpdateFunc
	 */
	struct ABP_Cake_Pan_C_BurningTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.EggsAnimTL__FinishedFunc
	 */
	struct ABP_Cake_Pan_C_EggsAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.EggsAnimTL__UpdateFunc
	 */
	struct ABP_Cake_Pan_C_EggsAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.IngredientCheck
	 */
	struct ABP_Cake_Pan_C_IngredientCheck_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.CalculateStirValue
	 */
	struct ABP_Cake_Pan_C_CalculateStirValue_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.ReceiveBeginPlay
	 */
	struct ABP_Cake_Pan_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Cake_Pan_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5412[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Cake_Pan_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.BakeCake
	 */
	struct ABP_Cake_Pan_C_BakeCake_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.StopBaking
	 */
	struct ABP_Cake_Pan_C_StopBaking_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.EmptyEquipment
	 */
	struct ABP_Cake_Pan_C_EmptyEquipment_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.HidePan
	 */
	struct ABP_Cake_Pan_C_HidePan_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.RemoveActorFromEquipment
	 */
	struct ABP_Cake_Pan_C_RemoveActorFromEquipment_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.AnimateEggs
	 */
	struct ABP_Cake_Pan_C_AnimateEggs_Params
	{	};

	/**
	 * Function BP_Cake_Pan.BP_Cake_Pan_C.ExecuteUbergraph_BP_Cake_Pan
	 */
	struct ABP_Cake_Pan_C_ExecuteUbergraph_BP_Cake_Pan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
