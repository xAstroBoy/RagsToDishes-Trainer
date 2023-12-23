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
	 * BlueprintGeneratedClass VR_Game_LevelStreaming_Peasants.VR_Game_LevelStreaming_Peasants_C
	 * Size -> 0x0030 (FullSize[0x0360] - InheritedSize[0x0330])
	 */
	class AVR_Game_LevelStreaming_Peasants_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_RtD_GameInstance_C*                              GameInstanceRef;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Invis_Floor_C*                                   BP_Invis_Floor_2_ExecuteUbergraph_VR_Game_LevelStreaming_Peasants_RefProperty; // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Height_Adjustment_Actor_C*                       BP_Height_Adjustment_Actor_4_ExecuteUbergraph_VR_Game_LevelStreaming_Peasants_RefProperty; // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Peasants_C*                          BP_LoopManager_Peasants_2_ExecuteUbergraph_VR_Game_LevelStreaming_Peasants_RefProperty; // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMotionControllerPawn_C*                             MotionControllerPawn_6_ExecuteUbergraph_VR_Game_LevelStreaming_Peasants_RefProperty; // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_VR_Game_LevelStreaming_Peasants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
