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
	 * Function BP_Bird.BP_Bird_C.StopCharactersBeingScared
	 */
	struct ABP_Bird_C_StopCharactersBeingScared_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.CheckAmountToSteal
	 */
	struct ABP_Bird_C_CheckAmountToSteal_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.RandomizeFlight
	 */
	struct ABP_Bird_C_RandomizeFlight_Params
	{
	public:
		struct FVector                                             CurrentLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewLocation;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Bird.BP_Bird_C.UserConstructionScript
	 */
	struct ABP_Bird_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.FlyToBowl_Timeline__FinishedFunc
	 */
	struct ABP_Bird_C_FlyToBowl_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.FlyToBowl_Timeline__UpdateFunc
	 */
	struct ABP_Bird_C_FlyToBowl_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.Return_Timeline__FinishedFunc
	 */
	struct ABP_Bird_C_Return_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.Return_Timeline__UpdateFunc
	 */
	struct ABP_Bird_C_Return_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ReturnToNest_Timeline__FinishedFunc
	 */
	struct ABP_Bird_C_ReturnToNest_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ReturnToNest_Timeline__UpdateFunc
	 */
	struct ABP_Bird_C_ReturnToNest_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ReceiveBeginPlay
	 */
	struct ABP_Bird_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ReturnToNest
	 */
	struct ABP_Bird_C_ReturnToNest_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.StealMoney
	 */
	struct ABP_Bird_C_StealMoney_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.StopStealMoney
	 */
	struct ABP_Bird_C_StopStealMoney_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.StopReturnToNest
	 */
	struct ABP_Bird_C_StopReturnToNest_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.MoveToGemBowl
	 */
	struct ABP_Bird_C_MoveToGemBowl_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.StealFood
	 */
	struct ABP_Bird_C_StealFood_Params
	{
	public:
		class AActor*                                              Food;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Bird.BP_Bird_C.BndEvt__SkeletalMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Bird_C_BndEvt__SkeletalMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQTW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Bird.BP_Bird_C.Reset:StealMoney
	 */
	struct ABP_Bird_C_ResetStealMoney_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ReadyBirdToSteal
	 */
	struct ABP_Bird_C_ReadyBirdToSteal_Params
	{	};

	/**
	 * Function BP_Bird.BP_Bird_C.ExecuteUbergraph_BP_Bird
	 */
	struct ABP_Bird_C_ExecuteUbergraph_BP_Bird_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
