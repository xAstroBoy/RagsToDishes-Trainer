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
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.SwapToCookedMesh
	 */
	struct ABP_Dish_Bread_C_SwapToCookedMesh_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.SetCheeseBreadProperties
	 */
	struct ABP_Dish_Bread_C_SetCheeseBreadProperties_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.UserConstructionScript
	 */
	struct ABP_Dish_Bread_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.BakingTimeline__FinishedFunc
	 */
	struct ABP_Dish_Bread_C_BakingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.BakingTimeline__UpdateFunc
	 */
	struct ABP_Dish_Bread_C_BakingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.PositionTimeline__FinishedFunc
	 */
	struct ABP_Dish_Bread_C_PositionTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.PositionTimeline__UpdateFunc
	 */
	struct ABP_Dish_Bread_C_PositionTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.NoblesBakingTimeline__FinishedFunc
	 */
	struct ABP_Dish_Bread_C_NoblesBakingTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.NoblesBakingTimeline__UpdateFunc
	 */
	struct ABP_Dish_Bread_C_NoblesBakingTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.NoblesBakingTimeline__BakerNotify__EventFunc
	 */
	struct ABP_Dish_Bread_C_NoblesBakingTimeline__BakerNotify__EventFunc_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.BakeBread
	 */
	struct ABP_Dish_Bread_C_BakeBread_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CV39[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowComponent*                                     StartPos;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UArrowComponent*                                     EndPos;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            ProgressBarMaterial;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BarMaxAlphaValue;                                        // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L28B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Oven_C*                                          OvenRef;                                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.ReceiveBeginPlay
	 */
	struct ABP_Dish_Bread_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.BakeBreadNobles
	 */
	struct ABP_Dish_Bread_C_BakeBreadNobles_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4VGN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            ProgressBarMaterial;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BarMaxAlphaValue;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQDL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UArrowComponent*                                     EndPos;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Bread.BP_Dish_Bread_C.ExecuteUbergraph_BP_Dish_Bread
	 */
	struct ABP_Dish_Bread_C_ExecuteUbergraph_BP_Dish_Bread_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NT1M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
