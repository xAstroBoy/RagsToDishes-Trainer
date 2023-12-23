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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Struct_Peasant_Event_Progress.Struct_Peasant_Event_Progress
	 * Size -> 0x0030
	 */
	struct FStruct_Peasant_Event_Progress
	{
	public:
		Enum_Upgrade_Levels_Peasants                               Event_2_23683DBC4010003047FBE581CB7BB540;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InTutorialLevel_5_EF6D240F4503593A60BBE1BF429BD314;      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Completed_7_62406AC74355E1DFD8006B9F2166B4BE;            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y6S4[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title_17_D88C9D2549D064258661FFBE7E488532;               // 0x0008(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          TutorialIcon_10_37A7A867407297DBA156A78A19695FF5;        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TutorialWidget_14_EB70B9354487C105100041BFBFEC78F2;      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
