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
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.StopHaptic
	 */
	struct ABP_Dish_Jug_C_StopHaptic_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetEmptyProperties
	 */
	struct ABP_Dish_Jug_C_SetEmptyProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetRuinedProperties
	 */
	struct ABP_Dish_Jug_C_SetRuinedProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetJuiceProperties
	 */
	struct ABP_Dish_Jug_C_SetJuiceProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetMeadProperties
	 */
	struct ABP_Dish_Jug_C_SetMeadProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetWineProperties
	 */
	struct ABP_Dish_Jug_C_SetWineProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.SetWaterProperties
	 */
	struct ABP_Dish_Jug_C_SetWaterProperties_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.FillJug
	 */
	struct ABP_Dish_Jug_C_FillJug_Params
	{
	public:
		Enum_Drink_Types                                           Liquid;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.EmptyTrace
	 */
	struct ABP_Dish_Jug_C_EmptyTrace_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.PourTrace
	 */
	struct ABP_Dish_Jug_C_PourTrace_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.UserConstructionScript
	 */
	struct ABP_Dish_Jug_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.ReceiveBeginPlay
	 */
	struct ABP_Dish_Jug_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.ReceiveTick
	 */
	struct ABP_Dish_Jug_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.EmptyDish
	 */
	struct ABP_Dish_Jug_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.ReturnIfInSpawner
	 */
	struct ABP_Dish_Jug_C_ReturnIfInSpawner_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.Release
	 */
	struct ABP_Dish_Jug_C_Release_Params
	{	};

	/**
	 * Function BP_Dish_Jug.BP_Dish_Jug_C.ExecuteUbergraph_BP_Dish_Jug
	 */
	struct ABP_Dish_Jug_C_ExecuteUbergraph_BP_Dish_Jug_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
