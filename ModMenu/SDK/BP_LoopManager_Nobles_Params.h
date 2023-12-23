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
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnStartOfLoopUI
	 */
	struct ABP_LoopManager_Nobles_C_SpawnStartOfLoopUI_Params
	{
	public:
		bool                                                       LeveledUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_37LG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_StartOfLoop_UI_C*                                Ref;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnLoopMenu
	 */
	struct ABP_LoopManager_Nobles_C_SpawnLoopMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EndOfStage;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_776P[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel
	 */
	struct ABP_LoopManager_Nobles_C_CheckStoryLevel_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_CheckStoryLevel_Nobles_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SetupLevel_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBonusCustomer_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SetupBonusCustomer_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBird_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SetupBird_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_ResetValues_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SetupLoopStart_Nobles_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_LoadGame_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SaveGame_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_SetupReferences_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_CollectStats_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel
	 */
	struct ABP_LoopManager_Nobles_C_CheckUpgradeLevel_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_CheckUpgradeLevel_Nobles_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_UpdateUpgradesArray_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements
	 */
	struct ABP_LoopManager_Nobles_C_CheckAchievements_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_CheckAchievements_Nobles_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E39Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_RemoveEquipment_Nobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateSaveEvents
	 */
	struct ABP_LoopManager_Nobles_C_UpdateSaveEvents_Params
	{
	public:
		Enum_Upgrade_Levels_Nobles                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UW47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradeStats
	 */
	struct ABP_LoopManager_Nobles_C_UpdateUpgradeStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckForNewUpgrades
	 */
	struct ABP_LoopManager_Nobles_C_CheckForNewUpgrades_Params
	{
	public:
		bool                                                       NewUpgrades;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UserConstructionScript
	 */
	struct ABP_LoopManager_Nobles_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven1
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeOven1_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven2
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeOven2_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Rotisserie1
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeRotisserie1_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot1
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeStewPot1_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot2
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeStewPot2_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish1
	 */
	struct ABP_LoopManager_Nobles_C_UpgradePieDish1_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish2
	 */
	struct ABP_LoopManager_Nobles_C_UpgradePieDish2_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:DrinkBarrels
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeDrinkBarrels_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Knife
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeKnife_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Seasoning2
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeSeasoning2_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockPie
	 */
	struct ABP_LoopManager_Nobles_C_UnlockPie_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockWine
	 */
	struct ABP_LoopManager_Nobles_C_UnlockWine_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockSalt
	 */
	struct ABP_LoopManager_Nobles_C_UnlockSalt_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockStew
	 */
	struct ABP_LoopManager_Nobles_C_UnlockStew_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockFish
	 */
	struct ABP_LoopManager_Nobles_C_UnlockFish_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations1
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeKitchenDecorations1_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations2
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeKitchenDecorations2_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StartOfGame_Story
	 */
	struct ABP_LoopManager_Nobles_C_EndStartOfGame_Story_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Play:StoryPoints
	 */
	struct ABP_LoopManager_Nobles_C_PlayStoryPoints_Params
	{
	public:
		Enum_Upgrade_Levels_Nobles                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StoryPoint
	 */
	struct ABP_LoopManager_Nobles_C_EndStoryPoint_Params
	{
	public:
		Enum_Upgrade_Levels_Nobles                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.BeginNobles
	 */
	struct ABP_LoopManager_Nobles_C_BeginNobles_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:FreeSampleTutorial
	 */
	struct ABP_LoopManager_Nobles_C_EndFreeSampleTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:FreeSample
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeFreeSample_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:CustomerPatience
	 */
	struct ABP_LoopManager_Nobles_C_UpgradeCustomerPatience_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartReferences
	 */
	struct ABP_LoopManager_Nobles_C_StartReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:NewGameKitchen
	 */
	struct ABP_LoopManager_Nobles_C_SetupNewGameKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:StageStartStoryPoint
	 */
	struct ABP_LoopManager_Nobles_C_SpawnStageStartStoryPoint_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartGameSystems
	 */
	struct ABP_LoopManager_Nobles_C_StartGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StopGameSystems
	 */
	struct ABP_LoopManager_Nobles_C_StopGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:FreeSampleTutorial
	 */
	struct ABP_LoopManager_Nobles_C_SpawnFreeSampleTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.OpenCurtain
	 */
	struct ABP_LoopManager_Nobles_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CloseCurtain
	 */
	struct ABP_LoopManager_Nobles_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfStageEvent
	 */
	struct ABP_LoopManager_Nobles_C_SpawnEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetDeliveryBay
	 */
	struct ABP_LoopManager_Nobles_C_ResetDeliveryBay_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:EndOfStageEvent
	 */
	struct ABP_LoopManager_Nobles_C_DestroyEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CompleteUpgradeOrder
	 */
	struct ABP_LoopManager_Nobles_C_CompleteUpgradeOrder_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:DeliveryBay
	 */
	struct ABP_LoopManager_Nobles_C_DestroyDeliveryBay_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:BossKitchen
	 */
	struct ABP_LoopManager_Nobles_C_SetupBossKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.GeneratePseudoTime
	 */
	struct ABP_LoopManager_Nobles_C_GeneratePseudoTime_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment
	 */
	struct ABP_LoopManager_Nobles_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray
	 */
	struct ABP_LoopManager_Nobles_C_UpdateUpgradesArray_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats
	 */
	struct ABP_LoopManager_Nobles_C_CollectStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences
	 */
	struct ABP_LoopManager_Nobles_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame
	 */
	struct ABP_LoopManager_Nobles_C_SaveGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame
	 */
	struct ABP_LoopManager_Nobles_C_LoadGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart
	 */
	struct ABP_LoopManager_Nobles_C_SetupLoopStart_Params
	{
	public:
		bool                                                       Story;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues
	 */
	struct ABP_LoopManager_Nobles_C_ResetValues_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_Bird
	 */
	struct ABP_LoopManager_Nobles_C_Setup_Bird_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_BonusCustomer
	 */
	struct ABP_LoopManager_Nobles_C_Setup_BonusCustomer_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel
	 */
	struct ABP_LoopManager_Nobles_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfLoopStats
	 */
	struct ABP_LoopManager_Nobles_C_SpawnEndOfLoopStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnBird
	 */
	struct ABP_LoopManager_Nobles_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ExecuteUbergraph_BP_LoopManager_Nobles
	 */
	struct ABP_LoopManager_Nobles_C_ExecuteUbergraph_BP_LoopManager_Nobles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
