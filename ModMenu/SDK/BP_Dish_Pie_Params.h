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
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.SwapToCookedMesh
	 */
	struct ABP_Dish_Pie_C_SwapToCookedMesh_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.SetPieMesh
	 */
	struct ABP_Dish_Pie_C_SetPieMesh_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.UserConstructionScript
	 */
	struct ABP_Dish_Pie_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.BakingTimeline__FinishedFunc
	 */
	struct ABP_Dish_Pie_C_BakingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.BakingTimeline__UpdateFunc
	 */
	struct ABP_Dish_Pie_C_BakingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.BakingTimeline__BakerNotify__EventFunc
	 */
	struct ABP_Dish_Pie_C_BakingTimeline__BakerNotify__EventFunc_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.ReceiveBeginPlay
	 */
	struct ABP_Dish_Pie_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Dish_Pie_C_BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UG1O[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.CompletePie
	 */
	struct ABP_Dish_Pie_C_CompletePie_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.BakePie
	 */
	struct ABP_Dish_Pie_C_BakePie_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MP9F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            ProgressBarMaterial;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BarMaxAlphaValue;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73HC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowComponent*                                     EndPos;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.EmptyDish
	 */
	struct ABP_Dish_Pie_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish_Pie.BP_Dish_Pie_C.ExecuteUbergraph_BP_Dish_Pie
	 */
	struct ABP_Dish_Pie_C_ExecuteUbergraph_BP_Dish_Pie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8H26[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
