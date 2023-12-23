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
	 * BlueprintGeneratedClass BP_DeliveryBay_Nobles.BP_DeliveryBay_Nobles_C
	 * Size -> 0x0018 (FullSize[0x0638] - InheritedSize[0x0620])
	 */
	class ABP_DeliveryBay_Nobles_C : public ABP_DeliveryBay_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Order_Manager_Nobles_C*                          OrderManager_Nobles;                                     // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_LoopManager_Nobles_C*                            LoopManager_Nobles;                                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetCustomers(TArray<class ABP_Customer_C*>* customers);
		void MealDelivered(const struct FStruct_Order& Order, class ABP_Customer_C* Customer, int32_t Index, bool Main, bool* OrderCorrect, bool* MealPartCorrect);
		void GetRushHourVariables(bool* LoopTimeOut, bool* RushMode, float* RushHourMultiplier, int32_t* RushHourBonus);
		void GetOrderManager_Orders(TArray<struct FStruct_Order>* Orders);
		void GetIndividualCustomer(int32_t OrderIndex, class ABP_Customer_C** customers);
		void OrderCorrectWorkoutMoney(int32_t OrderValue, Enum_Customer_Satisfaction CustomerSatisfaction, bool BonusCustomer, int32_t* UpdatedOrderValue);
		void CheckOrderSimple(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CorrectOrder, TArray<struct FStruct_Order>* Orders, bool* OrderCorrect, bool* MealPartCorrect);
		void CheckFoodBurnt(int32_t OrderValue, int32_t* OrderNewValue, bool* Burnt);
		void CheckNotEmptySkewer(class ABP_Dish_C* Dish, bool* EmptySkewer);
		void CheckStewOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckSkewer(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckMeal(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CheckOrder, int32_t OrderIndex, Enum_Dish_Types DishTag, bool* OrderCorrect, bool* MealPartCorrect);
		void UserConstructionScript();
		void CheckFreeSample(class AActor* Actor, int32_t BayNumber);
		void AcceptOrder(const struct FStruct_Order& Order, int32_t OrderIndex, bool Burnt);
		void SpawnCoinsWhenOrderCompleted(int32_t OrderValue, class ABP_Customer_C* Customer, class UStaticMeshComponent* CoinStack, class USceneComponent* ParticleSpawnPoint);
		void ConsecutiveFastOrders(float OriginalTime, float DeliveryTime);
		void SetRushHour(int32_t Value);
		void ReceiveBeginPlay();
		void CustomerSatisfaction(Enum_Customer_Satisfaction Satisfaction);
		void ExecuteUbergraph_BP_DeliveryBay_Nobles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
