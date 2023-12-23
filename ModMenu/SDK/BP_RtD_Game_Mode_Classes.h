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
	 * BlueprintGeneratedClass BP_RtD_Game_Mode.BP_RtD_Game_Mode_C
	 * Size -> 0x0380 (FullSize[0x0748] - InheritedSize[0x03C8])
	 */
	class ABP_RtD_Game_Mode_C : public AGameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USG_RtD_SaveGame_C*                                  SaveGameRef;                                             // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStruct_SaveGame_Nobles                             SaveGame_Nobles;                                         // 0x03E0(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_SaveGame_Royals                             SaveGame_Royals;                                         // 0x0480(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_SaveGame_Peasants                           SaveGame_Peasants;                                       // 0x0528(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FStruct_Achievements_Total                          Achievements;                                            // 0x05D0(0x015C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F8TS[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_LoopManager_Peasants_C*                          LoopManager_Peasants_Ref;                                // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Nobles_C*                            LoopManager_Nobles_Ref;                                  // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Royals_C*                            LoopManager_Royals_Ref;                                  // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckAchievements(TArray<Enum_Achievements>* NewAchievements);
		void SaveAchievements();
		void LoadGame();
		void SaveGame();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void StartStage_Peasants();
		void StartStage_Nobles();
		void StartStage_Royals();
		void UpdateTutorialsAchievement();
		void ExecuteUbergraph_BP_RtD_Game_Mode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
