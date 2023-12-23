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
	 * BlueprintGeneratedClass BP_5Minute_Royals.BP_5Minute_Royals_C
	 * Size -> 0x010C (FullSize[0x0A68] - InheritedSize[0x095C])
	 */
	class ABP_5Minute_Royals_C : public ABP_5Minute_C
	{
	public:
		unsigned char                                              UnknownData_AL2S[0x4];                                   // 0x095C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0960(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       DeliveryBay3Collision_Platter;                           // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       DeliveryBay2Collision_Platter;                           // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       DeliveryBay1Collision_Platter;                           // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      ComboTimerRoyals_Timeline_Time_8BFDCC7D44567CE6E1D43CA9B4C85C3F; // 0x0980(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ComboTimerRoyals_Timeline__Direction_8BFDCC7D44567CE6E1D43CA9B4C85C3F; // 0x0984(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_42XX[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ComboTimerRoyals_Timeline;                               // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LevelMusic;                                              // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfCakeOrders;                                      // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfCakeOrders;                                   // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Jug;                                          // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Cake;                                         // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Platter;                                      // 0x09A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Pie;                                          // 0x09AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreviousPieIngredient;                                   // 0x09B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NumberOfPlatterOrders;                                   // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfPlatterOrders;                                // 0x09CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderValue_Fruits;                                       // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CE9K[0x4];                                   // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PreviousFruitsMain;                                      // 0x09D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousCakeTopping;                                     // 0x09F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PreviousPlatterMain;                                     // 0x0A08(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_Kitchen_Royals_C*                                Kitchen_Ref;                                             // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish1SpawnPoint_C*                               PieDish1SpawnPoint_Ref;                                  // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APieDish2SpawnPoint_C*                               PieDish2SpawnPoint_Ref;                                  // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterPlateSpawnPoint_C*                           PlatterPlateSpawnPoint_Ref;                              // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterVegetablesSpawnPoint_C*                      PlatterVegetablesSpawnPoint_Ref;                         // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DecorationRack_SpawnPoint_C*                     DecorationsRackSpawnPoint_Ref;                           // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration1SpawnPoint_C*                     PlatterDecoration1SpawnPoint_Ref;                        // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration2SpawnPoint_C*                     PlatterDecoration2SpawnPoint_Ref;                        // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlatterDecoration3SpawnPoint_C*                     PlatterDecoration3SpawnPoint_Ref;                        // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnLoopSelectionMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, class ABP_InLoop_Selection_Menu_C** Ref);
		void SpawnLoopMenu(bool CanBeGrabbed, const struct FTransform& Transform, Enum_Loop_Menu_Options Options, class ABP_Loop_Menu_Choice_Option_C** MenuRef);
		void SpawnCustomer(class ACustomerSpawnPoint_C* SplineRef, int32_t CustomerNumber, const struct FStruct_Order& Order, Enum_Game_Stages GameStage, bool Bonus, class ABP_Customer_C** Customer);
		void CheckOrderSimple(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CorrectOrder, TArray<struct FStruct_Order>* Orders, bool* OrderCorrect, bool* MealPartCorrect);
		void CheckMeal(class ABP_Dish_C* CurrentOrder, const struct FStruct_Order& CheckOrder, const class FText& OrderDrink, int32_t OrderIndex, Enum_Dish_Types DishTag, bool* OrderCorrect, bool* MealPartCorrect);
		void CheckPlatterOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckCakeOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckFruitOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void GetOrderRoyalsStage(class FString* Order);
		void GetMeal();
		void GetPieIngredients(bool NoApple, bool MainDish);
		void GetCakeIngredients(bool MainDish);
		void GetPlatterIngredients(bool MainDish);
		void GetDrink();
		void GetFruits(bool MainDish);
		void UserConstructionScript();
		void ComboTimerRoyals_Timeline__FinishedFunc();
		void ComboTimerRoyals_Timeline__UpdateFunc();
		void HideDeliveryBay();
		void OpenCurtain();
		void CloseCurtain();
		void MusicTransitionPlay();
		void SetupLoopStart();
		void GenerateOrderTag();
		void ClearStats();
		void SetupCustomerUI(int32_t Index);
		void SetupOrder(const class FString& Order);
		void ComboMoneyBurstMealPart(class UStaticMeshComponent* MoneyStack);
		void SpawnCoinsWhenOrderCompleted(int32_t OrderValue, class ABP_Customer_C* Customer, class UStaticMeshComponent* CoinStack, class USceneComponent* ParticleSpawnPoint);
		void RemoveEquipment();
		void GetBonusCustomerValueAndTimer(const struct FStruct_Order& Order, class ABP_Customer_C* Customer);
		void BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BndEvt__DeliveryBay2Collision_Platter_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BndEvt__DeliveryBay3Collision_Platter_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void DeliveryBay2_Throw(class AActor* Actor);
		void DeliveryBay2_HandIn(class AActor* Actor);
		void ComboTimerActive();
		void SpawnEndUI();
		void SetupLoopPanel();
		void SetupCoinChest();
		void SpawnBird();
		void CreateComboUI();
		void SpawnKeyboard();
		void ExecuteUbergraph_BP_5Minute_Royals(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
