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
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.StopHaptic
	 */
	struct ABP_Dish_Cup_C_StopHaptic_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.FillCup
	 */
	struct ABP_Dish_Cup_C_FillCup_Params
	{
	public:
		Enum_Drink_Types                                           Liquid;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.EmptyTrace
	 */
	struct ABP_Dish_Cup_C_EmptyTrace_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.PourTrace
	 */
	struct ABP_Dish_Cup_C_PourTrace_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.SetRuinedProperties
	 */
	struct ABP_Dish_Cup_C_SetRuinedProperties_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.SetWaterProperties
	 */
	struct ABP_Dish_Cup_C_SetWaterProperties_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.SetAleProperties
	 */
	struct ABP_Dish_Cup_C_SetAleProperties_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.SetWineProperties
	 */
	struct ABP_Dish_Cup_C_SetWineProperties_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.SetEmptyCupProperties
	 */
	struct ABP_Dish_Cup_C_SetEmptyCupProperties_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.UserConstructionScript
	 */
	struct ABP_Dish_Cup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.ReceiveTick
	 */
	struct ABP_Dish_Cup_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.EmptyDish
	 */
	struct ABP_Dish_Cup_C_EmptyDish_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.Release
	 */
	struct ABP_Dish_Cup_C_Release_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.CheckHitCount
	 */
	struct ABP_Dish_Cup_C_CheckHitCount_Params
	{	};

	/**
	 * Function BP_Dish_Cup.BP_Dish_Cup_C.ExecuteUbergraph_BP_Dish_Cup
	 */
	struct ABP_Dish_Cup_C_ExecuteUbergraph_BP_Dish_Cup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
