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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeName_Basket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Peasants                             Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 */
	void ABP_Upgrades_Peasants_C::GetUpgradeName_Basket(Enum_Upgrades_Peasants Upgrade, class FText* UpgradeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeName_Basket");
		
		ABP_Upgrades_Peasants_C_GetUpgradeName_Basket_Params params {};
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Peasants_C::GetUpgradeInfo(int32_t Index, class FText* UpgradeName, int32_t* Cost, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeInfo");
		
		ABP_Upgrades_Peasants_C_GetUpgradeInfo_Params params {};
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.EndTutorial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::EndTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.EndTutorial");
		
		ABP_Upgrades_Peasants_C_EndTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetupTutorial
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SetupTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetupTutorial");
		
		ABP_Upgrades_Peasants_C_SetupTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeAvailability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Peasants                             Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComingSoon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Peasants_C::GetUpgradeAvailability(Enum_Upgrades_Peasants Upgrade, bool* ComingSoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeAvailability");
		
		ABP_Upgrades_Peasants_C_GetUpgradeAvailability_Params params {};
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetUpgradesOnShelf
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComingSoon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Peasants_C::SetUpgradesOnShelf(int32_t Index, class UStaticMeshComponent* Banner, bool* ComingSoon, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetUpgradesOnShelf");
		
		ABP_Upgrades_Peasants_C_SetUpgradesOnShelf_Params params {};
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetMoneyStats_RemoveToBasket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Peasants_C::GetMoneyStats_RemoveToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, bool* FreeSample, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetMoneyStats_RemoveToBasket");
		
		ABP_Upgrades_Peasants_C_GetMoneyStats_RemoveToBasket_Params params {};
		
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrades_Peasants                             Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 */
	void ABP_Upgrades_Peasants_C::GetUpgradeName(Enum_Upgrades_Peasants Upgrade, class FText* UpgradeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetUpgradeName");
		
		ABP_Upgrades_Peasants_C_GetUpgradeName_Params params {};
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetMoneyStats_AddToBasket
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_Peasants_C::GetMoneyStats_AddToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, class FText* Name, int32_t* Cost, bool* FreeSample)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.GetMoneyStats_AddToBasket");
		
		ABP_Upgrades_Peasants_C_GetMoneyStats_AddToBasket_Params params {};
		
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
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.UserConstructionScript");
		
		ABP_Upgrades_Peasants_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Peasants_C::InpActEvt_DialogueInput_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.InpActEvt_DialogueInput_K2Node_InputActionEvent_1");
		
		ABP_Upgrades_Peasants_C_InpActEvt_DialogueInput_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetupReferences
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetupReferences");
		
		ABP_Upgrades_Peasants_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetUpgradesArray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SetUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SetUpgradesArray");
		
		ABP_Upgrades_Peasants_C_SetUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.EndEvent");
		
		ABP_Upgrades_Peasants_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.RemoveUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::RemoveUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.RemoveUpgrade");
		
		ABP_Upgrades_Peasants_C_RemoveUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ResetUpgradesOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::ResetUpgradesOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ResetUpgradesOrder");
		
		ABP_Upgrades_Peasants_C_ResetUpgradesOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnShelvesPointer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnShelvesPointer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnShelvesPointer");
		
		ABP_Upgrades_Peasants_C_SpawnShelvesPointer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnContractPointer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnContractPointer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnContractPointer");
		
		ABP_Upgrades_Peasants_C_SpawnContractPointer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBookPointer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnBookPointer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBookPointer");
		
		ABP_Upgrades_Peasants_C_SpawnBookPointer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBagPointer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnBagPointer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBagPointer");
		
		ABP_Upgrades_Peasants_C_SpawnBagPointer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnButtonPointer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnButtonPointer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnButtonPointer");
		
		ABP_Upgrades_Peasants_C_SpawnButtonPointer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnBook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnBook");
		
		ABP_Upgrades_Peasants_C_SpawnBook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnGlassLids
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::SpawnGlassLids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.SpawnGlassLids");
		
		ABP_Upgrades_Peasants_C_SpawnGlassLids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ClementineTalk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::ClementineTalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ClementineTalk");
		
		ABP_Upgrades_Peasants_C_ClementineTalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ClementineTalkEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::ClementineTalkEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ClementineTalkEnd");
		
		ABP_Upgrades_Peasants_C_ClementineTalkEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ShowBasket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_Peasants_C::ShowBasket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ShowBasket");
		
		ABP_Upgrades_Peasants_C_ShowBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ExecuteUbergraph_BP_Upgrades_Peasants
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_Peasants_C::ExecuteUbergraph_BP_Upgrades_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades_Peasants.BP_Upgrades_Peasants_C.ExecuteUbergraph_BP_Upgrades_Peasants");
		
		ABP_Upgrades_Peasants_C_ExecuteUbergraph_BP_Upgrades_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Upgrades_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Upgrades_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Upgrades_Peasants.BP_Upgrades_Peasants_C");
		return ptr;
	}

}


