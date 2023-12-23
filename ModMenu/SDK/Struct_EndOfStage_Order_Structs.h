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
	 * UserDefinedStruct Struct_EndOfStage_Order.Struct_EndOfStage_Order
	 * Size -> 0x002D
	 */
	struct FStruct_EndOfStage_Order
	{
	public:
		class FText                                                OrderTag_4_F749EE914C60591AD9443F952DC27158;             // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<class FText>                                        OrderIngredients_5_23D6EE6D49904977BA7E5EAEAF81E809;     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    WidgetIndex_10_567B3ECA4CF577FB5C029386C8074BA3;         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OrderActive_12_B32287AC4F644882FC384A994D92AA11;         // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
