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
	 * BlueprintGeneratedClass BP_EndOfStage_Royals.BP_EndOfStage_Royals_C
	 * Size -> 0x015F (FullSize[0x0750] - InheritedSize[0x05F1])
	 */
	class ABP_EndOfStage_Royals_C : public ABP_EndOfStage_C
	{
	public:
		unsigned char                                              UnknownData_V3MX[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     QueenVoice;                                              // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    QueenSpline2;                                            // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    KingSpline2;                                             // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     QueenStartPoint;                                         // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     KingStartPoint;                                          // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    QueenSpline;                                             // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    KingSpline;                                              // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LoadingBar;                                              // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              QueenBody;                                               // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     QueenSoundSource;                                        // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     QueenCharacter;                                          // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_Royals_Timeline_Time_D2F7914F4C214B13B3C71595E93BFCFE; // 0x0658(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         OrderTimer_Royals_Timeline__Direction_D2F7914F4C214B13B3C71595E93BFCFE; // 0x065C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F2WZ[0x3];                                   // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  OrderTimer_Royals_Timeline;                              // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QueenTimeline2_Speed_FF6408BC4037F36259B873B98DF04FB7;   // 0x0668(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         QueenTimeline2__Direction_FF6408BC4037F36259B873B98DF04FB7; // 0x066C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IUN2[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  QueenTimeline2;                                          // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QueenTimeline_Speed_0F4321EA4A71567D677700A4E4F28794;    // 0x0678(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         QueenTimeline__Direction_0F4321EA4A71567D677700A4E4F28794; // 0x067C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LSPM[0x3];                                   // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  QueenTimeline;                                           // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KingTimeline2_Speed_513A17AC4A5D3929A936FFB4622D58B0;    // 0x0688(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         KingTimeline2__Direction_513A17AC4A5D3929A936FFB4622D58B0; // 0x068C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1DWV[0x3];                                   // 0x068D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  KingTimeline2;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KingTimeline_Speed_0212CF7B46C8768D0453EEA583EA3520;     // 0x0698(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         KingTimeline__Direction_0212CF7B46C8768D0453EEA583EA3520; // 0x069C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HAQ9[0x3];                                   // 0x069D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  KingTimeline;                                            // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightEnterTimeline_Speed_C6E5FA084FD9C92AE68E0F8EA97723E7; // 0x06A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RightEnterTimeline__Direction_C6E5FA084FD9C92AE68E0F8EA97723E7; // 0x06AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XQ3I[0x3];                                   // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RightEnterTimeline;                                      // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftEnterTimeline_Speed_FBFA7F744AEEA56D3501FFAB6DDAA494; // 0x06B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         LeftEnterTimeline__Direction_FBFA7F744AEEA56D3501FFAB6DDAA494; // 0x06BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQB0[0x3];                                   // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LeftEnterTimeline;                                       // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Timer_7438A2514B595268EC44059595E24B57;       // 0x06C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_7438A2514B595268EC44059595E24B57;  // 0x06CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WBL4[0x3];                                   // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Queen_Eye_Material;                                      // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Queen_Mouth_Material;                                    // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            LoadingBarMaterial;                                      // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Royals_C*                            LoopManager_Royals;                                      // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UWidget_EndOfStage_Royals_C*                         WidgetRef;                                               // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Clementine_Active;                                       // 0x0700(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       Sweets_Ring1;                                            // 0x0701(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sweets_Ring2;                                            // 0x0702(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sweets_Ring3;                                            // 0x0703(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADNB[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAmbientSound*                                       Audio_Ref;                                               // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SweetsEvent_Active;                                      // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RQU4[0x7];                                   // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Order_Manager_Royals_C*                          OrderManager_Royals;                                     // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UAnimBP_CutScene_C*                                  QueenAnimationBP;                                        // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SweetsEvent_Timer1;                                      // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SweetsEvent_Timer2;                                      // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SweetsEvent_Triggered2;                                  // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SweetsEvent_Triggered1;                                  // 0x0731(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Checkpoint;                                              // 0x0732(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Q7C[0x5];                                   // 0x0733(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Sweet_Manager_C*                                 FreeSample_Ref;                                          // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Temp_Select_Anim;                                        // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void RemoveFreeSampleArrow();
		void SpawnFreeSample();
		void CheckOrder(class ABP_Dish_C* CurrentOrder, const struct FStruct_EndOfStage_Order& CompareTo, bool* OrderCorrect);
		void CheckPlatterOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckCakeOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckFruitOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckPieOrder(class ABP_Dish_C* CurrentOrder, TArray<class FText>* OrderIngredients, bool* CorrectOrder);
		void CheckNumberOfTries(int32_t* TimeAdded);
		void SweetsEventSetup();
		void SweetsEventWarning(float Time);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void LeftEnterTimeline__FinishedFunc();
		void LeftEnterTimeline__UpdateFunc();
		void RightEnterTimeline__FinishedFunc();
		void RightEnterTimeline__UpdateFunc();
		void KingTimeline__FinishedFunc();
		void KingTimeline__UpdateFunc();
		void QueenTimeline__FinishedFunc();
		void QueenTimeline__UpdateFunc();
		void KingTimeline2__FinishedFunc();
		void KingTimeline2__UpdateFunc();
		void QueenTimeline2__FinishedFunc();
		void QueenTimeline2__UpdateFunc();
		void OrderTimer_Royals_Timeline__FinishedFunc();
		void OrderTimer_Royals_Timeline__UpdateFunc();
		void InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key);
		void SetupMusicDuration();
		void ResetEvent();
		void MusicTransitionPlay();
		void MusicTransitionStory();
		void WidgetDisplaySuccess();
		void EventEnd();
		void EventFailedPlayAnimation(int32_t Condtiion);
		void SetupRoundOrders(int32_t Round);
		void SetNumberOfTries();
		void RoundCompleteWidget();
		void DisplayGreetingWidget();
		void DisplayCheckpointWidget();
		void SetUpRoundComplete(int32_t RoundNumber);
		void PlayEndOfGameOldLady();
		void PlaySweetsEvent();
		void SuccessSweetsEvent();
		void CheckFreeSample(class AActor* DishDelivered, bool Clementine);
		void GetOrder(const class FString& Order);
		void AnimateRoyalsLeave();
		void AnimateRoyalsEnter();
		void AnimateEnterBoss();
		void Construction();
		void CleanUpLevel();
		void SetupLevel();
		void UpdateRoyalsFace();
		void SetupAnimBPs();
		void ClementineEndAnimateEnter();
		void ClementineEndAnimateLeave();
		void EventFailedSetupWidgets(int32_t Condition);
		void BndEvt__ClementineBody_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__QueenBody_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void MusicTransitionStop();
		void StartOrderTimer();
		void StopOrderTimer();
		void OrderDeliveredAnimation();
		void CustomerImpatient(int32_t Level);
		void Talk(bool LeftCharacter, ECutsceneList TalkOverride);
		void TalkEnd();
		void ExecuteUbergraph_BP_EndOfStage_Royals(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
