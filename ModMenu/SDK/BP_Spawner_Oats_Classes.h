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
	 * BlueprintGeneratedClass BP_Spawner_Oats.BP_Spawner_Oats_C
	 * Size -> 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
	 */
	class ABP_Spawner_Oats_C : public ABP_Object_Spawner_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SpawnAndAttachObject(class AActor** ObjectRef);
		void UserConstructionScript();
		void SpawnObjectAtSpawner();
		void ExecuteUbergraph_BP_Spawner_Oats(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
