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
	 * BlueprintGeneratedClass BP_Order_Manager_Nobles.BP_Order_Manager_Nobles_C
	 * Size -> 0x0108 (FullSize[0x05B0] - InheritedSize[0x04A8])
	 */
	class ABP_Order_Manager_Nobles_C : public ABP_OrderManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_LoopManager_Nobles_C*                            LoopManager_Nobles;                                      // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                PreviousSkewerIngredient;                                // 0x04B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousDrink;                                           // 0x04D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Wine_Upgrade;                                            // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTD8[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DeliveryBay_Nobles_C*                            DeliveryBay_Nobles;                                      // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreviousPieIngredient;                                   // 0x04F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Seasoning_Level1;                                        // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Seasoning_Level2;                                        // 0x0511(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4QE8[0x6];                                   // 0x0512(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PreviousStewMain;                                        // 0x0518(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousStewVegetable;                                   // 0x0530(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NumberOfMealOrders;                                      // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfStewOrders;                                      // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfStewOrders;                                   // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfMealOrders;                                   // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pie_Upgraded;                                            // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stew_Upgraded;                                           // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Fish_Upgraded;                                           // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKN5[0x1];                                   // 0x055B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OrderValue_Bread;                                        // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_CheeseBread;                                  // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_WaterDrink;                                   // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_AleDrink;                                     // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_WineDrink;                                    // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Skewer;                                       // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Skewer_Salt;                                  // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Skewer_Spices;                                // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Pie;                                          // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Stew;                                         // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousMeal;                                            // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Bread;                                        // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Drinks;                                       // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Skewer;                                       // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Pies;                                         // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Stews;                                        // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87MS[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_OrderWeights>                        OrderWeights;                                            // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer);
		void SetupOrder(const class FString& OrderString, int32_t* OrderValue);
		void SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex);
		void GetOrderString(class FString* Order);
		void GetOrderString_Nobles(class FString* Order);
		void GetMeal();
		void GetStewIngredients(TArray<class FText>* StewOrder);
		void GetPieIngredients(class FText* Pie);
		void GetSkewerIngredients(TArray<class FText>* Skewer);
		void GetDrink(class FText* Drink);
		void GetBread(class FText* BreadType);
		void UserConstructionScript();
		void ClearStats();
		void UnlockPie();
		void UnlockWine();
		void UnlockStew();
		void UnlockSeasoningLevel1();
		void UnlockFish();
		void UnlockSeasoningLevel2();
		void SpawnOrders();
		void IncreaseOrderDifficulty(int32_t Level);
		void GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer);
		void SetCustomerWidget(int32_t OrderIndex);
		void BonusCustomerCounter();
		void LoadGame();
		void ExecuteUbergraph_BP_Order_Manager_Nobles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
