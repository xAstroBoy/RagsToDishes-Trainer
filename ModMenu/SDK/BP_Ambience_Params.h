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
	 * Function BP_Ambience.BP_Ambience_C.PlayRandomAudio
	 */
	struct ABP_Ambience_C_PlayRandomAudio_Params
	{	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.UserConstructionScript
	 */
	struct ABP_Ambience_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.AmbienceVolumeTL__FinishedFunc
	 */
	struct ABP_Ambience_C_AmbienceVolumeTL__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.AmbienceVolumeTL__UpdateFunc
	 */
	struct ABP_Ambience_C_AmbienceVolumeTL__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.ReceiveBeginPlay
	 */
	struct ABP_Ambience_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.SetCrowdTrackVolume
	 */
	struct ABP_Ambience_C_SetCrowdTrackVolume_Params
	{
	public:
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ambience.BP_Ambience_C.ExecuteUbergraph_BP_Ambience
	 */
	struct ABP_Ambience_C_ExecuteUbergraph_BP_Ambience_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFBG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
