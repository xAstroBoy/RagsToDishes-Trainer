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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_LoopManager_Nobles.BP_LoopManager_Nobles_C
	 * Size -> 0x0218 (FullSize[0x07B8] - InheritedSize[0x05A0])
	 */
	class ABP_LoopManager_Nobles_C : public ABP_LoopManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Order_Manager_Nobles_C*                          OrderManager_Nobles;                                     // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pie_Upgraded;                                            // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Oven_Level1_Upgraded;                                    // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Oven_Level2_Upgraded;                                    // 0x05B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ENSC[0x1];                                   // 0x05B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Oven_Level1_UpgradeCost;                                 // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Oven_Level2_UpgradeCost;                                 // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Rotisserie_Level1_Upgraded;                              // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WSAZ[0x3];                                   // 0x05BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Rotisserie_Level1_UpgradeCost;                           // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StewPot_Level1_UpgradeCost;                              // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StewPot_Level2_UpgradeCost;                              // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StewPot_Level1_Upgraded;                                 // 0x05CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StewPot_Level2_Upgraded;                                 // 0x05CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PKF[0x2];                                   // 0x05CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Knife_UpgradeCost;                                       // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Upgrades_Toggle;                                         // 0x05D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B8CK[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFirstPersonCharacter_C*                             FirstPerson;                                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DeliveryBay_Nobles_C*                            DeliveryBay_Nobles;                                      // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_Upgrade_Order_Nobles>                UpgradesOrder;                                           // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAudioComponent*                                     LevelMusic;                                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Wine_Upgraded;                                           // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Fish_Upgraded;                                           // 0x0601(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stew_Upgraded;                                           // 0x0602(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Seasoning_Level1_Upgraded;                               // 0x0603(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DrinkBarrels_Upgraded;                                   // 0x0604(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5Q1[0x3];                                   // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PieDish_Level1_UpgradeCost;                              // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PieDish_Level2_UpgradeCost;                              // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Seasoning_Level2_UpgradeCost;                            // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Seasoning_Level2_Upgraded;                               // 0x0614(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PieDish_Level1_Upgraded;                                 // 0x0615(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PieDish_Level2_Upgraded;                                 // 0x0616(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Knife_Upgraded;                                          // 0x0617(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DrinkBarrels_UpgradeCost;                                // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Bread_Orders_Money;                            // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Skewer_Orders_Money;                           // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders_Money;                            // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Pie_Orders_Money;                              // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Stew_Orders_Money;                             // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage1;                                    // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage2;                                    // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage3;                                    // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage4;                                    // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage5;                                    // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage6;                                    // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KitchenDecorations_Value;                                // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Bread_Orders;                                  // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Skewer_Orders;                                 // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders;                                  // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Pie_Orders;                                    // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Stew_Orders;                                   // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Pie_Orders;                              // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Drink_Orders;                            // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Bread_Orders;                            // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Skewer_Orders;                           // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Stew_Orders;                             // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SZ7H[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_Upgrade_Order_Nobles>                UpgradesNobles;                                          // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    KitchenDecorations1_UpgradeCost;                         // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KitchenDecorations2_UpgradeCost;                         // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FreeSample_UpgradeCost;                                  // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CustomerPatience_UpgradeCost;                            // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KitchenDecorations1_Upgraded;                            // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations2_Upgraded;                            // 0x0699(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CustomerPatience_Upgraded;                               // 0x069A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AFRN[0x5];                                   // 0x069B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Kitchen_Nobles_C*                                Kitchen_BP;                                              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_EndOfStage_Nobles_C*                             EndOfStage_Ref;                                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOvenSpawnPoint_C*                                   OvenSpawnPoint_Ref;                                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStewSpawnPoint_C*                                   StewPotSpawnPoint_Ref;                                   // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOatmealContainerSpawnPoint_C*                       OatmealSpawnPoint_Ref;                                   // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARotisserieSpawnPoint_C*                             RotisserieSpawnPoint_Ref;                                // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkewerSpawnPoint_C*                                 SkewerSpawnPoint_Ref;                                    // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASeasoningSpawnPoint_C*                              SeasoningSpawnPoint_Ref;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient1SpawnPoint_C*                        Vegetable1SpawnPoint_Ref;                                // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient2SpawnPoint_C*                        Vegetable2SpawnPoint_Ref;                                // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient3SpawnPoint_C*                        Vegetable3SpawnPoint_Ref;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient4SpawnPoint_C*                        Vegetable4SpawnPoint_Ref;                                // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADrinkTapsSpawnPoint_C*                              DrinkTapsSpawnPoint_Ref;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AKnifeSpawnPoint_C*                                  KnifeSpawnPoint_Ref;                                     // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChopMeatSpawnPoint_C*                               ChopMeatSpawnPoint_Ref;                                  // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChopFishSpawnPoint_C*                               ChopFishSpawnPoint_Ref;                                  // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoughContainterSpawnPoint_C*                        DoughSpawnPoint_Ref;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACheeseSpawnPoint_C*                                 CheeseSpawnPoint_Ref;                                    // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABowlsSpawnPoint_C*                                  BowlsSpawnPoint_Ref;                                     // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Dough_C*                                 Dough_Ref;                                               // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Cheese_C*                                Cheese_Ref;                                              // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Plate_C*                                 Bowls_Ref;                                               // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish1SpawnPoint_C*                               PieDish1SpawnPoint_Ref;                                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish2SpawnPoint_C*                               PieDish2SpawnPoint_Ref;                                  // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASweetSpawnPoint_C*                                  FreeSampleSpawnPoint_Ref;                                // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Decoration_Nobles_C*                         PieDecorations_Ref;                                      // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Dish_C*                                      PieDish1_Ref;                                            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Dish_C*                                      PieDish2_Ref;                                            // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Pie_Tutorial_C*               Pie_StoryEvent;                                          // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Wine_Tutorial_C*              Wine_StoryEvent;                                         // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Salt_Tutorial_C*              Salt_StoryEvent;                                         // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Stew_Tutorial_C*              Stew_StoryEvent;                                         // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Fish_Tutorial_C*              Fish_StoryEvent;                                         // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Nobles_Stage_Start_C*                NoblesStageStart_StoryEvent;                             // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Sweets_Tutorial_C*                   FreeSampleTutorial_Ref;                                  // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref);
		void SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref);
		void CheckStoryLevel(bool* ShowStoryPoint);
		void CheckStoryLevel_Nobles(bool* ShowStoryPoint);
		void SetupLevel_Nobles();
		void SetupBonusCustomer_Nobles();
		void SetupBird_Nobles();
		void ResetValues_Nobles();
		void SetupLoopStart_Nobles(bool StoryPoint);
		void LoadGame_Nobles();
		void SaveGame_Nobles();
		void SetupReferences_Nobles();
		void CollectStats_Nobles();
		void CheckUpgradeLevel(bool* UnlockedLevel);
		void CheckUpgradeLevel_Nobles(bool* UnlockedLevel);
		void UpdateUpgradesArray_Nobles();
		void CheckAchievements(bool* AchievementUnlocked);
		void CheckAchievements_Nobles(bool* AchievementUnlocked);
		void RemoveEquipment_Nobles();
		void UpdateSaveEvents(Enum_Upgrade_Levels_Nobles UpgradeLevel);
		void UpdateUpgradeStats();
		void CheckForNewUpgrades(bool* NewUpgrades);
		void UserConstructionScript();
		void UpgradeOven1();
		void UpgradeOven2();
		void UpgradeRotisserie1();
		void UpgradeStewPot1();
		void UpgradeStewPot2();
		void UpgradePieDish1();
		void UpgradePieDish2();
		void UpgradeDrinkBarrels();
		void UpgradeKnife();
		void UpgradeSeasoning2();
		void UnlockPie();
		void UnlockWine();
		void UnlockSalt();
		void UnlockStew();
		void UnlockFish();
		void UpgradeKitchenDecorations1();
		void UpgradeKitchenDecorations2();
		void EndStartOfGame_Story();
		void PlayStoryPoints(Enum_Upgrade_Levels_Nobles UpgradeLevel);
		void EndStoryPoint(Enum_Upgrade_Levels_Nobles UpgradeLevel);
		void BeginNobles();
		void EndFreeSampleTutorial();
		void UpgradeFreeSample();
		void UpgradeCustomerPatience();
		void StartReferences();
		void SetupNewGameKitchen();
		void SpawnStageStartStoryPoint();
		void StartGameSystems();
		void StopGameSystems();
		void SpawnFreeSampleTutorial();
		void OpenCurtain();
		void CloseCurtain();
		void SpawnEndOfStageEvent();
		void ResetDeliveryBay(bool Active);
		void DestroyEndOfStageEvent();
		void CompleteUpgradeOrder();
		void DestroyDeliveryBay();
		void SetupBossKitchen();
		void GeneratePseudoTime();
		void RemoveEquipment();
		void UpdateUpgradesArray();
		void CollectStats();
		void SetupReferences();
		void SaveGame();
		void LoadGame();
		void SetupLoopStart(bool Story);
		void ResetValues();
		void Setup_Bird();
		void Setup_BonusCustomer();
		void SetupLevel();
		void SpawnEndOfLoopStats();
		void SpawnBird();
		void ExecuteUbergraph_BP_LoopManager_Nobles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
