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
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnStartOfLoopUI
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeveledUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_StartOfLoop_UI_C*                        Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Peasants_C::SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnStartOfLoopUI");
		
		ABP_LoopManager_Peasants_C_SpawnStartOfLoopUI_Params params {};
		params.LeveledUp = LeveledUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnLoopMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_InLoopMenu                                    MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EndOfStage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_InLoop_Selection_Menu_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Peasants_C::SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnLoopMenu");
		
		ABP_LoopManager_Peasants_C_SpawnLoopMenu_Params params {};
		params.Transform = Transform;
		params.MenuOption = MenuOption;
		params.EndOfStage = EndOfStage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckAchievements(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements");
		
		ABP_LoopManager_Peasants_C_CheckAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckUpgradeLevel(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel");
		
		ABP_LoopManager_Peasants_C_CheckUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckStoryLevel(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel");
		
		ABP_LoopManager_Peasants_C_CheckStoryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel_Peasants
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckStoryLevel_Peasants(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckStoryLevel_Peasants");
		
		ABP_LoopManager_Peasants_C_CheckStoryLevel_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpdateUpgradesStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesStats");
		
		ABP_LoopManager_Peasants_C_UpdateUpgradesStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel_Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupLevel_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel_Peasants");
		
		ABP_LoopManager_Peasants_C_SetupLevel_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::Setup_BonusCustomer_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer_Peasants");
		
		ABP_LoopManager_Peasants_C_Setup_BonusCustomer_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::Setup_Bird_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird_Peasants");
		
		ABP_LoopManager_Peasants_C_Setup_Bird_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart_Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::SetupLoopStart_Peasants(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart_Peasants");
		
		ABP_LoopManager_Peasants_C_SetupLoopStart_Peasants_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::ResetValues_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues_Peasants");
		
		ABP_LoopManager_Peasants_C_ResetValues_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckForNewUpgrades
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewUpgrades                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckForNewUpgrades(bool* NewUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckForNewUpgrades");
		
		ABP_LoopManager_Peasants_C_CheckForNewUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewUpgrades != nullptr)
			*NewUpgrades = params.NewUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::LoadGame_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame_Peasants");
		
		ABP_LoopManager_Peasants_C_LoadGame_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame_Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SaveGame_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame_Peasants");
		
		ABP_LoopManager_Peasants_C_SaveGame_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences_Peasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupReferences_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences_Peasants");
		
		ABP_LoopManager_Peasants_C_SetupReferences_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel_Peasants
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckUpgradeLevel_Peasants(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckUpgradeLevel_Peasants");
		
		ABP_LoopManager_Peasants_C_CheckUpgradeLevel_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements_Peasants
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::CheckAchievements_Peasants(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CheckAchievements_Peasants");
		
		ABP_LoopManager_Peasants_C_CheckAchievements_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::CollectStats_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats_Peasants");
		
		ABP_LoopManager_Peasants_C_CollectStats_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpdateUpgradesArray_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray_Peasants");
		
		ABP_LoopManager_Peasants_C_UpdateUpgradesArray_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment_Peasants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::RemoveEquipment_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment_Peasants");
		
		ABP_LoopManager_Peasants_C_RemoveEquipment_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UserConstructionScript");
		
		ABP_LoopManager_Peasants_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Oatmeal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockOatmeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Oatmeal");
		
		ABP_LoopManager_Peasants_C_UnlockOatmeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Cheese
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockCheese()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Cheese");
		
		ABP_LoopManager_Peasants_C_UnlockCheese_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockSoup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup");
		
		ABP_LoopManager_Peasants_C_UnlockSoup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockPottage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage");
		
		ABP_LoopManager_Peasants_C_UnlockPottage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Dough
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeDough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Dough");
		
		ABP_LoopManager_Peasants_C_UpgradeDough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Ale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockAle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Ale");
		
		ABP_LoopManager_Peasants_C_UnlockAle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeOven1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven1");
		
		ABP_LoopManager_Peasants_C_UpgradeOven1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeGrill1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill1");
		
		ABP_LoopManager_Peasants_C_UpgradeGrill1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeSoupPot1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot1");
		
		ABP_LoopManager_Peasants_C_UpgradeSoupPot1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeOatmealPot1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot1");
		
		ABP_LoopManager_Peasants_C_UpgradeOatmealPot1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockSoup2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Soup2");
		
		ABP_LoopManager_Peasants_C_UnlockSoup2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UnlockPottage2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Unlock:Pottage2");
		
		ABP_LoopManager_Peasants_C_UnlockPottage2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeOven2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Oven2");
		
		ABP_LoopManager_Peasants_C_UpgradeOven2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeOatmealPot2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:OatmealPot2");
		
		ABP_LoopManager_Peasants_C_UpgradeOatmealPot2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeGrill2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:Grill2");
		
		ABP_LoopManager_Peasants_C_UpgradeGrill2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeSoupPot2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:SoupPot2");
		
		ABP_LoopManager_Peasants_C_UpgradeSoupPot2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeKitchenDecorations1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations1");
		
		ABP_LoopManager_Peasants_C_UpgradeKitchenDecorations1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpgradeKitchenDecorations2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Upgrade:KitchenDecorations2");
		
		ABP_LoopManager_Peasants_C_UpgradeKitchenDecorations2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StartOfGame_Story
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::EndStartOfGame_Story()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StartOfGame_Story");
		
		ABP_LoopManager_Peasants_C_EndStartOfGame_Story_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Play:StoryPoints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Peasants                       UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Peasants_C::PlayStoryPoints(Enum_Upgrade_Levels_Peasants UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Play:StoryPoints");
		
		ABP_LoopManager_Peasants_C_PlayStoryPoints_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Peasants                       UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Peasants_C::EndStoryPoint(Enum_Upgrade_Levels_Peasants UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:StoryPoint");
		
		ABP_LoopManager_Peasants_C_EndStoryPoint_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.BeginPeasants
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::BeginPeasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.BeginPeasants");
		
		ABP_LoopManager_Peasants_C_BeginPeasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:UpgradeShopTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::EndUpgradeShopTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.End:UpgradeShopTutorial");
		
		ABP_LoopManager_Peasants_C_EndUpgradeShopTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::StartReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartReferences");
		
		ABP_LoopManager_Peasants_C_StartReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:NewGameKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupNewGameKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:NewGameKitchen");
		
		ABP_LoopManager_Peasants_C_SetupNewGameKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:StageStartStoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SpawnStageStartStoryPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:StageStartStoryPoint");
		
		ABP_LoopManager_Peasants_C_SpawnStageStartStoryPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLevel");
		
		ABP_LoopManager_Peasants_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::UpdateUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.UpdateUpgradesArray");
		
		ABP_LoopManager_Peasants_C_UpdateUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Story                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::SetupLoopStart(bool Story)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupLoopStart");
		
		ABP_LoopManager_Peasants_C_SetupLoopStart_Params params {};
		params.Story = Story;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::ResetValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetValues");
		
		ABP_LoopManager_Peasants_C_ResetValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::StartGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StartGameSystems");
		
		ABP_LoopManager_Peasants_C_StartGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StopGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::StopGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.StopGameSystems");
		
		ABP_LoopManager_Peasants_C_StopGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::Setup_Bird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_Bird");
		
		ABP_LoopManager_Peasants_C_Setup_Bird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::Setup_BonusCustomer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup_BonusCustomer");
		
		ABP_LoopManager_Peasants_C_Setup_BonusCustomer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.GeneratePseudoTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::GeneratePseudoTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.GeneratePseudoTime");
		
		ABP_LoopManager_Peasants_C_GeneratePseudoTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetDeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Peasants_C::ResetDeliveryBay(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ResetDeliveryBay");
		
		ABP_LoopManager_Peasants_C_ResetDeliveryBay_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::OpenCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.OpenCurtain");
		
		ABP_LoopManager_Peasants_C_OpenCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SpawnEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfStageEvent");
		
		ABP_LoopManager_Peasants_C_SpawnEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::CollectStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CollectStats");
		
		ABP_LoopManager_Peasants_C_CollectStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::CloseCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CloseCurtain");
		
		ABP_LoopManager_Peasants_C_CloseCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::RemoveEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.RemoveEquipment");
		
		ABP_LoopManager_Peasants_C_RemoveEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::DestroyEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:EndOfStageEvent");
		
		ABP_LoopManager_Peasants_C_DestroyEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:DeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::DestroyDeliveryBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Destroy:DeliveryBay");
		
		ABP_LoopManager_Peasants_C_DestroyDeliveryBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:BossKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupBossKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Setup:BossKitchen");
		
		ABP_LoopManager_Peasants_C_SetupBossKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SetupReferences");
		
		ABP_LoopManager_Peasants_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CompleteUpgradeOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::CompleteUpgradeOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.CompleteUpgradeOrder");
		
		ABP_LoopManager_Peasants_C_CompleteUpgradeOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SaveGame");
		
		ABP_LoopManager_Peasants_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.LoadGame");
		
		ABP_LoopManager_Peasants_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfLoopStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SpawnEndOfLoopStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.Spawn:EndOfLoopStats");
		
		ABP_LoopManager_Peasants_C_SpawnEndOfLoopStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnBird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Peasants_C::SpawnBird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.SpawnBird");
		
		ABP_LoopManager_Peasants_C_SpawnBird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ExecuteUbergraph_BP_LoopManager_Peasants
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Peasants_C::ExecuteUbergraph_BP_LoopManager_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Peasants.BP_LoopManager_Peasants_C.ExecuteUbergraph_BP_LoopManager_Peasants");
		
		ABP_LoopManager_Peasants_C_ExecuteUbergraph_BP_LoopManager_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LoopManager_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LoopManager_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoopManager_Peasants.BP_LoopManager_Peasants_C");
		return ptr;
	}

}


