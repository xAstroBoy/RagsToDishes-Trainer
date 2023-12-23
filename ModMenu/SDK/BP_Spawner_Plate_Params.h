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
	 * Function BP_Spawner_Plate.BP_Spawner_Plate_C.SpawnAndAttachObject
	 */
	struct ABP_Spawner_Plate_C_SpawnAndAttachObject_Params
	{
	public:
		class AActor*                                              ObjectRef;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X04X[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Spawner_Plate.BP_Spawner_Plate_C.UserConstructionScript
	 */
	struct ABP_Spawner_Plate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Spawner_Plate.BP_Spawner_Plate_C.SpawnObjectAtSpawner
	 */
	struct ABP_Spawner_Plate_C_SpawnObjectAtSpawner_Params
	{	};

	/**
	 * Function BP_Spawner_Plate.BP_Spawner_Plate_C.ExecuteUbergraph_BP_Spawner_Plate
	 */
	struct ABP_Spawner_Plate_C_ExecuteUbergraph_BP_Spawner_Plate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
