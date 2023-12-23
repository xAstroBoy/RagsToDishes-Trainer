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
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnStartOfLoopUI
	 */
	struct ABP_LoopManager_Royals_C_SpawnStartOfLoopUI_Params
	{
	public:
		bool                                                       LeveledUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJ1O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_StartOfLoop_UI_C*                                Ref;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnLoopMenu
	 */
	struct ABP_LoopManager_Royals_C_SpawnLoopMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EndOfStage;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8R5M[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel
	 */
	struct ABP_LoopManager_Royals_C_CheckStoryLevel_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel_Royals
	 */
	struct ABP_LoopManager_Royals_C_CheckStoryLevel_Royals_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel_Royals
	 */
	struct ABP_LoopManager_Royals_C_SetupLevel_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBonusCustomer_Royals
	 */
	struct ABP_LoopManager_Royals_C_SetupBonusCustomer_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBird_Royals
	 */
	struct ABP_LoopManager_Royals_C_SetupBird_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues_Royals
	 */
	struct ABP_LoopManager_Royals_C_ResetValues_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart_Royals
	 */
	struct ABP_LoopManager_Royals_C_SetupLoopStart_Royals_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame_Royals
	 */
	struct ABP_LoopManager_Royals_C_LoadGame_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame_Royals
	 */
	struct ABP_LoopManager_Royals_C_SaveGame_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats_Royals
	 */
	struct ABP_LoopManager_Royals_C_CollectStats_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel
	 */
	struct ABP_LoopManager_Royals_C_CheckUpgradeLevel_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel_Royals
	 */
	struct ABP_LoopManager_Royals_C_CheckUpgradeLevel_Royals_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray_Royals
	 */
	struct ABP_LoopManager_Royals_C_UpdateUpgradesArray_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements
	 */
	struct ABP_LoopManager_Royals_C_CheckAchievements_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements_Royals
	 */
	struct ABP_LoopManager_Royals_C_CheckAchievements_Royals_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Z61[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment_Royals
	 */
	struct ABP_LoopManager_Royals_C_RemoveEquipment_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckForNewUpgrades
	 */
	struct ABP_LoopManager_Royals_C_CheckForNewUpgrades_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences_Royals
	 */
	struct ABP_LoopManager_Royals_C_SetupReferences_Royals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateSaveEvents
	 */
	struct ABP_LoopManager_Royals_C_UpdateSaveEvents_Params
	{
	public:
		Enum_Upgrade_Levels_Royals                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ML1R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesStats
	 */
	struct ABP_LoopManager_Royals_C_UpdateUpgradesStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UserConstructionScript
	 */
	struct ABP_LoopManager_Royals_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StopGameSystems
	 */
	struct ABP_LoopManager_Royals_C_StopGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartGameSystems
	 */
	struct ABP_LoopManager_Royals_C_StartGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StartOfGame_Story
	 */
	struct ABP_LoopManager_Royals_C_EndStartOfGame_Story_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Play:StoryPoints
	 */
	struct ABP_LoopManager_Royals_C_PlayStoryPoints_Params
	{
	public:
		Enum_Upgrade_Levels_Royals                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StoryPoint
	 */
	struct ABP_LoopManager_Royals_C_EndStoryPoint_Params
	{
	public:
		Enum_Upgrade_Levels_Royals                                 UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.BeginRoyals
	 */
	struct ABP_LoopManager_Royals_C_BeginRoyals_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:FreeSampleTutorial
	 */
	struct ABP_LoopManager_Royals_C_SpawnFreeSampleTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:FreeSampleTutorial
	 */
	struct ABP_LoopManager_Royals_C_EndFreeSampleTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:NewGameKitchen
	 */
	struct ABP_LoopManager_Royals_C_SetupNewGameKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:StageStartStoryPoint
	 */
	struct ABP_LoopManager_Royals_C_SpawnStageStartStoryPoint_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartReferences
	 */
	struct ABP_LoopManager_Royals_C_StartReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences
	 */
	struct ABP_LoopManager_Royals_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfStageEvent
	 */
	struct ABP_LoopManager_Royals_C_SpawnEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.OpenCurtain
	 */
	struct ABP_LoopManager_Royals_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetDeliveryBay
	 */
	struct ABP_LoopManager_Royals_C_ResetDeliveryBay_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CloseCurtain
	 */
	struct ABP_LoopManager_Royals_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:EndOfStageEvent
	 */
	struct ABP_LoopManager_Royals_C_DestroyEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:DeliveryBay
	 */
	struct ABP_LoopManager_Royals_C_DestroyDeliveryBay_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:BossKitchen
	 */
	struct ABP_LoopManager_Royals_C_SetupBossKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CompleteUpgradeOrder
	 */
	struct ABP_LoopManager_Royals_C_CompleteUpgradeOrder_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:Oven1
	 */
	struct ABP_LoopManager_Royals_C_UpgradeOven1_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:PieDish
	 */
	struct ABP_LoopManager_Royals_C_UpgradePieDish_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:DrinkBarrels
	 */
	struct ABP_LoopManager_Royals_C_UpgradeDrinkBarrels_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockCake
	 */
	struct ABP_LoopManager_Royals_C_UnlockCake_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockPlatters
	 */
	struct ABP_LoopManager_Royals_C_UnlockPlatters_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockChocolate
	 */
	struct ABP_LoopManager_Royals_C_UnlockChocolate_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockLobster
	 */
	struct ABP_LoopManager_Royals_C_UnlockLobster_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CleanFruits
	 */
	struct ABP_LoopManager_Royals_C_UpgradeCleanFruits_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:MeatStation1
	 */
	struct ABP_LoopManager_Royals_C_UpgradeMeatStation1_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CakeLid
	 */
	struct ABP_LoopManager_Royals_C_UpgradeCakeLid_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations1
	 */
	struct ABP_LoopManager_Royals_C_UpgradeKitchenDecorations1_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:RushHourBonus
	 */
	struct ABP_LoopManager_Royals_C_UpgradeRushHourBonus_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusFrequency&Patience
	 */
	struct ABP_LoopManager_Royals_C_UpgradeBonusFrequencyPatience_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations2
	 */
	struct ABP_LoopManager_Royals_C_UpgradeKitchenDecorations2_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusValue&Patience
	 */
	struct ABP_LoopManager_Royals_C_UpgradeBonusValuePatience_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:FreeSamples
	 */
	struct ABP_LoopManager_Royals_C_UpgradeFreeSamples_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment
	 */
	struct ABP_LoopManager_Royals_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray
	 */
	struct ABP_LoopManager_Royals_C_UpdateUpgradesArray_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats
	 */
	struct ABP_LoopManager_Royals_C_CollectStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame
	 */
	struct ABP_LoopManager_Royals_C_SaveGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame
	 */
	struct ABP_LoopManager_Royals_C_LoadGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart
	 */
	struct ABP_LoopManager_Royals_C_SetupLoopStart_Params
	{
	public:
		bool                                                       Story;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues
	 */
	struct ABP_LoopManager_Royals_C_ResetValues_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_Bird
	 */
	struct ABP_LoopManager_Royals_C_Setup_Bird_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_BonusCustomer
	 */
	struct ABP_LoopManager_Royals_C_Setup_BonusCustomer_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel
	 */
	struct ABP_LoopManager_Royals_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.GeneratePseudoTime
	 */
	struct ABP_LoopManager_Royals_C_GeneratePseudoTime_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfLoopStats
	 */
	struct ABP_LoopManager_Royals_C_SpawnEndOfLoopStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnBird
	 */
	struct ABP_LoopManager_Royals_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ExecuteUbergraph_BP_LoopManager_Royals
	 */
	struct ABP_LoopManager_Royals_C_ExecuteUbergraph_BP_LoopManager_Royals_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H8XR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
