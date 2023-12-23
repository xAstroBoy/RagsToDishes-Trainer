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
	 * UserDefinedStruct Struct_Loop_Bonus.Struct_Loop_Bonus
	 * Size -> 0x0045
	 */
	struct FStruct_Loop_Bonus
	{
	public:
		bool                                                       Active_1_4D798EA24F2468E35FC352A0FFAD4782;               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CNJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                BonusTitle_16_486A1D304A27F66418AA0592879D5928;          // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                BonusDescription_17_761C108A4EB3289C2853BC9BC2732611;    // 0x0020(0x0018) Edit, BlueprintVisible
		int32_t                                                    BonusReward_18_60BCDF3640B258A0CFA56B824FF57A9B;         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Stats_Achieved_19_E24214524D769C74175936ABA2B11D1C;      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Stats_Total_20_60A0210C4D54DC4EAAA8B69FFFCCBC90;         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Success_22_648BE56F463B5BC3763363A881AF8C3C;             // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
