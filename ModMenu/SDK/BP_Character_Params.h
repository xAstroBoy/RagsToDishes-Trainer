﻿#pragma once

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
	 * Function BP_Character.BP_Character_C.UserConstructionScript
	 */
	struct ABP_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveTick
	 */
	struct ABP_Character_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 */
	struct ABP_Character_C_ExecuteUbergraph_BP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
