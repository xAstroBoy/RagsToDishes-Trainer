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
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.CheckAchievements
	 */
	struct ABP_RtD_Game_Mode_C_CheckAchievements_Params
	{
	public:
		TArray<Enum_Achievements>                                  NewAchievements;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveAchievements
	 */
	struct ABP_RtD_Game_Mode_C_SaveAchievements_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.LoadGame
	 */
	struct ABP_RtD_Game_Mode_C_LoadGame_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveGame
	 */
	struct ABP_RtD_Game_Mode_C_SaveGame_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UserConstructionScript
	 */
	struct ABP_RtD_Game_Mode_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ReceiveBeginPlay
	 */
	struct ABP_RtD_Game_Mode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Peasants
	 */
	struct ABP_RtD_Game_Mode_C_StartStage_Peasants_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Nobles
	 */
	struct ABP_RtD_Game_Mode_C_StartStage_Nobles_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Royals
	 */
	struct ABP_RtD_Game_Mode_C_StartStage_Royals_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UpdateTutorialsAchievement
	 */
	struct ABP_RtD_Game_Mode_C_UpdateTutorialsAchievement_Params
	{	};

	/**
	 * Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ExecuteUbergraph_BP_RtD_Game_Mode
	 */
	struct ABP_RtD_Game_Mode_C_ExecuteUbergraph_BP_RtD_Game_Mode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3MZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
