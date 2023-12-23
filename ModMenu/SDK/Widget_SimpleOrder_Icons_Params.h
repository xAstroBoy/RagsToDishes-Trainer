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
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Royals
	 */
	struct UWidget_SimpleOrder_Icons_C_ShowOrderIconsRoyals_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Stew_Icon
	 */
	struct UWidget_SimpleOrder_Icons_C_Get_Stew_Icon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Icon;                                                    // 0x0010(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Nobles
	 */
	struct UWidget_SimpleOrder_Icons_C_ShowOrderIconsNobles_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderIcons:Peasants
	 */
	struct UWidget_SimpleOrder_Icons_C_ShowOrderIconsPeasants_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.SetupCustomer
	 */
	struct UWidget_SimpleOrder_Icons_C_SetupCustomer_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Get_Soup_Icon
	 */
	struct UWidget_SimpleOrder_Icons_C_Get_Soup_Icon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Icon;                                                    // 0x0010(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.Construct
	 */
	struct UWidget_SimpleOrder_Icons_C_Construct_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ShowOrderValue
	 */
	struct UWidget_SimpleOrder_Icons_C_ShowOrderValue_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Customer_Satisfaction                                 CustomerSatisfaction;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BonusCustomer;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.GetSatisfactionAndTime
	 */
	struct UWidget_SimpleOrder_Icons_C_GetSatisfactionAndTime_Params
	{	};

	/**
	 * Function Widget_SimpleOrder_Icons.Widget_SimpleOrder_Icons_C.ExecuteUbergraph_Widget_SimpleOrder_Icons
	 */
	struct UWidget_SimpleOrder_Icons_C_ExecuteUbergraph_Widget_SimpleOrder_Icons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5951[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
