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
	 * UserDefinedStruct Struct_SaveGame_Nobles.Struct_SaveGame_Nobles
	 * Size -> 0x009C
	 */
	struct FStruct_SaveGame_Nobles
	{
	public:
		bool                                                       NewGame_51_3A2AA8B8409B205CE9EFF39F8ED5879A;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NoblesComplete_141_E8BE43ED4E32DB4D2D68D7AE9D00B746;     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LY4K[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalPlayTime_54_B81A286244579A346608E0BD84F2849B;       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MoneyCollected_56_0AEF31ED4EA96376639A0CBF52556107;      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLoops_58_BEF88F334ED8A8F16ECEB586B779BDDC;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfUpgrades_120_222498C247016A9C9F06908C9E96482A;   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    XPCollected_166_7623C9AC46819DD3E48058B20EA58944;        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalOrdersCompleted_62_E5582C8C44214CC56A516E8F01C08C51; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V0MB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Total_Money_Collected_Loops_65_C237A5D342C6D626385CC19582E6A064; // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    Number_Of_Total_Bread_Orders_67_2CCF1EB24C9C362DD1DB9AA97C7F4EAD; // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Drink_Orders_69_39157AC34471E5C4F6B4C18C8BEC17C4; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Pie_Orders_142_B1BFF2724735B3B343285BAB7886C8BE; // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Skewer_Orders_143_10FFF22848E0E685A09574912FAA8F84; // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Stew_Orders_144_D43ECDDA44F0863AC2E881B72C285EB7; // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZI9Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TotalCustomerSatisfaction_179_345E64D849A5308B6D45A293F7215687; // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TotalBonusCustomers_182_50FD58954D5EBFF13A8D40B6801DB046; // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalBirdsHit_183_C789947F404A68CC6B636B9FD0341585;      // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Story_Level_169_020E0BBE427EF5CCD7E339B099148B1C;        // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_145_1E9C9F824C04F64F9F9F718741314D22;      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pie_Upgraded_146_841BD4674B965FFB9E9D7A95A6CD2B03;       // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Wine_Upgraded_147_284B04984223F53C106E0B9D004852EE;      // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Fish_Upgraded_149_E1CE109947655B0355849196C75D3BA3;      // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Stew_Upgraded_150_AA64C2E44E2889128571ADA814AE2520;      // 0x006B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Seasoning_Level1_Upgraded_151_31BFFF5441F3C1C8698450B844E4950B; // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Seasoning_Level2_Upgraded_152_36C1572C4FD2953FF73FE5AD684F6A19; // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Rotisserie_Level1_Upgraded_153_73E19A6D45D5862489D9E2B4E9E0193A; // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DrinksBarrels_Upgraded_155_BB760B8745C09D2B7D8604897A9BBA6A; // 0x006F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Oven_Level1_Upgraded_84_C484F4B647452C1ADF326BBB84ECBD07; // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Oven_Level2_Upgraded_85_DCB07E9D46958DD93E4154B1AEC9D8F9; // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       StewPot_Level1_Upgraded_156_E80F1E5C48EB9660019DEC8B4539E236; // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       StewPot_Level2_Upgraded_157_569BD3894676106B141FD180ED87E128; // 0x0073(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PieDish_Level1_Upgraded_158_8A318D9147F72FA65A22F6A186984E22; // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PieDish_Level2_Upgraded_159_9C8C8AF249073B48E36960B90985B770; // 0x0075(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Knife_Upgraded_160_A6D017324E0E4E9B5A555CAF10FA3B4B;     // 0x0076(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FreeSample_Upgraded_161_C578AA494E6197A9447A6981CD424C12; // 0x0077(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Show_FreeSample_Tutorial_171_4A8D57D64BFE501384F8CEA94FF8082A; // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations1_Upgraded_187_3EA074D54EB643E884A69584C8D0BC6E; // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations2_Upgraded_188_15AA2210426BC0974ED06CB7D93904DB; // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CustomerPatience_Upgraded_165_CE4F5E7A4F9A6FD4DDE0DD9A5FCA8FC8; // 0x007B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      KitchenDecorationsValue_190_3B083EC14AE13E911E6328864FEEBA7C; // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_OrderWeights>                        OrderWeights_124_23663D894874AB662E4F03ACB93EDC20;       // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      CustomerWaitTimeBetweenOrders_Normal_135_8CD9452E4EAE0B840B6BDF8E40B8E687; // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CustomerWaitTimeBetweenOrders_RushHour_137_7D0E6BC24394277D3129FF851C54FD41; // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfMealOrders_186_7DB71A7E4CD67CBCBE5B5692BFDFAABE; // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
