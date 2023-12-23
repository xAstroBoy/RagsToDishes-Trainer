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
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupRoyals
	 */
	struct UWidget_End_Of_Game_C_SetupRoyals_Params
	{	};

	/**
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupNobles
	 */
	struct UWidget_End_Of_Game_C_SetupNobles_Params
	{	};

	/**
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupPeasants
	 */
	struct UWidget_End_Of_Game_C_SetupPeasants_Params
	{	};

	/**
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.Get_Time
	 */
	struct UWidget_End_Of_Game_C_Get_Time_Params
	{
	public:
		class FText                                                Hours;                                                   // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Minutes;                                                 // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                Seconds;                                                 // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.Construct
	 */
	struct UWidget_End_Of_Game_C_Construct_Params
	{	};

	/**
	 * Function Widget_End_Of_Game.Widget_End_Of_Game_C.ExecuteUbergraph_Widget_End_Of_Game
	 */
	struct UWidget_End_Of_Game_C_ExecuteUbergraph_Widget_End_Of_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
