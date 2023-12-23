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
	 * Function BP_Honey_Pot.BP_Honey_Pot_C.ReturnSpoon
	 */
	struct ABP_Honey_Pot_C_ReturnSpoon_Params
	{
	public:
		class ABP_Serving_Spoon_C*                                 Spoon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Returned;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Honey_Pot.BP_Honey_Pot_C.UserConstructionScript
	 */
	struct ABP_Honey_Pot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Honey_Pot.BP_Honey_Pot_C.ReceiveBeginPlay
	 */
	struct ABP_Honey_Pot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Honey_Pot.BP_Honey_Pot_C.SpawnSpoon
	 */
	struct ABP_Honey_Pot_C_SpawnSpoon_Params
	{	};

	/**
	 * Function BP_Honey_Pot.BP_Honey_Pot_C.ExecuteUbergraph_BP_Honey_Pot
	 */
	struct ABP_Honey_Pot_C_ExecuteUbergraph_BP_Honey_Pot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHH3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
