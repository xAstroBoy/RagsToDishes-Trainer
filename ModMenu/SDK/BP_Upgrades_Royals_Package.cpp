/**
 * Name: RagsToDishes
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeName_Basket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Royals                               Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 */
	void ABP_Upgrades_Royals_C::GetUpgradeName_Basket(Enum_Upgrades_Royals Upgrade, class FText* UpgradeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeName_Basket");
		
		ABP_Upgrades_Royals_C_GetUpgradeName_Basket_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeName != nullptr)
			*UpgradeName = params.UpgradeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Royals_C::GetUpgradeInfo(int32_t Index, class FText* UpgradeName, int32_t* Cost, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeInfo");
		
		ABP_Upgrades_Royals_C_GetUpgradeInfo_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeName != nullptr)
			*UpgradeName = params.UpgradeName;
		if (Cost != nullptr)
			*Cost = params.Cost;
		if (Upgraded != nullptr)
			*Upgraded = params.Upgraded;
		if (Contains != nullptr)
			*Contains = params.Contains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeAvailability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Royals                               Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComingSoon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Royals_C::GetUpgradeAvailability(Enum_Upgrades_Royals Upgrade, bool* ComingSoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeAvailability");
		
		ABP_Upgrades_Royals_C_GetUpgradeAvailability_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComingSoon != nullptr)
			*ComingSoon = params.ComingSoon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetUpgradesOnShelf
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComingSoon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Royals_C::SetUpgradesOnShelf(int32_t Index, class UStaticMeshComponent* Banner, bool* ComingSoon, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetUpgradesOnShelf");
		
		ABP_Upgrades_Royals_C_SetUpgradesOnShelf_Params params {};
		params.Index = Index;
		params.Banner = Banner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComingSoon != nullptr)
			*ComingSoon = params.ComingSoon;
		if (Upgraded != nullptr)
			*Upgraded = params.Upgraded;
		if (Contains != nullptr)
			*Contains = params.Contains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetMoneyStats_RemoveToBasket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Royals_C::GetMoneyStats_RemoveToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, bool* FreeSample, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetMoneyStats_RemoveToBasket");
		
		ABP_Upgrades_Royals_C_GetMoneyStats_RemoveToBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (MoneyAvailable != nullptr)
			*MoneyAvailable = params.MoneyAvailable;
		if (MoneySpent != nullptr)
			*MoneySpent = params.MoneySpent;
		if (FreeSample != nullptr)
			*FreeSample = params.FreeSample;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Royals                               Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 */
	void ABP_Upgrades_Royals_C::GetUpgradeName(Enum_Upgrades_Royals Upgrade, class FText* UpgradeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetUpgradeName");
		
		ABP_Upgrades_Royals_C_GetUpgradeName_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeName != nullptr)
			*UpgradeName = params.UpgradeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetMoneyStats_AddToBasket
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Royals_C::GetMoneyStats_AddToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, class FText* Name, int32_t* Cost, bool* FreeSample)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.GetMoneyStats_AddToBasket");
		
		ABP_Upgrades_Royals_C_GetMoneyStats_AddToBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (MoneyAvailable != nullptr)
			*MoneyAvailable = params.MoneyAvailable;
		if (MoneySpent != nullptr)
			*MoneySpent = params.MoneySpent;
		if (Name != nullptr)
			*Name = params.Name;
		if (Cost != nullptr)
			*Cost = params.Cost;
		if (FreeSample != nullptr)
			*FreeSample = params.FreeSample;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.UserConstructionScript");
		
		ABP_Upgrades_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetupReferences
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetupReferences");
		
		ABP_Upgrades_Royals_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetUpgradesArray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::SetUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SetUpgradesArray");
		
		ABP_Upgrades_Royals_C_SetUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SpawnBook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::SpawnBook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SpawnBook");
		
		ABP_Upgrades_Royals_C_SpawnBook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.EndEvent");
		
		ABP_Upgrades_Royals_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.RemoveUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::RemoveUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.RemoveUpgrade");
		
		ABP_Upgrades_Royals_C_RemoveUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.ResetUpgradesOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::ResetUpgradesOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.ResetUpgradesOrder");
		
		ABP_Upgrades_Royals_C_ResetUpgradesOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SpawnGlassLids
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Royals_C::SpawnGlassLids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.SpawnGlassLids");
		
		ABP_Upgrades_Royals_C_SpawnGlassLids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.ExecuteUbergraph_BP_Upgrades_Royals
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Royals_C::ExecuteUbergraph_BP_Upgrades_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Royals.BP_Upgrades_Royals_C.ExecuteUbergraph_BP_Upgrades_Royals");
		
		ABP_Upgrades_Royals_C_ExecuteUbergraph_BP_Upgrades_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Upgrades_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Upgrades_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Upgrades_Royals.BP_Upgrades_Royals_C");
		return ptr;
	}

}


