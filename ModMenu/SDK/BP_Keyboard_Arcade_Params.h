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
	 * Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.SaveInput
	 */
	struct ABP_Keyboard_Arcade_C_SaveInput_Params
	{
	public:
		bool                                                       SavedSuccessfully;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.Function:DestroyKeyboard
	 */
	struct ABP_Keyboard_Arcade_C_FunctionDestroyKeyboard_Params
	{	};

	/**
	 * Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.UserConstructionScript
	 */
	struct ABP_Keyboard_Arcade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ReceiveBeginPlay
	 */
	struct ABP_Keyboard_Arcade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Keyboard_Arcade.BP_Keyboard_Arcade_C.ExecuteUbergraph_BP_Keyboard_Arcade
	 */
	struct ABP_Keyboard_Arcade_C_ExecuteUbergraph_BP_Keyboard_Arcade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYD6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
