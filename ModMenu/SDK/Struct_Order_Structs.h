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
	 * UserDefinedStruct Struct_Order.Struct_Order
	 * Size -> 0x0071
	 */
	struct FStruct_Order
	{
	public:
		class FText                                                OrderTag_5_08D7D3D4413ECB8A4075F5849EEF40C9;             // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<class FText>                                        MainIngredients_40_8D8828AD400EA62BA0EEBCB93158E706;     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FText>                                        SideIngredients_39_AC6FF27B40C4A315D535C1914FCC6729;     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FText                                                Drink_22_5D0A3C3146C81009E2B5CAA3278E2B22;               // 0x0038(0x0018) Edit, BlueprintVisible
		bool                                                       CorrectOrder_8_0976C1004A43939A45F6C1A7048150D5;         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOJ3[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OrderValue_32_69F1BA0A42FF23F5C0C02CA82FB1F041;          // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OrderTimer_43_67037EC343DD3078F59B66B31B81A499;          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderNumber_14_F552C8C5411395CE955B26A3B5DE77F7;         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MainDelivered_42_86A987CF48F9700139BF2A9401E9A707;       // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SideDelivered_41_932CBB2448BB5551D42C5A8F5B208BA7;       // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DrinkDelivered_18_EF69C8EF423A114EC02CACBA39CF753D;      // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OrderActive_24_46E938B54106970A4F65BCB2051CA5A2;         // 0x0063(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1RKA[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Customer_C*                                      Customer_28_BC49F6264DE4C8627519A1BB5CFDFF75;            // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_Customer_Satisfaction                                 CustomerSatisfaction_30_42A73F4844DFAD3B644C4C92FCF85788; // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
