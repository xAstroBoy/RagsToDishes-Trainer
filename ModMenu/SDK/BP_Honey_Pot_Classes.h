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
	 * BlueprintGeneratedClass BP_Honey_Pot.BP_Honey_Pot_C
	 * Size -> 0x001D (FullSize[0x0389] - InheritedSize[0x036C])
	 */
	class ABP_Honey_Pot_C : public ABP_Equipment_C
	{
	public:
		unsigned char                                              UnknownData_ZUKR[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     SpoonAttachPoint;                                        // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SpoonInPot;                                              // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReturnSpoon(class ABP_Serving_Spoon_C* Spoon, bool* Returned);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SpawnSpoon();
		void ExecuteUbergraph_BP_Honey_Pot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
