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
	 * Function BP_SpawnManager.BP_SpawnManager_C.UserConstructionScript
	 */
	struct ABP_SpawnManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SpawnManager.BP_SpawnManager_C.SpawnActor
	 */
	struct ABP_SpawnManager_C_SpawnActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnManager.BP_SpawnManager_C.CleanUpLevel
	 */
	struct ABP_SpawnManager_C_CleanUpLevel_Params
	{	};

	/**
	 * Function BP_SpawnManager.BP_SpawnManager_C.ExecuteUbergraph_BP_SpawnManager
	 */
	struct ABP_SpawnManager_C_ExecuteUbergraph_BP_SpawnManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
