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
	 * BlueprintGeneratedClass BP_Dish_Pie.BP_Dish_Pie_C
	 * Size -> 0x0022 (FullSize[0x04E2] - InheritedSize[0x04C0])
	 */
	class ABP_Dish_Pie_C : public ABP_Dish_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                FillingMesh;                                             // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BakingTimeline_Value_36D2386442C179DF89E556878B717F8B;   // 0x04D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BakingTimeline__Direction_36D2386442C179DF89E556878B717F8B; // 0x04D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0ULM[0x3];                                   // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BakingTimeline;                                          // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FillingAdded;                                            // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SelfComplete;                                            // 0x04E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SwapToCookedMesh();
		void SetPieMesh();
		void UserConstructionScript();
		void BakingTimeline__FinishedFunc();
		void BakingTimeline__UpdateFunc();
		void BakingTimeline__BakerNotify__EventFunc();
		void ReceiveBeginPlay();
		void BndEvt__BoxCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void CompletePie();
		void BakePie(float Speed, class UMaterialInstanceDynamic* ProgressBarMaterial, float BarMaxAlphaValue, class UArrowComponent* EndPos);
		void EmptyDish();
		void ExecuteUbergraph_BP_Dish_Pie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
