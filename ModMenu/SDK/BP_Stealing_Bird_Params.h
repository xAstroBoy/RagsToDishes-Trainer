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
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.UserConstructionScript
	 */
	struct ABP_Stealing_Bird_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.QuickStealMove__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_QuickStealMove__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.QuickStealMove__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_QuickStealMove__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.QuickStealReturn__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_QuickStealReturn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.QuickStealReturn__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_QuickStealReturn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.StealMove__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_StealMove__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.StealMove__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_StealMove__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.StealReturn__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_StealReturn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.StealReturn__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_StealReturn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ReturnToNest_Timeline__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_ReturnToNest_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ReturnToNest_Timeline__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_ReturnToNest_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ReturnToNest2_Timeline__FinishedFunc
	 */
	struct ABP_Stealing_Bird_C_ReturnToNest2_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ReturnToNest2_Timeline__UpdateFunc
	 */
	struct ABP_Stealing_Bird_C_ReturnToNest2_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ReceiveBeginPlay
	 */
	struct ABP_Stealing_Bird_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.QuickStealEvent
	 */
	struct ABP_Stealing_Bird_C_QuickStealEvent_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.StealEvent
	 */
	struct ABP_Stealing_Bird_C_StealEvent_Params
	{	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.BndEvt__Bird_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Stealing_Bird_C_BndEvt__Bird_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNIL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Stealing_Bird.BP_Stealing_Bird_C.ExecuteUbergraph_BP_Stealing_Bird
	 */
	struct ABP_Stealing_Bird_C_ExecuteUbergraph_BP_Stealing_Bird_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ODEL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
