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
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.UserConstructionScript
	 */
	struct ABP_Kitchen_Royals_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Platters
	 */
	struct ABP_Kitchen_Royals_C_SpawnPlatters_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Cake
	 */
	struct ABP_Kitchen_Royals_C_SpawnCake_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.BossLevel
	 */
	struct ABP_Kitchen_Royals_C_BossLevel_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.FinalLevel
	 */
	struct ABP_Kitchen_Royals_C_FinalLevel_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ReceiveBeginPlay
	 */
	struct ABP_Kitchen_Royals_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.CloseCurtain
	 */
	struct ABP_Kitchen_Royals_C_CloseCurtain_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.OpenCurtain
	 */
	struct ABP_Kitchen_Royals_C_OpenCurtain_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ExecuteUbergraph_BP_Kitchen_Royals
	 */
	struct ABP_Kitchen_Royals_C_ExecuteUbergraph_BP_Kitchen_Royals_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
