﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Menu_Item_Tutorial_P.BP_Menu_Item_Tutorial_P_C
	 * Size -> 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
	 */
	class ABP_Menu_Item_Tutorial_P_C : public ABP_Menu_Item_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetState();
		void SelectMenuOption();
		void ExecuteUbergraph_BP_Menu_Item_Tutorial_P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
