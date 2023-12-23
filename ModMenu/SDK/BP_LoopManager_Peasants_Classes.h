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
	 * BlueprintGeneratedClass BP_LoopManager_Peasants.BP_LoopManager_Peasants_C
	 * Size -> 0x0238 (FullSize[0x07D8] - InheritedSize[0x05A0])
	 */
	class ABP_LoopManager_Peasants_C : public ABP_LoopManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_OrderManager_Peasants_C*                         OrderManager_Peasants;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Oatmeal_Upgraded;                                        // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Cheese_Upgraded;                                         // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Soup_Level1_Upgraded;                                    // 0x05B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Soup_Level2_Upgraded;                                    // 0x05B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Plate_Level1_Upgraded;                                   // 0x05B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Plate_Level2_Upgraded;                                   // 0x05B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Dough_Upgraded;                                          // 0x05B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Ale_Upgraded;                                            // 0x05B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    Dough_Cost;                                              // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Oven_Level1_Upgraded;                                    // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Oven_Level2_Upgraded;                                    // 0x05BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_21DZ[0x2];                                   // 0x05BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Oven_Level1_UpgradeCost;                                 // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Oven_Level2_UpgradeCost;                                 // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Grill_Level1_Upgraded;                                   // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Grill_Level2_Upgraded;                                   // 0x05C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JJQH[0x2];                                   // 0x05CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Grill_Level1_UpgradeCost;                                // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Grill_Level2_UpgradeCost;                                // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SoupPot_Level1_UpgradeCost;                              // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SoupPot_Level2_UpgradeCost;                              // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SoupPot_Level1_Upgraded;                                 // 0x05DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SoupPot_Level2_Upgraded;                                 // 0x05DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OatmealPot_Level1_Upgraded;                              // 0x05DE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OatmealPot_Level2_Upgraded;                              // 0x05DF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    OatmealPot_Level1_UpgradeCost;                           // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OatmealPot_Level2_UpgradeCost;                           // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Upgrades_Toggle;                                         // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XA6M[0x7];                                   // 0x05E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFirstPersonCharacter_C*                             FirstPerson;                                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DeliveryBay_Peasants_C*                          DeliveryBay_Peasants;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_Upgrade_Order_Peasants>              UpgradesOrder;                                           // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAudioComponent*                                     LevelMusic;                                              // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KitchenDecorationsValue;                                 // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Bread_Orders;                                  // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Bread_Orders_Money;                            // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders;                                  // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders_Money;                            // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Oatmeal_Orders;                                // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Oatmeal_Orders_Money;                          // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Soup_Orders;                                   // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Soup_Orders_Money;                             // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Plate_Orders;                                  // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Plate_Orders_Money;                            // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Bread_Orders;                            // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Drink_Orders;                            // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Plate_Orders;                            // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Oatmeal_Orders;                          // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Soup_Orders;                             // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage1;                                    // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage2;                                    // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage3;                                    // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage4;                                    // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage5;                                    // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage6;                                    // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_Upgrade_Order_Peasants>              UpgradesPeasants;                                        // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    KitchenDecorations1_UpgradeCost;                         // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KitchenDecorations2_UpgradeCost;                         // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KitchenDecorations1_Upgraded;                            // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations2_Upgraded;                            // 0x0689(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LR7K[0x2];                                   // 0x068A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Upgrade_Level_Stage7;                                    // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage8;                                    // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IGYW[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Kitchen_Peasants_C*                              Kitchen_BP;                                              // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Show_Upgrades_Tutorial;                                  // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O3IP[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Upgrades_Peasants_C*                             Upgrades_BP;                                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Guarantee_Bird;                                          // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Guarantee_Knight;                                        // 0x06B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMBO[0x6];                                   // 0x06B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_EndOfStage_Peasants_C*                           EndOfStage_Ref;                                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOvenSpawnPoint_C*                                   OvenSpawnPoint_Ref;                                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupPotSpawnPoint_C*                                SoupPotSpawnPoint_Ref;                                   // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOatmealPotSpawnPoint_C*                             OatmealPotSpawnPoint_Ref;                                // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AUpgradedGrillSpawnPoint_C*                          UpgradedGrillSpawnPoint_Ref;                             // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGrillSpawnPoint_C*                                  GrillSpawnPoint_Ref;                                     // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOatmealContainerSpawnPoint_C*                       OatmealSpawnPoint_Ref;                                   // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAleBarrelSpawnPoint_C*                              AleSpawnPoint_Ref;                                       // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AForkSpawnPoint_C*                                   ForkSpawnPoint_Ref;                                      // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient1SpawnPoint_C*                        SoupIngredient1SpawnPoint_Ref;                           // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient2SpawnPoint_C*                        SoupIngredient2SpawnPoint_Ref;                           // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient3SpawnPoint_C*                        SoupIngredient3SpawnPoint_Ref;                           // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASoupIngredient4SpawnPoint_C*                        SoupIngredient4SpawnPoint_Ref;                           // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoughContainterSpawnPoint_C*                        DoughSpawnPoint_Ref;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlourSpawnPoint_C*                                  FlourSpawnPoint_Ref;                                     // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACheeseSpawnPoint_C*                                 CheeseSpawnPoint_Ref;                                    // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABowlsSpawnPoint_C*                                  BowlsSpawnPoint_Ref;                                     // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APottageHooks_SpawnPoint_C*                          PottageHooksSpawnPoint_Ref;                              // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APottage_Pea_SpawnPoint_C*                           PeaPottageSpawnPoint_Ref;                                // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APottage_Bean_SpawnPoint_C*                          BeanPottageSpawnPoint_Ref;                               // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Dough_C*                                 Dough_Ref;                                               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Flour_C*                                 Flour_Ref;                                               // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Dough_Bowl_C*                                    DoughBowl_Ref;                                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Cheese_C*                                Cheese_Ref;                                              // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Plate_C*                                 Bowls_Ref;                                               // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pottage_C*                                       PeaPottage_Ref;                                          // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pottage_C*                                       BeanPottage_Ref;                                         // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Porridge_Tutorial_C*        Porridge_StoryEvent;                                     // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Cheese_And_Bird_Tutorial_C* Cheese_StoryEvent;                                       // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Soup_Tutorial_And_Antagonist_C* Soup_StoryEvent;                                         // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Pottage_And_Knight_Tutorial_C* PeaPottage_StoryEvent;                                   // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Ale_Tutorial_C*             Ale_StoryEvent;                                          // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Soup_Ingredients_C*         Soup2_StoryEvent;                                        // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Bean_Pottage_C*                      BeanPottage_StoryEvent;                                  // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Upgrades_Store_C*                    UpgradeTutorial_StoryEvent;                              // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Peasants_Stage_Start_C*              PeasantStageStart_StoryEvent;                            // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref);
		void SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref);
		void CheckAchievements(bool* AchievementUnlocked);
		void CheckUpgradeLevel(bool* UnlockedLevel);
		void CheckStoryLevel(bool* ShowStoryPoint);
		void CheckStoryLevel_Peasants(bool* ShowStoryPoint);
		void UpdateUpgradesStats();
		void SetupLevel_Peasants();
		void Setup_BonusCustomer_Peasants();
		void Setup_Bird_Peasants();
		void SetupLoopStart_Peasants(bool StoryPoint);
		void ResetValues_Peasants();
		void CheckForNewUpgrades(bool* NewUpgrades);
		void LoadGame_Peasants();
		void SaveGame_Peasants();
		void SetupReferences_Peasants();
		void CheckUpgradeLevel_Peasants(bool* UnlockedLevel);
		void CheckAchievements_Peasants(bool* AchievementUnlocked);
		void CollectStats_Peasants();
		void UpdateUpgradesArray_Peasants();
		void RemoveEquipment_Peasants();
		void UserConstructionScript();
		void UnlockOatmeal();
		void UnlockCheese();
		void UnlockSoup();
		void UnlockPottage();
		void UpgradeDough();
		void UnlockAle();
		void UpgradeOven1();
		void UpgradeGrill1();
		void UpgradeSoupPot1();
		void UpgradeOatmealPot1();
		void UnlockSoup2();
		void UnlockPottage2();
		void UpgradeOven2();
		void UpgradeOatmealPot2();
		void UpgradeGrill2();
		void UpgradeSoupPot2();
		void UpgradeKitchenDecorations1();
		void UpgradeKitchenDecorations2();
		void EndStartOfGame_Story();
		void PlayStoryPoints(Enum_Upgrade_Levels_Peasants UpgradeLevel);
		void EndStoryPoint(Enum_Upgrade_Levels_Peasants UpgradeLevel);
		void BeginPeasants();
		void EndUpgradeShopTutorial();
		void StartReferences();
		void SetupNewGameKitchen();
		void SpawnStageStartStoryPoint();
		void SetupLevel();
		void UpdateUpgradesArray();
		void SetupLoopStart(bool Story);
		void ResetValues();
		void StartGameSystems();
		void StopGameSystems();
		void Setup_Bird();
		void Setup_BonusCustomer();
		void GeneratePseudoTime();
		void ResetDeliveryBay(bool Active);
		void OpenCurtain();
		void SpawnEndOfStageEvent();
		void CollectStats();
		void CloseCurtain();
		void RemoveEquipment();
		void DestroyEndOfStageEvent();
		void DestroyDeliveryBay();
		void SetupBossKitchen();
		void SetupReferences();
		void CompleteUpgradeOrder();
		void SaveGame();
		void LoadGame();
		void SpawnEndOfLoopStats();
		void SpawnBird();
		void ExecuteUbergraph_BP_LoopManager_Peasants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
