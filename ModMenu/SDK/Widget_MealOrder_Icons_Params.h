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
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Royals
	 */
	struct UWidget_MealOrder_Icons_C_SideOrderIconsRoyals_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Royals
	 */
	struct UWidget_MealOrder_Icons_C_MainOrderIconsRoyals_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSkewerSeasoning
	 */
	struct UWidget_MealOrder_Icons_C_GetSkewerSeasoning_Params
	{
	public:
		class FText                                                Ingredient;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Seasoning;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateBrush                                         Image;                                                   // 0x0030(0x0088)  (Parm, OutParm)
		bool                                                       Valid;                                                   // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UQQG[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetStewIcons
	 */
	struct UWidget_MealOrder_Icons_C_GetStewIcons_Params
	{
	public:
		class FText                                                Ingredient;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UImage*                                              StewBowl;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Icon;                                                    // 0x0020(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Nobles
	 */
	struct UWidget_MealOrder_Icons_C_SideOrderIconsNobles_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Nobles
	 */
	struct UWidget_MealOrder_Icons_C_MainOrderIconsNobles_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SideOrderIcons:Peasants
	 */
	struct UWidget_MealOrder_Icons_C_SideOrderIconsPeasants_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.MainOrderIcons:Peasants
	 */
	struct UWidget_MealOrder_Icons_C_MainOrderIconsPeasants_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Setup
	 */
	struct UWidget_MealOrder_Icons_C_Setup_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSoupIcons
	 */
	struct UWidget_MealOrder_Icons_C_GetSoupIcons_Params
	{
	public:
		class FText                                                Ingredient;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateBrush                                         Icon;                                                    // 0x0018(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.Construct
	 */
	struct UWidget_MealOrder_Icons_C_Construct_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ShowOrderValue
	 */
	struct UWidget_MealOrder_Icons_C_ShowOrderValue_Params
	{
	public:
		int32_t                                                    OrderValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_Customer_Satisfaction                                 CustomerSatisfaction;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BonusCustomer;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetMainDelivered
	 */
	struct UWidget_MealOrder_Icons_C_SetMainDelivered_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.SetSideDelivered
	 */
	struct UWidget_MealOrder_Icons_C_SetSideDelivered_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.GetSatisfactionAndTime
	 */
	struct UWidget_MealOrder_Icons_C_GetSatisfactionAndTime_Params
	{	};

	/**
	 * Function Widget_MealOrder_Icons.Widget_MealOrder_Icons_C.ExecuteUbergraph_Widget_MealOrder_Icons
	 */
	struct UWidget_MealOrder_Icons_C_ExecuteUbergraph_Widget_MealOrder_Icons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N28T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
