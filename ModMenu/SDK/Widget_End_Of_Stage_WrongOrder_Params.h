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
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Stew_Icon
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_Get_Stew_Icon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UImage*                                              Bowl;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Icon;                                                    // 0x0018(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_ActiveOrders
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_Get_ActiveOrders_Params
	{
	public:
		int32_t                                                    OrderIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPLO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.Get_Soup_Icon
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_Get_Soup_Icon_Params
	{
	public:
		class FString                                              Ingredient;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Icon;                                                    // 0x0010(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.SetupWidget
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_SetupWidget_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.BurntOrder
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_BurntOrder_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.GetDeliveredDish
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_GetDeliveredDish_Params
	{	};

	/**
	 * Function Widget_End_Of_Stage_WrongOrder.Widget_End_Of_Stage_WrongOrder_C.ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder
	 */
	struct UWidget_End_Of_Stage_WrongOrder_C_ExecuteUbergraph_Widget_End_Of_Stage_WrongOrder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LFPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
