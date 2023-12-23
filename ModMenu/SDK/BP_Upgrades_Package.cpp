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
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SpawnGlassLids
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::SpawnGlassLids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SpawnGlassLids");
		
		ABP_Upgrades_C_SpawnGlassLids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SetUpgradesOnShelf
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComingSoon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_C::SetUpgradesOnShelf(int32_t Index, class UStaticMeshComponent* Banner, bool* ComingSoon, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SetUpgradesOnShelf");
		
		ABP_Upgrades_C_SetUpgradesOnShelf_Params params {};
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
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.GetUpgradeInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        UpgradeName                                                (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Upgraded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Contains                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_C::GetUpgradeInfo(int32_t Index, class FText* UpgradeName, int32_t* Cost, bool* Upgraded, bool* Contains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.GetUpgradeInfo");
		
		ABP_Upgrades_C_GetUpgradeInfo_Params params {};
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
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.RemoveUpgrade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::RemoveUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.RemoveUpgrade");
		
		ABP_Upgrades_C_RemoveUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_RemoveToBasket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_C::GetMoneyStats_RemoveToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, bool* FreeSample, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_RemoveToBasket");
		
		ABP_Upgrades_C_GetMoneyStats_RemoveToBasket_Params params {};
		
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
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_AddToBasket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MoneyAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneySpent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FreeSample                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Upgrades_C::GetMoneyStats_AddToBasket(bool* Valid, int32_t* MoneyAvailable, int32_t* MoneySpent, class FText* Name, int32_t* Cost, bool* FreeSample)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.GetMoneyStats_AddToBasket");
		
		ABP_Upgrades_C_GetMoneyStats_AddToBasket_Params params {};
		
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
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.UserConstructionScript");
		
		ABP_Upgrades_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Upgrades_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ReceiveBeginPlay");
		
		ABP_Upgrades_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UpgradeCounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_C::ToggleUpgrade(int32_t UpgradeCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrade");
		
		ABP_Upgrades_C_ToggleUpgrade_Params params {};
		params.UpgradeCounter = UpgradeCounter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Forward
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::ToggleUpgradesForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Forward");
		
		ABP_Upgrades_C_ToggleUpgradesForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Backward
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::ToggleUpgradesBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ToggleUpgrades:Backward");
		
		ABP_Upgrades_C_ToggleUpgradesBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SetupUpgradePriceTag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::SetupUpgradePriceTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SetupUpgradePriceTag");
		
		ABP_Upgrades_C_SetupUpgradePriceTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.AddOrderToBasket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::AddOrderToBasket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.AddOrderToBasket");
		
		ABP_Upgrades_C_AddOrderToBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.RemoveUpgradeFromBasket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::RemoveUpgradeFromBasket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.RemoveUpgradeFromBasket");
		
		ABP_Upgrades_C_RemoveUpgradeFromBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.EndUpgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::EndUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.EndUpgrades");
		
		ABP_Upgrades_C_EndUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ResetUpgradesOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::ResetUpgradesOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ResetUpgradesOrder");
		
		ABP_Upgrades_C_ResetUpgradesOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.RotateMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::RotateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.RotateMesh");
		
		ABP_Upgrades_C_RotateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Upgrades_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Upgrades_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SetupReferences
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SetupReferences");
		
		ABP_Upgrades_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SpawnBook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::SpawnBook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SpawnBook");
		
		ABP_Upgrades_C_SpawnBook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.EndEvent");
		
		ABP_Upgrades_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.FinishReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::FinishReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.FinishReset");
		
		ABP_Upgrades_C_FinishReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.SetUpgradesArray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::SetUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.SetUpgradesArray");
		
		ABP_Upgrades_C_SetUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ShowBasket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Upgrades_C::ShowBasket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ShowBasket");
		
		ABP_Upgrades_C_ShowBasket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Upgrades.BP_Upgrades_C.ExecuteUbergraph_BP_Upgrades
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Upgrades_C::ExecuteUbergraph_BP_Upgrades(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Upgrades.BP_Upgrades_C.ExecuteUbergraph_BP_Upgrades");
		
		ABP_Upgrades_C_ExecuteUbergraph_BP_Upgrades_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Upgrades_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Upgrades_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Upgrades.BP_Upgrades_C");
		return ptr;
	}

}


