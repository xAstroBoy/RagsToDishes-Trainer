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
	 * Function BP_Keyboard.BP_Keyboard_C.DestroyKeyboard
	 */
	struct ABP_Keyboard_C_DestroyKeyboard_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.SaveInput
	 */
	struct ABP_Keyboard_C_SaveInput_Params
	{
	public:
		bool                                                       SavedSuccessfully;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EBGB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.GetSaveData
	 */
	struct ABP_Keyboard_C_GetSaveData_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.RemoveLetter
	 */
	struct ABP_Keyboard_C_RemoveLetter_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.InputLetter
	 */
	struct ABP_Keyboard_C_InputLetter_Params
	{
	public:
		class FString                                              InputLetter;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.SpawnKeyboardKeys
	 */
	struct ABP_Keyboard_C_SpawnKeyboardKeys_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.UserConstructionScript
	 */
	struct ABP_Keyboard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.ReceiveBeginPlay
	 */
	struct ABP_Keyboard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Keyboard.BP_Keyboard_C.ExecuteUbergraph_BP_Keyboard
	 */
	struct ABP_Keyboard_C_ExecuteUbergraph_BP_Keyboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QK9A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
