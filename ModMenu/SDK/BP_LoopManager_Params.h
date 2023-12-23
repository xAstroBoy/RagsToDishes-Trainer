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
	 * Function BP_LoopManager.BP_LoopManager_C.SpawnStartOfLoopUI
	 */
	struct ABP_LoopManager_C_SpawnStartOfLoopUI_Params
	{
	public:
		bool                                                       LeveledUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PV9X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_StartOfLoop_UI_C*                                Ref;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SpawnBird
	 */
	struct ABP_LoopManager_C_SpawnBird_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SpawnLoopMenu
	 */
	struct ABP_LoopManager_C_SpawnLoopMenu_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		Enum_InLoopMenu                                            MenuOption;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EndOfStage;                                              // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8NX[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_InLoop_Selection_Menu_C*                         Ref;                                                     // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Check_5_Consecutive_Fast_Orders
	 */
	struct ABP_LoopManager_C_Check_5_Consecutive_Fast_Orders_Params
	{
	public:
		float                                                      OriginalTime;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeliveryTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Check_10_Consecutive_Happy_Customers
	 */
	struct ABP_LoopManager_C_Check_10_Consecutive_Happy_Customers_Params
	{
	public:
		bool                                                       HappyCustomer;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Check
	 */
	struct ABP_LoopManager_C_LoopBonusCheck_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoadGame
	 */
	struct ABP_LoopManager_C_LoadGame_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SaveGame
	 */
	struct ABP_LoopManager_C_SaveGame_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SetupReferences
	 */
	struct ABP_LoopManager_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.RemoveEquipment
	 */
	struct ABP_LoopManager_C_RemoveEquipment_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CollectStats
	 */
	struct ABP_LoopManager_C_CollectStats_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CheckAchievements
	 */
	struct ABP_LoopManager_C_CheckAchievements_Params
	{
	public:
		bool                                                       AchievementUnlocked;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.GeneratePseudoTime
	 */
	struct ABP_LoopManager_C_GeneratePseudoTime_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Setup_BonusCustomer
	 */
	struct ABP_LoopManager_C_Setup_BonusCustomer_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Setup_Bird
	 */
	struct ABP_LoopManager_C_Setup_Bird_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Activate
	 */
	struct ABP_LoopManager_C_LoopBonusActivate_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.ResetValues
	 */
	struct ABP_LoopManager_C_ResetValues_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CheckUpgradeLevel
	 */
	struct ABP_LoopManager_C_CheckUpgradeLevel_Params
	{
	public:
		bool                                                       UnlockedLevel;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CheckStoryLevel
	 */
	struct ABP_LoopManager_C_CheckStoryLevel_Params
	{
	public:
		bool                                                       ShowStoryPoint;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SetupLoopStart
	 */
	struct ABP_LoopManager_C_SetupLoopStart_Params
	{
	public:
		bool                                                       Story;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.UpdateUpgradesArray
	 */
	struct ABP_LoopManager_C_UpdateUpgradesArray_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SetupLevel
	 */
	struct ABP_LoopManager_C_SetupLevel_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.StartReferences
	 */
	struct ABP_LoopManager_C_StartReferences_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.UserConstructionScript
	 */
	struct ABP_LoopManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 */
	struct ABP_LoopManager_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.MusicTransition
	 */
	struct ABP_LoopManager_C_MusicTransition_Params
	{
	public:
		Enum_Music                                                 To;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SetupStartOfLoop
	 */
	struct ABP_LoopManager_C_SetupStartOfLoop_Params
	{
	public:
		bool                                                       LeveledUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EndOfLoop;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.ShowStartMenu
	 */
	struct ABP_LoopManager_C_ShowStartMenu_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.SetupStage
	 */
	struct ABP_LoopManager_C_SetupStage_Params
	{
	public:
		Enum_Game_Stages                                           Stage;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ECL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StageString;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Spawn:StageStartStoryPoint
	 */
	struct ABP_LoopManager_C_SpawnStageStartStoryPoint_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Setup:NewGameKitchen
	 */
	struct ABP_LoopManager_C_SetupNewGameKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.StopGameSystems
	 */
	struct ABP_LoopManager_C_StopGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.StartGameSystems
	 */
	struct ABP_LoopManager_C_StartGameSystems_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.RushHourEffect
	 */
	struct ABP_LoopManager_C_RushHourEffect_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.PlayLoop
	 */
	struct ABP_LoopManager_C_PlayLoop_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CheckLoopComplete
	 */
	struct ABP_LoopManager_C_CheckLoopComplete_Params
	{
	public:
		bool                                                       OrdersCompleted;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.ResetPlayLoop
	 */
	struct ABP_LoopManager_C_ResetPlayLoop_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.ResetDeliveryBay
	 */
	struct ABP_LoopManager_C_ResetDeliveryBay_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.OpenCurtain
	 */
	struct ABP_LoopManager_C_OpenCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageEvent
	 */
	struct ABP_LoopManager_C_SpawnEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.EndOfLoop
	 */
	struct ABP_LoopManager_C_EndOfLoop_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfLoopStats
	 */
	struct ABP_LoopManager_C_SpawnEndOfLoopStats_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.EndOfLoopUI
	 */
	struct ABP_LoopManager_C_EndOfLoopUI_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Setup:NewLoop
	 */
	struct ABP_LoopManager_C_SetupNewLoop_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CloseCurtain
	 */
	struct ABP_LoopManager_C_CloseCurtain_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Reset:EndOfStageEvent
	 */
	struct ABP_LoopManager_C_ResetEndOfStageEvent_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OldLadyActive;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Destroy:EndOfStageEvent
	 */
	struct ABP_LoopManager_C_DestroyEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Play:EndOfStageEvent
	 */
	struct ABP_LoopManager_C_PlayEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.End:EndOfStageEvent
	 */
	struct ABP_LoopManager_C_EndEndOfStageEvent_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Completed:EndOfStage
	 */
	struct ABP_LoopManager_C_CompletedEndOfStage_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageStats
	 */
	struct ABP_LoopManager_C_SpawnEndOfStageStats_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Destroy:DeliveryBay
	 */
	struct ABP_LoopManager_C_DestroyDeliveryBay_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Setup:BossKitchen
	 */
	struct ABP_LoopManager_C_SetupBossKitchen_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.PauseGame-Activate
	 */
	struct ABP_LoopManager_C_PauseGameActivate_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.PauseGame-Deactivate
	 */
	struct ABP_LoopManager_C_PauseGameDeactivate_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Equipment
	 */
	struct ABP_LoopManager_C_LoadLevelEquipment_Params
	{
	public:
		bool                                                       StoryPoint;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EndOfLoop;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Upgrades
	 */
	struct ABP_LoopManager_C_LoadLevelUpgrades_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Equipment
	 */
	struct ABP_LoopManager_C_UnloadLevelEquipment_Params
	{
	public:
		Enum_LevelStreaming                                        LoadLevel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StoryPoint;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EndOfLoop;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LevelStreaming
	 */
	struct ABP_LoopManager_C_LevelStreaming_Params
	{
	public:
		Enum_LevelStreaming                                        UnloadLevel;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_LevelStreaming                                        LoadLevel;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StoryPoint;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EndOfLoop;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Upgrades
	 */
	struct ABP_LoopManager_C_UnloadLevelUpgrades_Params
	{
	public:
		bool                                                       EndOfLoop;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.CompleteUpgradeOrder
	 */
	struct ABP_LoopManager_C_CompleteUpgradeOrder_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.Spawn:FreeSampleTutorial
	 */
	struct ABP_LoopManager_C_SpawnFreeSampleTutorial_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.LoadPlayerInLevel
	 */
	struct ABP_LoopManager_C_LoadPlayerInLevel_Params
	{	};

	/**
	 * Function BP_LoopManager.BP_LoopManager_C.ExecuteUbergraph_BP_LoopManager
	 */
	struct ABP_LoopManager_C_ExecuteUbergraph_BP_LoopManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
