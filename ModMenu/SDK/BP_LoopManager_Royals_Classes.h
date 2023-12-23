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
	 * BlueprintGeneratedClass BP_LoopManager_Royals.BP_LoopManager_Royals_C
	 * Size -> 0x0280 (FullSize[0x0820] - InheritedSize[0x05A0])
	 */
	class ABP_LoopManager_Royals_C : public ABP_LoopManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Oven_Upgraded;                                           // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MP50[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Oven_UpgradeCost;                                        // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Upgrades_Toggle;                                         // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4S4W[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFirstPersonCharacter_C*                             FirstPerson;                                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_Upgrade_Order_Royals>                UpgradesOrder;                                           // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAudioComponent*                                     LevelMusic;                                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DrinkTaps_Upgraded;                                      // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I93S[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PieDish_UpgradeCost;                                     // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PieDish_Upgraded;                                        // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTSD[0x3];                                   // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DrinkTaps_UpgradeCost;                                   // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders_Money;                            // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Pie_Orders_Money;                              // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage1;                                    // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage2;                                    // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage3;                                    // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage4;                                    // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_Stage5;                                    // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XYDN[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DeliveryBay_Royals_C*                            DeliveryBay_Royals;                                      // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Order_Manager_Royals_C*                          OrderManager_Royals;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Fruits_Orders_Money;                           // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Cake_Orders_Money;                             // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Platter_Orders_Money;                          // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Fruits_Level1_Upgraded;                                  // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Chocolate_Upgraded;                                      // 0x0625(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Cake_Lid_Upgraded;                                       // 0x0626(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Cake_Upgraded;                                           // 0x0627(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MeatStation_Upgraded;                                    // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Platters_Upgraded;                                       // 0x0629(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Lobster_Upgraded;                                        // 0x062A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ER5G[0x1];                                   // 0x062B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Fruits_UpgradeCost;                                      // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Cake_Lid_UpgradeCost;                                    // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MeatStation_UpgradeCost;                                 // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Pie_Orders;                                    // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Fruits_Orders;                                 // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Cakes_Orders;                                  // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Platter_Orders;                                // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Drink_Orders;                                  // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Pie_Orders;                              // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Fruit_Orders;                            // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Cake_Orders;                             // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Platter_Orders;                          // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Drink_Orders;                            // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KitchenDecorations1_Upgraded;                            // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P5YM[0x3];                                   // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KitchenDecorations1_UpgradeCost;                         // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KitchenDecorations_Value;                                // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RushHourBonus_Upgraded;                                  // 0x066C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V2KQ[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RushHourBonus_UpgradeCost;                               // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BonusFrequencyPatience_Upgraded;                         // 0x0674(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_319Y[0x3];                                   // 0x0675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BonusFrequencyPatience_UpgradeCost;                      // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KitchenDecorations2_Upgraded;                            // 0x067C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7Q6Y[0x3];                                   // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KitchenDecorations2_UpgradeCost;                         // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FreeSample_Full_Upgraded;                                // 0x0684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JXYP[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FreeSample_UpgradeCost;                                  // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BonusValuePatience_Upgraded;                             // 0x068C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GG1[0x3];                                   // 0x068D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BonusValuePatience_UpgradeCost;                          // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BonusValuePatience_Value;                                // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_Upgrade_Order_Royals>                UpgradesRoyals;                                          // 0x0698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       FreeSample_Half_Upgraded;                                // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GGBV[0x7];                                   // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Kitchen_Royals_C*                                Kitchen_BP;                                              // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_EndOfStage_Royals_C*                             EndOfStage_Ref;                                          // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOvenSpawnPoint_C*                                   OvenSpawnPoint_Ref;                                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADrinkTapsSpawnPoint_C*                              DrinkTapsSpawnPoint_Ref;                                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AKnifeSpawnPoint_C*                                  KnifeSpawnPoint_Ref;                                     // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChopMeatSpawnPoint_C*                               ChopMeatSpawnPoint_Ref;                                  // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChopFishSpawnPoint_C*                               ChopFishSpawnPoint_Ref;                                  // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterMeatRotisserieSpawnPoint_C*                  RotisserieSpawnPoint_Ref;                                // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACakePanSpawnPoint_C*                                CakePanSpawnPoint_Ref;                                   // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEggsSpawnPoint_C*                                   EggSpawnPoint_Ref;                                       // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlourSpawnPoint_C*                                  FlourSpawnPoint_Ref;                                     // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHoneySpawnPoint_C*                                  HoneySpawnPoint_Ref;                                     // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ANutsSpawnPoint_C*                                   NutsSpawnPoint_Ref;                                      // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChocolateSpawnPoint_C*                              ChocolateSpawnPoint_Ref;                                 // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AApplesSpawnPoint_C*                                 ApplesSpawnPoint_Ref;                                    // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABerriesSpawnPoint_C*                                BerriesSpawnPoint_Ref;                                   // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWaterTapSpawnPoint_C*                               WaterTapSpawnPoint_Ref;                                  // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFruitBowlSpawnPoint_C*                              BowlsSpawnPoint_Ref;                                     // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish1SpawnPoint_C*                               PieDish1SpawnPoint_Ref;                                  // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Dish_C*                                      PieDish1_Ref;                                            // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish2SpawnPoint_C*                               PieDish2SpawnPoint_Ref;                                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Dish_C*                                      PieDish2_Ref;                                            // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Pie_Dish_Decoration_C*                           PieDecorations_Ref;                                      // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoughContainterSpawnPoint_C*                        DoughSpawnPoint_Ref;                                     // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Dough_C*                                 Dough_Ref;                                               // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Dough_Rack_C*                                    DoughRack_Ref;                                           // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterPlateSpawnPoint_C*                           PlatterSpawnPoint_Ref;                                   // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Platter_C*                               Platter_Ref;                                             // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterVegetablesSpawnPoint_C*                      PlatterVegetablesSpawnPoint_Ref;                         // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Spawner_Vegetables_C*                            PlatterVegetables_Ref;                                   // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DecorationRack_SpawnPoint_C*                     DecoractionRackSpawnPoint_Ref;                           // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DecorationRack_C*                                DecorationRack_Ref;                                      // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration1SpawnPoint_C*                     PlatterDecoration1SpawnPoint_Ref;                        // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Platter_Decoration_Shaker_C*                     PlatterDecoration1_Ref;                                  // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration2SpawnPoint_C*                     PlatterDecoration2SpawnPoint_Ref;                        // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Platter_Decoration_Shaker_C*                     PlatterDecoration2_Ref;                                  // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration3SpawnPoint_C*                     PlatterDecoration3SpawnPoint_Ref;                        // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Platter_Decoration_Shaker_C*                     PlatterDecoration3_Ref;                                  // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASweetSpawnPoint_C*                                  FreeSampleSpawnPoint_Ref;                                // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Platters_Tutorial_C*          Platters_StoryEvent;                                     // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Cake_Tutorial_C*              Cake_StoryEvent;                                         // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Chocolate_Tutorial_C*         Chocolate_StoryEvent;                                    // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Lobster_Tutorial_C*           Lobster_StoryEvent;                                      // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterMeatSpawnPoint_C*                            PlatterMeatSpawnPoint_Ref;                               // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Stage_Start_C*                RoyalsStageStart_StoryEvent;                             // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Story_Event_Royals_Sweets_Tutorial_C*            FreeSampleTutorial_Ref;                                  // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref);
		void SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref);
		void CheckStoryLevel(bool* ShowStoryPoint);
		void CheckStoryLevel_Royals(bool* ShowStoryPoint);
		void SetupLevel_Royals();
		void SetupBonusCustomer_Royals();
		void SetupBird_Royals();
		void ResetValues_Royals();
		void SetupLoopStart_Royals(bool StoryPoint);
		void LoadGame_Royals();
		void SaveGame_Royals();
		void CollectStats_Royals();
		void CheckUpgradeLevel(bool* UnlockedLevel);
		void CheckUpgradeLevel_Royals(bool* UnlockedLevel);
		void UpdateUpgradesArray_Royals();
		void CheckAchievements(bool* AchievementUnlocked);
		void CheckAchievements_Royals(bool* AchievementUnlocked);
		void RemoveEquipment_Royals();
		void CheckForNewUpgrades(bool* Return);
		void SetupReferences_Royals();
		void UpdateSaveEvents(Enum_Upgrade_Levels_Royals UpgradeLevel);
		void UpdateUpgradesStats();
		void UserConstructionScript();
		void StopGameSystems();
		void StartGameSystems();
		void EndStartOfGame_Story();
		void PlayStoryPoints(Enum_Upgrade_Levels_Royals UpgradeLevel);
		void EndStoryPoint(Enum_Upgrade_Levels_Royals UpgradeLevel);
		void BeginRoyals();
		void SpawnFreeSampleTutorial();
		void EndFreeSampleTutorial();
		void SetupNewGameKitchen();
		void SpawnStageStartStoryPoint();
		void StartReferences();
		void SetupReferences();
		void SpawnEndOfStageEvent();
		void OpenCurtain();
		void ResetDeliveryBay(bool Active);
		void CloseCurtain();
		void DestroyEndOfStageEvent();
		void DestroyDeliveryBay();
		void SetupBossKitchen();
		void CompleteUpgradeOrder();
		void UpgradeOven1();
		void UpgradePieDish();
		void UpgradeDrinkBarrels();
		void UnlockCake();
		void UnlockPlatters();
		void UnlockChocolate();
		void UnlockLobster();
		void UpgradeCleanFruits();
		void UpgradeMeatStation1();
		void UpgradeCakeLid();
		void UpgradeKitchenDecorations1();
		void UpgradeRushHourBonus();
		void UpgradeBonusFrequencyPatience();
		void UpgradeKitchenDecorations2();
		void UpgradeBonusValuePatience();
		void UpgradeFreeSamples();
		void RemoveEquipment();
		void UpdateUpgradesArray();
		void CollectStats();
		void SaveGame();
		void LoadGame();
		void SetupLoopStart(bool Story);
		void ResetValues();
		void Setup_Bird();
		void Setup_BonusCustomer();
		void SetupLevel();
		void GeneratePseudoTime();
		void SpawnEndOfLoopStats();
		void SpawnBird();
		void ExecuteUbergraph_BP_LoopManager_Royals(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
