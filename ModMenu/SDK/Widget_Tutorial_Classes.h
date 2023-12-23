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
	 * WidgetBlueprintGeneratedClass Widget_Tutorial.Widget_Tutorial_C
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UWidget_Tutorial_C : public UWidget_UI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Tutorial_C*                                      TutorialRef;                                             // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    DialogueNo;                                              // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R5NZ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_Equipment_C*>                             TutEquipment;                                            // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_Object_Spawner_C*>                        TutSpawners;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void ContinueDialogue(bool UserInput);
		void RenderNextDialogue();
		void DisplayContinueArrow();
		void HideContinueArrow();
		void SpawnEquipment();
		void DestroyEquipment();
		void OnInitialized();
		void ExecuteUbergraph_Widget_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
