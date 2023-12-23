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
	 * UserDefinedStruct Struct_SaveGame_Royals.Struct_SaveGame_Royals
	 * Size -> 0x00A4
	 */
	struct FStruct_SaveGame_Royals
	{
	public:
		bool                                                       NewGame_51_3A2AA8B8409B205CE9EFF39F8ED5879A;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RoyalsComplete_166_E8BE43ED4E32DB4D2D68D7AE9D00B746;     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T5XS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalPlayTime_54_B81A286244579A346608E0BD84F2849B;       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MoneyCollected_56_0AEF31ED4EA96376639A0CBF52556107;      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLoops_58_BEF88F334ED8A8F16ECEB586B779BDDC;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfUpgrades_120_222498C247016A9C9F06908C9E96482A;   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    XPCollected_195_7623C9AC46819DD3E48058B20EA58944;        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalOrdersCompleted_62_E5582C8C44214CC56A516E8F01C08C51; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IOLS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Total_Money_Collected_Loops_65_C237A5D342C6D626385CC19582E6A064; // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    Number_Of_Total_Pie_Orders_142_B1BFF2724735B3B343285BAB7886C8BE; // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Fruits_Orders_167_2CCF1EB24C9C362DD1DB9AA97C7F4EAD; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Cakes_Orders_168_39157AC34471E5C4F6B4C18C8BEC17C4; // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Platter_Orders_169_10FFF22848E0E685A09574912FAA8F84; // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Number_Of_Total_Drink_Orders_170_D43ECDDA44F0863AC2E881B72C285EB7; // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D93A[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TotalCustomerSatisfaction_205_4919F69344B6B7350BE9E890298F795E; // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TotalBonusCustomers_207_A52D42384C080FFD8E5B7AAAAB4F6DDC; // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalBirdsHit_209_770EB83049609D10F8D5C8B918986166;      // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Story_Level_198_C5EBF4E44222F88721511886C761130F;        // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Upgrade_Level_145_1E9C9F824C04F64F9F9F718741314D22;      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Oven_Upgraded_171_841BD4674B965FFB9E9D7A95A6CD2B03;      // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DrinkTaps_Upgraded_172_284B04984223F53C106E0B9D004852EE; // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PieDish_Upgraded_173_E1CE109947655B0355849196C75D3BA3;   // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Fruits_Level1_Upgraded_174_AA64C2E44E2889128571ADA814AE2520; // 0x006B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Chocolate_Upgraded_175_31BFFF5441F3C1C8698450B844E4950B; // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Cake_Upgraded_188_C7CA2F3C46FB1BD43C07388FA9FFBA81;      // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Cake_Lid_Upgraded_176_36C1572C4FD2953FF73FE5AD684F6A19;  // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MeatStation_Upgraded_177_73E19A6D45D5862489D9E2B4E9E0193A; // 0x006F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Platters_Upgraded_178_BB760B8745C09D2B7D8604897A9BBA6A;  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Lobster_Upgraded_179_C484F4B647452C1ADF326BBB84ECBD07;   // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RushHourBonus_Upgraded_180_DCB07E9D46958DD93E4154B1AEC9D8F9; // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BonusFrequencyPatience_Upgraded_181_E80F1E5C48EB9660019DEC8B4539E236; // 0x0073(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BonusValuePatience_Upgraded_183_8A318D9147F72FA65A22F6A186984E22; // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FreeSample_Full_Upgraded_191_C578AA494E6197A9447A6981CD424C12; // 0x0075(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FreeSample_Half_Upgraded_190_37A5DBD14BA448209B8011805829BA5B; // 0x0076(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations1_Upgraded_216_3EA074D54EB643E884A69584C8D0BC6E; // 0x0077(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       KitchenDecorations2_Upgraded_217_15AA2210426BC0974ED06CB7D93904DB; // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HIJ2[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KitchenDecorationsValue_218_3B083EC14AE13E911E6328864FEEBA7C; // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RushHourMultiplier_212_DB4EBADD4E3DBE3F93CFAAB71FA54EC5; // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BonusValuePatience_Value_186_185C1D20472813AC2D6384A764D52412; // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_OrderWeights>                        OrderWeights_124_23663D894874AB662E4F03ACB93EDC20;       // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      CustomerWaitTimeBetweenOrders_Normal_135_8CD9452E4EAE0B840B6BDF8E40B8E687; // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CustomerWaitTimeBetweenOrders_RushHour_137_7D0E6BC24394277D3129FF851C54FD41; // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfMealOrders_215_714F8C1146C7CFF716AF88B69915B475; // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
