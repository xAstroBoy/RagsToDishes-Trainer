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
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Get_MoneyEarned_Setup
	 */
	struct UWidget_5MinuteMode_EndUI_C_Get_MoneyEarned_Setup_Params
	{
	public:
		int32_t                                                    MoneyEarned;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    KnightBonus;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BirdPenalty;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Construct
	 */
	struct UWidget_5MinuteMode_EndUI_C_Construct_Params
	{	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.CollectStats
	 */
	struct UWidget_5MinuteMode_EndUI_C_CollectStats_Params
	{	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.GetScore
	 */
	struct UWidget_5MinuteMode_EndUI_C_GetScore_Params
	{	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.StopGetScore
	 */
	struct UWidget_5MinuteMode_EndUI_C_StopGetScore_Params
	{
	public:
		int32_t                                                    FinalScore;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Show_HighScore
	 */
	struct UWidget_5MinuteMode_EndUI_C_Show_HighScore_Params
	{	};

	/**
	 * Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.ExecuteUbergraph_Widget_5MinuteMode_EndUI
	 */
	struct UWidget_5MinuteMode_EndUI_C_ExecuteUbergraph_Widget_5MinuteMode_EndUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQVT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
