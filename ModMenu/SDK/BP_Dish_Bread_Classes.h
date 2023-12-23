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
	 * BlueprintGeneratedClass BP_Dish_Bread.BP_Dish_Bread_C
	 * Size -> 0x0038 (FullSize[0x04F8] - InheritedSize[0x04C0])
	 */
	class ABP_Dish_Bread_C : public ABP_Dish_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      NoblesBakingTimeline_Value_DCD96BAB4BE61562219593A3447AC570; // 0x04C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         NoblesBakingTimeline__Direction_DCD96BAB4BE61562219593A3447AC570; // 0x04CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VHDS[0x3];                                   // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  NoblesBakingTimeline;                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PositionTimeline_Position_7527C35E4B0B0EE88C95558052602D9A; // 0x04D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         PositionTimeline__Direction_7527C35E4B0B0EE88C95558052602D9A; // 0x04DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9RZS[0x3];                                   // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PositionTimeline;                                        // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BakingTimeline_Value_AD495DCE4286F606BFB3EBB9B44DEC0A;   // 0x04E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BakingTimeline__Direction_AD495DCE4286F606BFB3EBB9B44DEC0A; // 0x04EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_42JD[0x3];                                   // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BakingTimeline;                                          // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SwapToCookedMesh();
		void SetCheeseBreadProperties();
		void UserConstructionScript();
		void BakingTimeline__FinishedFunc();
		void BakingTimeline__UpdateFunc();
		void PositionTimeline__FinishedFunc();
		void PositionTimeline__UpdateFunc();
		void NoblesBakingTimeline__FinishedFunc();
		void NoblesBakingTimeline__UpdateFunc();
		void NoblesBakingTimeline__BakerNotify__EventFunc();
		void BakeBread(float Speed, class UArrowComponent* StartPos, class UArrowComponent* EndPos, class UMaterialInstanceDynamic* ProgressBarMaterial, float BarMaxAlphaValue, class ABP_Oven_C* OvenRef);
		void ReceiveBeginPlay();
		void BakeBreadNobles(float Speed, class UMaterialInstanceDynamic* ProgressBarMaterial, float BarMaxAlphaValue, class UArrowComponent* EndPos);
		void ExecuteUbergraph_BP_Dish_Bread(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
