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
	 * BlueprintGeneratedClass BP_OrderManager.BP_OrderManager_C
	 * Size -> 0x0180 (FullSize[0x04A8] - InheritedSize[0x0328])
	 */
	class ABP_OrderManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene;                                                   // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfOrders;                                       // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentNumberOfOrders;                                   // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderDifficultyLevel;                                    // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7PEO[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OrderTag;                                                // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        MainOrderIngredients;                                    // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumberOfActiveOrders;                                    // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UKUV[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PreviousOrderTag;                                        // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    OrderWeightsMax;                                         // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderWeightsRandom;                                      // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStruct_Order                                       Order;                                                   // 0x0398(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FStruct_Order>                               Orders;                                                  // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    OrderValue;                                              // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HHQ1[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OrderDrink;                                              // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class ABP_Customer_C*>                              customers;                                               // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UUserWidget*                                         CustomerWidget;                                          // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CustomerWaitTimeBetweenOrders_RushHour;                  // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CustomerWaitTimeBetweenOrders_Normal;                    // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLoopOrders;                                      // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BonusCustomerSpawned;                                    // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6AZ3[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        SideOrderIngredients;                                    // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      OrderTime;                                               // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Bonus_Customer_Order_Active;                             // 0x047C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZOS[0x3];                                   // 0x047D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BonusTimer;                                              // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5QY1[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ManageOrders_Timer;                                      // 0x0488(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		Enum_Game_Stages                                           GameStage;                                               // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2WMJ[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValueMultiplier;                                         // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ACustomerSpawnPoint_C*>                       CustomerSpawnPoints;                                     // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void SetupCustomerSpawnPoints();
		void SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer);
		void SetOrderInDeliveryBay(const struct FStruct_Order& Order, int32_t* OrderIndex);
		void SetupOrder(const class FString& OrderString, int32_t* OrderValue);
		void SetCustomerWidget(int32_t OrderIndex);
		void LoadGame();
		void GetBonusCustomerValueAndTime(const struct FStruct_Order& Order, class ABP_Customer_C* Customer);
		void SetOrderActive(int32_t OrderIndex);
		void GetCustumerSpawnPoint(class ACustomerSpawnPoint_C** SpawnPoint, int32_t* CustomerNumber);
		void GetOrderString(class FString* Order);
		void GenerateOrderTagWeighted(TArray<struct FStruct_OrderWeights>* OrderWeights, class FText* OrderTag);
		void UserConstructionScript();
		void GenerateOrderTag();
		void GenerateOrder(const class FString& Order);
		void ClearStats();
		void ManageOrders();
		void ReceiveBeginPlay();
		void StartOrders();
		void StopOrders();
		void SpawnOrders();
		void IncreaseOrderDifficulty(int32_t Level);
		void BonusCustomerCounter();
		void ExecuteUbergraph_BP_OrderManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
