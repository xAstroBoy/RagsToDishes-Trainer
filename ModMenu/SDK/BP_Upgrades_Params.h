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
	 * Function BP_Upgrades.BP_Upgrades_C.SpawnGlassLids
	 */
	struct ABP_Upgrades_C_SpawnGlassLids_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.SetUpgradesOnShelf
	 */
	struct ABP_Upgrades_C_SetUpgradesOnShelf_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RJEA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                Banner;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ComingSoon;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Upgraded;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Contains;                                                // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.GetUpgradeInfo
	 */
	struct ABP_Upgrades_C_GetUpgradeInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TANC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                UpgradeName;                                             // 0x0008(0x0018)  (Parm, OutParm)
		int32_t                                                    Cost;                                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Upgraded;                                                // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Contains;                                                // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.RemoveUpgrade
	 */
	struct ABP_Upgrades_C_RemoveUpgrade_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_RemoveToBasket
	 */
	struct ABP_Upgrades_C_GetMoneyStats_RemoveToBasket_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LPLS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MoneyAvailable;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MoneySpent;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FreeSample;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9VL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_AddToBasket
	 */
	struct ABP_Upgrades_C_GetMoneyStats_AddToBasket_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U78P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MoneyAvailable;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MoneySpent;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIKL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0010(0x0018)  (Parm, OutParm)
		int32_t                                                    Cost;                                                    // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FreeSample;                                              // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.UserConstructionScript
	 */
	struct ABP_Upgrades_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ReceiveBeginPlay
	 */
	struct ABP_Upgrades_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrade
	 */
	struct ABP_Upgrades_C_ToggleUpgrade_Params
	{
	public:
		int32_t                                                    UpgradeCounter;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Forward
	 */
	struct ABP_Upgrades_C_ToggleUpgradesForward_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Backward
	 */
	struct ABP_Upgrades_C_ToggleUpgradesBackward_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.SetupUpgradePriceTag
	 */
	struct ABP_Upgrades_C_SetupUpgradePriceTag_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.AddOrderToBasket
	 */
	struct ABP_Upgrades_C_AddOrderToBasket_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.RemoveUpgradeFromBasket
	 */
	struct ABP_Upgrades_C_RemoveUpgradeFromBasket_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.EndUpgrades
	 */
	struct ABP_Upgrades_C_EndUpgrades_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ResetUpgradesOrder
	 */
	struct ABP_Upgrades_C_ResetUpgradesOrder_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.RotateMesh
	 */
	struct ABP_Upgrades_C_RotateMesh_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Upgrades_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U60X[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.SetupReferences
	 */
	struct ABP_Upgrades_C_SetupReferences_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.SpawnBook
	 */
	struct ABP_Upgrades_C_SpawnBook_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.EndEvent
	 */
	struct ABP_Upgrades_C_EndEvent_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.FinishReset
	 */
	struct ABP_Upgrades_C_FinishReset_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.SetUpgradesArray
	 */
	struct ABP_Upgrades_C_SetUpgradesArray_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ShowBasket
	 */
	struct ABP_Upgrades_C_ShowBasket_Params
	{	};

	/**
	 * Function BP_Upgrades.BP_Upgrades_C.ExecuteUbergraph_BP_Upgrades
	 */
	struct ABP_Upgrades_C_ExecuteUbergraph_BP_Upgrades_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJOW[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
