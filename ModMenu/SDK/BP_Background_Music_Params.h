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
	 * Function BP_Background_Music.BP_Background_Music_C.UserConstructionScript
	 */
	struct ABP_Background_Music_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Background_Music.BP_Background_Music_C.ReceiveBeginPlay
	 */
	struct ABP_Background_Music_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Background_Music.BP_Background_Music_C.PlayTrack
	 */
	struct ABP_Background_Music_C_PlayTrack_Params
	{
	public:
		class USoundCue*                                           Track;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Background_Music.BP_Background_Music_C.StopTrack
	 */
	struct ABP_Background_Music_C_StopTrack_Params
	{	};

	/**
	 * Function BP_Background_Music.BP_Background_Music_C.SwitchTracks
	 */
	struct ABP_Background_Music_C_SwitchTracks_Params
	{
	public:
		class USoundCue*                                           Track;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Background_Music.BP_Background_Music_C.ExecuteUbergraph_BP_Background_Music
	 */
	struct ABP_Background_Music_C_ExecuteUbergraph_BP_Background_Music_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7EK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
