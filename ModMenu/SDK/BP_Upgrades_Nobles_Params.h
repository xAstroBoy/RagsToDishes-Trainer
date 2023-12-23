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
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.Get Upgrade Name_Basket
	 */
	struct ABP_Upgrades_Nobles_C_GetUpgradeName_Basket_Params
	{
	public:
		Enum_Upgrades_Nobles                                       Upgrade;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZ65[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                UpgradeName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.GetUpgradeInfo
	 */
	struct ABP_Upgrades_Nobles_C_GetUpgradeInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8DV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                UpgradeName;                                             // 0x0008(0x0018)  (Parm, OutParm)
		int32_t                                                    Cost;                                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Upgraded;                                                // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Contains;                                                // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RR87[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.SetUpgradesOnShelf
	 */
	struct ABP_Upgrades_Nobles_C_SetUpgradesOnShelf_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZG8R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                Banner;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ComingSoon;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Upgraded;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Contains;                                                // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.GetMoneyStats_RemoveToBasket
	 */
	struct ABP_Upgrades_Nobles_C_GetMoneyStats_RemoveToBasket_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGYO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MoneyAvailable;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MoneySpent;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FreeSample;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1B6D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.GetMoneyStats_AddToBasket
	 */
	struct ABP_Upgrades_Nobles_C_GetMoneyStats_AddToBasket_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IB56[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MoneyAvailable;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MoneySpent;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H8VF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0010(0x0018)  (Parm, OutParm)
		int32_t                                                    Cost;                                                    // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FreeSample;                                              // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LK2E[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.GetUpgradeAvailability
	 */
	struct ABP_Upgrades_Nobles_C_GetUpgradeAvailability_Params
	{
	public:
		Enum_Upgrades_Nobles                                       Upgrade;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ComingSoon;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.Get Upgrade Name
	 */
	struct ABP_Upgrades_Nobles_C_GetUpgradeName_Params
	{
	public:
		Enum_Upgrades_Nobles                                       Upgrade;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BHU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                UpgradeName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.UserConstructionScript
	 */
	struct ABP_Upgrades_Nobles_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.SetupReferences
	 */
	struct ABP_Upgrades_Nobles_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.SetUpgradesArray
	 */
	struct ABP_Upgrades_Nobles_C_SetUpgradesArray_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.SpawnBook
	 */
	struct ABP_Upgrades_Nobles_C_SpawnBook_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.EndEvent
	 */
	struct ABP_Upgrades_Nobles_C_EndEvent_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.RemoveUpgrade
	 */
	struct ABP_Upgrades_Nobles_C_RemoveUpgrade_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.ResetUpgradesOrder
	 */
	struct ABP_Upgrades_Nobles_C_ResetUpgradesOrder_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.SpawnGlassLids
	 */
	struct ABP_Upgrades_Nobles_C_SpawnGlassLids_Params
	{	};

	/**
	 * Function BP_Upgrades_Nobles.BP_Upgrades_Nobles_C.ExecuteUbergraph_BP_Upgrades_Nobles
	 */
	struct ABP_Upgrades_Nobles_C_ExecuteUbergraph_BP_Upgrades_Nobles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
