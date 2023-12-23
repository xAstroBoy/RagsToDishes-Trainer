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
	 * BlueprintGeneratedClass BP_Order_Manager_Royals.BP_Order_Manager_Royals_C
	 * Size -> 0x00E8 (FullSize[0x0590] - InheritedSize[0x04A8])
	 */
	class ABP_Order_Manager_Royals_C : public ABP_OrderManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                PreviousDrink;                                           // 0x04B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FStruct_OrderWeights>                        OrderWeights;                                            // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                PreviousPieIngredient;                                   // 0x04D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_LoopManager_Royals_C*                            LoopManager_Royals;                                      // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_DeliveryBay_Royals_C*                            DeliveryBay_Royals;                                      // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreviousFruitsMain;                                      // 0x0500(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousCakeTopping;                                     // 0x0518(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousPlatterMain;                                     // 0x0530(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Cake_Upgraded;                                           // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Platters_Upgraded;                                       // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Chocolate_Upgraded;                                      // 0x054A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Lobster_Upgraded;                                        // 0x054B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxNumberOfCakeOrders;                                   // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfPlatterOrders;                                // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfCakeOrders;                                      // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfPlatterOrders;                                   // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfMealOrders;                                   // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfMealOrders;                                      // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Pie;                                          // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Fruits;                                       // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Cake;                                         // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Platter;                                      // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_DrinkJug;                                     // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousMeal;                                            // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Pies;                                         // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Fruits;                                       // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Cake;                                         // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Platters;                                     // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Drinks;                                       // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer);
		void GetMeal();
		void SetupOrder(const class FString& OrderString, int32_t* OrderValue);
		void SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex);
		void GetOrderString(class FString* Order);
		void GetPlatterIngredients(TArray<class FText>* Platter);
		void GetCakeIngredients(class FText* Cake);
		void GetFruitsIngredients(TArray<class FText>* Fruits);
		void GetOrderString_Royals(class FString* Order);
		void GetDrink(class FText* Drink);
		void GetPieIngredients(bool NoApple, class FText* Pie);
		void UserConstructionScript();
		void UnlockCake();
		void UnlockPlatters();
		void UnlockChocolate();
		void UnlockLobster();
		void IncreaseOrderDifficulty(int32_t Level);
		void ClearStats();
		void SpawnOrders();
		void SetCustomerWidget(int32_t OrderIndex);
		void BonusCustomerCounter();
		void LoadGame();
		void GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer);
		void ExecuteUbergraph_BP_Order_Manager_Royals(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
