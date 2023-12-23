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
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnStartOfLoopUI
	 */
	struct ABP_LoopManager_Peasants_C_SpawnStartOfLoopUI_Params
	{
	public:
		bool                                                       LeveledUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y63L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_StartOfLoop_UI_C*                                Ref;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnLoopMenu
	 */
	struct ABP_LoopManager_Peasants_C_SpawnLoopMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EndOfStage;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JED[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements
	 */
	struct ABP_LoopManager_Peasants_C_CheckAchievements_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel
	 */
	struct ABP_LoopManager_Peasants_C_CheckUpgradeLevel_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel
	 */
	struct ABP_LoopManager_Peasants_C_CheckStoryLevel_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_CheckStoryLevel_Peasants_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesStats
	 */
	struct ABP_LoopManager_Peasants_C_UpdateUpgradesStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_SetupLevel_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_Setup_BonusCustomer_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_Setup_Bird_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_SetupLoopStart_Peasants_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_ResetValues_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckForNewUpgrades
	 */
	struct ABP_LoopManager_Peasants_C_CheckForNewUpgrades_Params
	{
	public:
		bool                                                       NewUpgrades;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_LoadGame_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_SaveGame_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_SetupReferences_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_CheckUpgradeLevel_Peasants_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_CheckAchievements_Peasants_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G226[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_CollectStats_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_UpdateUpgradesArray_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_RemoveEquipment_Peasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UserConstructionScript
	 */
	struct ABP_LoopManager_Peasants_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Oatmeal
	 */
	struct ABP_LoopManager_Peasants_C_UnlockOatmeal_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Cheese
	 */
	struct ABP_LoopManager_Peasants_C_UnlockCheese_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup
	 */
	struct ABP_LoopManager_Peasants_C_UnlockSoup_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage
	 */
	struct ABP_LoopManager_Peasants_C_UnlockPottage_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Dough
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeDough_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Ale
	 */
	struct ABP_LoopManager_Peasants_C_UnlockAle_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven1
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeOven1_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill1
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeGrill1_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot1
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeSoupPot1_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot1
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeOatmealPot1_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup2
	 */
	struct ABP_LoopManager_Peasants_C_UnlockSoup2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage2
	 */
	struct ABP_LoopManager_Peasants_C_UnlockPottage2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven2
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeOven2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot2
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeOatmealPot2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill2
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeGrill2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot2
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeSoupPot2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations1
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeKitchenDecorations1_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations2
	 */
	struct ABP_LoopManager_Peasants_C_UpgradeKitchenDecorations2_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StartOfGame_Story
	 */
	struct ABP_LoopManager_Peasants_C_EndStartOfGame_Story_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Play:StoryPoints
	 */
	struct ABP_LoopManager_Peasants_C_PlayStoryPoints_Params
	{
	public:
		Enum_Upgrade_Levels_Peasants                               UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StoryPoint
	 */
	struct ABP_LoopManager_Peasants_C_EndStoryPoint_Params
	{
	public:
		Enum_Upgrade_Levels_Peasants                               UpgradeLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.BeginPeasants
	 */
	struct ABP_LoopManager_Peasants_C_BeginPeasants_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:UpgradeShopTutorial
	 */
	struct ABP_LoopManager_Peasants_C_EndUpgradeShopTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartReferences
	 */
	struct ABP_LoopManager_Peasants_C_StartReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:NewGameKitchen
	 */
	struct ABP_LoopManager_Peasants_C_SetupNewGameKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:StageStartStoryPoint
	 */
	struct ABP_LoopManager_Peasants_C_SpawnStageStartStoryPoint_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel
	 */
	struct ABP_LoopManager_Peasants_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray
	 */
	struct ABP_LoopManager_Peasants_C_UpdateUpgradesArray_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart
	 */
	struct ABP_LoopManager_Peasants_C_SetupLoopStart_Params
	{
	public:
		bool                                                       Story;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues
	 */
	struct ABP_LoopManager_Peasants_C_ResetValues_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartGameSystems
	 */
	struct ABP_LoopManager_Peasants_C_StartGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StopGameSystems
	 */
	struct ABP_LoopManager_Peasants_C_StopGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird
	 */
	struct ABP_LoopManager_Peasants_C_Setup_Bird_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer
	 */
	struct ABP_LoopManager_Peasants_C_Setup_BonusCustomer_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.GeneratePseudoTime
	 */
	struct ABP_LoopManager_Peasants_C_GeneratePseudoTime_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetDeliveryBay
	 */
	struct ABP_LoopManager_Peasants_C_ResetDeliveryBay_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.OpenCurtain
	 */
	struct ABP_LoopManager_Peasants_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfStageEvent
	 */
	struct ABP_LoopManager_Peasants_C_SpawnEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats
	 */
	struct ABP_LoopManager_Peasants_C_CollectStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CloseCurtain
	 */
	struct ABP_LoopManager_Peasants_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment
	 */
	struct ABP_LoopManager_Peasants_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:EndOfStageEvent
	 */
	struct ABP_LoopManager_Peasants_C_DestroyEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:DeliveryBay
	 */
	struct ABP_LoopManager_Peasants_C_DestroyDeliveryBay_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:BossKitchen
	 */
	struct ABP_LoopManager_Peasants_C_SetupBossKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences
	 */
	struct ABP_LoopManager_Peasants_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CompleteUpgradeOrder
	 */
	struct ABP_LoopManager_Peasants_C_CompleteUpgradeOrder_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame
	 */
	struct ABP_LoopManager_Peasants_C_SaveGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame
	 */
	struct ABP_LoopManager_Peasants_C_LoadGame_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfLoopStats
	 */
	struct ABP_LoopManager_Peasants_C_SpawnEndOfLoopStats_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnBird
	 */
	struct ABP_LoopManager_Peasants_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ExecuteUbergraph_BP_LoopManager_Peasants
	 */
	struct ABP_LoopManager_Peasants_C_ExecuteUbergraph_BP_LoopManager_Peasants_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
