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
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.CheckTutorialDish
	 */
	struct ABP_Story_Event_Upgrades_Store_C_CheckTutorialDish_Params
	{
	public:
		TArray<class FName>                                        Ingredients;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CorrectDish;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAB0[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.UserConstructionScript
	 */
	struct ABP_Story_Event_Upgrades_Store_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 */
	struct ABP_Story_Event_Upgrades_Store_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.ReceiveBeginPlay
	 */
	struct ABP_Story_Event_Upgrades_Store_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.EventEnd
	 */
	struct ABP_Story_Event_Upgrades_Store_C_EventEnd_Params
	{	};

	/**
	 * Function BP_Story_Event_Upgrades_Store.BP_Story_Event_Upgrades_Store_C.ExecuteUbergraph_BP_Story_Event_Upgrades_Store
	 */
	struct ABP_Story_Event_Upgrades_Store_C_ExecuteUbergraph_BP_Story_Event_Upgrades_Store_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STGY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
