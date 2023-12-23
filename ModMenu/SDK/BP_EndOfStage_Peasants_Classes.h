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
	 * BlueprintGeneratedClass BP_EndOfStage_Peasants.BP_EndOfStage_Peasants_C
	 * Size -> 0x004F (FullSize[0x0640] - InheritedSize[0x05F1])
	 */
	class ABP_EndOfStage_Peasants_C : public ABP_EndOfStage_C
	{
	public:
		unsigned char                                              UnknownData_5F5O[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_LoopManager_Peasants_C*                          LoopManager_Peasants;                                    // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                PreviousDrink;                                           // 0x0608(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_OrderManager_Peasants_C*                         OrderManager_Peasants;                                   // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UWidget_EndOfStage_Peasants_C*                       WidgetRef;                                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Temp_Select_Anim;                                        // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void CheckNumberOfTries(int32_t* TimeAdded);
		void CheckOrder(class ABP_Dish_C* CurrentOrder, const struct FStruct_EndOfStage_Order& CompareTo, bool* OrderCorrect);
		void CheckSoup(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckPlate(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void GetDrink(class FText* Drink);
		void UserConstructionScript();
		void InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key);
		void SetupMusicDuration();
		void ResetEvent();
		void WidgetDisplaySuccess();
		void EventEnd();
		void MusicTransitionStory();
		void EventFailedSetupWidgets(int32_t Condition);
		void SetupRoundOrders(int32_t Round);
		void SetNumberOfTries();
		void MusicTransitionPlay();
		void RoundCompleteWidget();
		void DisplayGreetingWidget();
		void DisplayCheckpointWidget();
		void GetOrder(const class FString& Order);
		void CleanUpLevel();
		void SetupLevel();
		void Construction();
		void BossEndAnimateEnter();
		void BossEndAnimateLeave();
		void ClementineEndAnimateEnter();
		void EventFailedPlayAnimation(int32_t Condtiion);
		void MusicTransitionStop();
		void OrderDeliveredAnimation();
		void CustomerImpatient(int32_t Level);
		void ExecuteUbergraph_BP_EndOfStage_Peasants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
