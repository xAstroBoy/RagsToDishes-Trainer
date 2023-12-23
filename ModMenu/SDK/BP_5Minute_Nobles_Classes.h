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
	 * BlueprintGeneratedClass BP_5Minute_Nobles.BP_5Minute_Nobles_C
	 * Size -> 0x00CC (FullSize[0x0A28] - InheritedSize[0x095C])
	 */
	class ABP_5Minute_Nobles_C : public ABP_5Minute_C
	{
	public:
		unsigned char                                              UnknownData_BE27[0x4];                                   // 0x095C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0960(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     LevelMusic;                                              // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfStewOrders;                                      // 0x0970(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfStewOrders;                                   // 0x0974(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Bread;                                        // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_CheeseBread;                                  // 0x097C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Water;                                        // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Ale;                                          // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MealBurnt;                                               // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JZT0[0x3];                                   // 0x0989(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OrderValue_Wine;                                         // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Skewer_Spices;                                // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Skewer;                                       // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreviousSkewerIngredient;                                // 0x0998(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    OrderValue_Stew;                                         // 0x09B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Pie;                                          // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreviousPieIngredient;                                   // 0x09B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousStewMain;                                        // 0x09D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousStewVegetable;                                   // 0x09E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class ADoughContainterSpawnPoint_C*                        DoughSpawnPoint_Ref;                                     // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACheeseSpawnPoint_C*                                 CheeseSpawnPoint_Ref;                                    // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish1SpawnPoint_C*                               PieDish1SpawnPoint_Ref;                                  // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish2SpawnPoint_C*                               PieDish2SpawnPoint_Ref;                                  // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Kitchen_Nobles_C*                                Kitchen_Ref;                                             // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnLoopSelectionMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, class ABP_InLoop_Selection_Menu_C** Ref);
		void SpawnLoopMenu(bool CanBeGrabbed, const struct FTransform& Transform, Enum_Loop_Menu_Options Options, class ABP_Loop_Menu_Choice_Option_C** MenuRef);
		void SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer);
		void CheckFoodBurned(int32_t Value, int32_t* OrderNewValue, bool* Burnt);
		void CheckOrderSimple(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CorrectOrder, TArray<struct FStruct_Order>* Orders, bool* OrderCorrect, bool* MealPartCorrect);
		void CheckStewOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckSkewerOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void GetPieIngredients(class FText* Pie);
		void GetStewIngredients(TArray<class FText>* StewOrder);
		void GetSkewerIngredients(TArray<class FText>* Order);
		void CheckMeal(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CheckOrder, int32_t OrderIndex, Enum_Dish_Types DishTag, bool* OrderCorrect, bool* MealPartCorrect);
		void GetOrderNoblesStage(class FString* Order);
		void GetMeal();
		void GetDrink(class FText* Drink);
		void GetBread(class FText* BreadType);
		void UserConstructionScript();
		void SetupLoopStart();
		void GenerateOrderTag();
		void ClearStats();
		void SetupOrder(const class FString& Order);
		void SetupCustomerUI(int32_t Index);
		void GetBonusCustomerValueAndTimer(const struct FStruct_Order& Order, class ABP_Customer_C* Customer);
		void SpawnCoinsWhenOrderCompleted(int32_t OrderValue, class ABP_Customer_C* Customer, class UStaticMeshComponent* CoinStack, class USceneComponent* ParticleSpawnPoint);
		void ComboMoneyBurstMealPart(class UStaticMeshComponent* MoneyStack);
		void HideDeliveryBay();
		void OpenCurtain();
		void CloseCurtain();
		void RemoveEquipment();
		void MusicTransitionPlay();
		void SpawnEndUI();
		void SetupLoopPanel();
		void SetupCoinChest();
		void SpawnBird();
		void CreateComboUI();
		void SpawnKeyboard();
		void ExecuteUbergraph_BP_5Minute_Nobles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
