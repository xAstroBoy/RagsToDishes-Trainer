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
	 * BlueprintGeneratedClass BP_Story_Event_Peasants_Soup_Ingredients.BP_Story_Event_Peasants_Soup_Ingredients_C
	 * Size -> 0x001F (FullSize[0x03E0] - InheritedSize[0x03C1])
	 */
	class ABP_Story_Event_Peasants_Soup_Ingredients_C : public ABP_Story_Event_C
	{
	public:
		unsigned char                                              UnknownData_HL2L[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_SE_Peasant_Soup_Ingredients_C*               WidgetRef;                                               // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_LoopManager_Peasants_C*                          LoopManagerRef;                                          // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void EventEnd();
		void ExecuteUbergraph_BP_Story_Event_Peasants_Soup_Ingredients(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
