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
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetTimers
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_GetTimers_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Order_Container_Visibility
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_Order_Container_Visibility_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetStewIcon
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_GetStewIcon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UImage*                                              StewBowl;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValidIngredient;                                         // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVEA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         Icon;                                                    // 0x0020(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Dish_Visibility
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_Get_Dish_Visibility_Params
	{
	public:
		int32_t                                                    WidgetIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Get_Soup_Icon
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_Get_Soup_Icon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ValidIngredient;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UFQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         Icon;                                                    // 0x0018(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Construct
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_Construct_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.SetOrderDelivered
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_SetOrderDelivered_Params
	{
	public:
		int32_t                                                    OrderNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartUI
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_StartUI_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ToggleDishVisibility
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_ToggleDishVisibility_Params
	{
	public:
		int32_t                                                    WidgetIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OrderIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.StartTimer
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_StartTimer_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.GetSatisfactionAndTime
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_GetSatisfactionAndTime_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.Start:SweetsEvent
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_StartSweetsEvent_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.End:SweetsEvent
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_EndSweetsEvent_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_OrderIcons.Widget_End_Of_Stage_OrderIcons_C.ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons
	 */
	struct UWidget_End_Of_Stage_OrderIcons_C_ExecuteUbergraph_Widget_End_Of_Stage_OrderIcons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
