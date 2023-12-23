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
	 * BlueprintGeneratedClass BP_Upgrade_Glass.BP_Upgrade_Glass_C
	 * Size -> 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
	 */
	class ABP_Upgrade_Glass_C : public AStaticMeshActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ReturnGlass_Timeline_Alpha_C98AB7E048A32A8C894B4FA9775052AD; // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ReturnGlass_Timeline__Direction_C98AB7E048A32A8C894B4FA9775052AD; // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4FM2[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ReturnGlass_Timeline;                                    // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RaiseGlass_Timeline_Alpha_0006017B40A75FA4A4434CB265B581C1; // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RaiseGlass_Timeline__Direction_0006017B40A75FA4A4434CB265B581C1; // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_31S6[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RaiseGlass_Timeline;                                     // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void RaiseGlass_Timeline__FinishedFunc();
		void RaiseGlass_Timeline__UpdateFunc();
		void ReturnGlass_Timeline__FinishedFunc();
		void ReturnGlass_Timeline__UpdateFunc();
		void RaiseUpgradeGlass();
		void ReturnUpgradeGlass();
		void StopRaiseGlass();
		void StopReturnGlass();
		void ExecuteUbergraph_BP_Upgrade_Glass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
