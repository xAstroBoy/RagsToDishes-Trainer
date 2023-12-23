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
	 * BlueprintGeneratedClass BP_Menu_Item_5Min_N.BP_Menu_Item_5Min_N_C
	 * Size -> 0x0009 (FullSize[0x03F9] - InheritedSize[0x03F0])
	 */
	class ABP_Menu_Item_5Min_N_C : public ABP_Menu_Item_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Enabled;                                                 // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void SetState();
		void SelectMenuOption();
		void SetEnabled(bool Enabled);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_Item_5Min_N(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
