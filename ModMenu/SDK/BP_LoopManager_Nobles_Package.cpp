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
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnStartOfLoopUI
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeveledUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_StartOfLoop_UI_C*                        Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnStartOfLoopUI");
		
		ABP_LoopManager_Nobles_C_SpawnStartOfLoopUI_Params params {};
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
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnLoopMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_InLoopMenu                                    MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EndOfStage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_InLoop_Selection_Menu_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnLoopMenu");
		
		ABP_LoopManager_Nobles_C_SpawnLoopMenu_Params params {};
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
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckStoryLevel(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel");
		
		ABP_LoopManager_Nobles_C_CheckStoryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel_Nobles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckStoryLevel_Nobles(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckStoryLevel_Nobles");
		
		ABP_LoopManager_Nobles_C_CheckStoryLevel_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel_Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupLevel_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel_Nobles");
		
		ABP_LoopManager_Nobles_C_SetupLevel_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBonusCustomer_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupBonusCustomer_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBonusCustomer_Nobles");
		
		ABP_LoopManager_Nobles_C_SetupBonusCustomer_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBird_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupBird_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupBird_Nobles");
		
		ABP_LoopManager_Nobles_C_SetupBird_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::ResetValues_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues_Nobles");
		
		ABP_LoopManager_Nobles_C_ResetValues_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart_Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::SetupLoopStart_Nobles(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart_Nobles");
		
		ABP_LoopManager_Nobles_C_SetupLoopStart_Nobles_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::LoadGame_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame_Nobles");
		
		ABP_LoopManager_Nobles_C_LoadGame_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame_Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SaveGame_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame_Nobles");
		
		ABP_LoopManager_Nobles_C_SaveGame_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences_Nobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupReferences_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences_Nobles");
		
		ABP_LoopManager_Nobles_C_SetupReferences_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::CollectStats_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats_Nobles");
		
		ABP_LoopManager_Nobles_C_CollectStats_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckUpgradeLevel(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel");
		
		ABP_LoopManager_Nobles_C_CheckUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel_Nobles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckUpgradeLevel_Nobles(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckUpgradeLevel_Nobles");
		
		ABP_LoopManager_Nobles_C_CheckUpgradeLevel_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpdateUpgradesArray_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray_Nobles");
		
		ABP_LoopManager_Nobles_C_UpdateUpgradesArray_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckAchievements(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements");
		
		ABP_LoopManager_Nobles_C_CheckAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements_Nobles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckAchievements_Nobles(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckAchievements_Nobles");
		
		ABP_LoopManager_Nobles_C_CheckAchievements_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment_Nobles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::RemoveEquipment_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment_Nobles");
		
		ABP_LoopManager_Nobles_C_RemoveEquipment_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateSaveEvents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Nobles                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::UpdateSaveEvents(Enum_Upgrade_Levels_Nobles UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateSaveEvents");
		
		ABP_LoopManager_Nobles_C_UpdateSaveEvents_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradeStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpdateUpgradeStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradeStats");
		
		ABP_LoopManager_Nobles_C_UpdateUpgradeStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckForNewUpgrades
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewUpgrades                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::CheckForNewUpgrades(bool* NewUpgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CheckForNewUpgrades");
		
		ABP_LoopManager_Nobles_C_CheckForNewUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewUpgrades != nullptr)
			*NewUpgrades = params.NewUpgrades;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UserConstructionScript");
		
		ABP_LoopManager_Nobles_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeOven1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven1");
		
		ABP_LoopManager_Nobles_C_UpgradeOven1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeOven2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Oven2");
		
		ABP_LoopManager_Nobles_C_UpgradeOven2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Rotisserie1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeRotisserie1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Rotisserie1");
		
		ABP_LoopManager_Nobles_C_UpgradeRotisserie1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeStewPot1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot1");
		
		ABP_LoopManager_Nobles_C_UpgradeStewPot1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeStewPot2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:StewPot2");
		
		ABP_LoopManager_Nobles_C_UpgradeStewPot2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradePieDish1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish1");
		
		ABP_LoopManager_Nobles_C_UpgradePieDish1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradePieDish2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:PieDish2");
		
		ABP_LoopManager_Nobles_C_UpgradePieDish2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:DrinkBarrels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeDrinkBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:DrinkBarrels");
		
		ABP_LoopManager_Nobles_C_UpgradeDrinkBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Knife
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Knife");
		
		ABP_LoopManager_Nobles_C_UpgradeKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Seasoning2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeSeasoning2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:Seasoning2");
		
		ABP_LoopManager_Nobles_C_UpgradeSeasoning2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockPie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UnlockPie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockPie");
		
		ABP_LoopManager_Nobles_C_UnlockPie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockWine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UnlockWine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockWine");
		
		ABP_LoopManager_Nobles_C_UnlockWine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockSalt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UnlockSalt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockSalt");
		
		ABP_LoopManager_Nobles_C_UnlockSalt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockStew
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UnlockStew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockStew");
		
		ABP_LoopManager_Nobles_C_UnlockStew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockFish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UnlockFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UnlockFish");
		
		ABP_LoopManager_Nobles_C_UnlockFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeKitchenDecorations1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations1");
		
		ABP_LoopManager_Nobles_C_UpgradeKitchenDecorations1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeKitchenDecorations2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:KitchenDecorations2");
		
		ABP_LoopManager_Nobles_C_UpgradeKitchenDecorations2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StartOfGame_Story
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::EndStartOfGame_Story()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StartOfGame_Story");
		
		ABP_LoopManager_Nobles_C_EndStartOfGame_Story_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Play:StoryPoints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Nobles                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::PlayStoryPoints(Enum_Upgrade_Levels_Nobles UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Play:StoryPoints");
		
		ABP_LoopManager_Nobles_C_PlayStoryPoints_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Nobles                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::EndStoryPoint(Enum_Upgrade_Levels_Nobles UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:StoryPoint");
		
		ABP_LoopManager_Nobles_C_EndStoryPoint_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.BeginNobles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::BeginNobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.BeginNobles");
		
		ABP_LoopManager_Nobles_C_BeginNobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:FreeSampleTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::EndFreeSampleTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.End:FreeSampleTutorial");
		
		ABP_LoopManager_Nobles_C_EndFreeSampleTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:FreeSample
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeFreeSample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:FreeSample");
		
		ABP_LoopManager_Nobles_C_UpgradeFreeSample_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:CustomerPatience
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpgradeCustomerPatience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Upgrade:CustomerPatience");
		
		ABP_LoopManager_Nobles_C_UpgradeCustomerPatience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::StartReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartReferences");
		
		ABP_LoopManager_Nobles_C_StartReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:NewGameKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupNewGameKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:NewGameKitchen");
		
		ABP_LoopManager_Nobles_C_SetupNewGameKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:StageStartStoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SpawnStageStartStoryPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:StageStartStoryPoint");
		
		ABP_LoopManager_Nobles_C_SpawnStageStartStoryPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::StartGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StartGameSystems");
		
		ABP_LoopManager_Nobles_C_StartGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StopGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::StopGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.StopGameSystems");
		
		ABP_LoopManager_Nobles_C_StopGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:FreeSampleTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SpawnFreeSampleTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:FreeSampleTutorial");
		
		ABP_LoopManager_Nobles_C_SpawnFreeSampleTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::OpenCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.OpenCurtain");
		
		ABP_LoopManager_Nobles_C_OpenCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::CloseCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CloseCurtain");
		
		ABP_LoopManager_Nobles_C_CloseCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SpawnEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfStageEvent");
		
		ABP_LoopManager_Nobles_C_SpawnEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetDeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::ResetDeliveryBay(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetDeliveryBay");
		
		ABP_LoopManager_Nobles_C_ResetDeliveryBay_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::DestroyEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:EndOfStageEvent");
		
		ABP_LoopManager_Nobles_C_DestroyEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CompleteUpgradeOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::CompleteUpgradeOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CompleteUpgradeOrder");
		
		ABP_LoopManager_Nobles_C_CompleteUpgradeOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:DeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::DestroyDeliveryBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Destroy:DeliveryBay");
		
		ABP_LoopManager_Nobles_C_DestroyDeliveryBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:BossKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupBossKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup:BossKitchen");
		
		ABP_LoopManager_Nobles_C_SetupBossKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.GeneratePseudoTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::GeneratePseudoTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.GeneratePseudoTime");
		
		ABP_LoopManager_Nobles_C_GeneratePseudoTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::RemoveEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.RemoveEquipment");
		
		ABP_LoopManager_Nobles_C_RemoveEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::UpdateUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.UpdateUpgradesArray");
		
		ABP_LoopManager_Nobles_C_UpdateUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::CollectStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.CollectStats");
		
		ABP_LoopManager_Nobles_C_CollectStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupReferences");
		
		ABP_LoopManager_Nobles_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SaveGame");
		
		ABP_LoopManager_Nobles_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.LoadGame");
		
		ABP_LoopManager_Nobles_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Story                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Nobles_C::SetupLoopStart(bool Story)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLoopStart");
		
		ABP_LoopManager_Nobles_C_SetupLoopStart_Params params {};
		params.Story = Story;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::ResetValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ResetValues");
		
		ABP_LoopManager_Nobles_C_ResetValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_Bird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::Setup_Bird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_Bird");
		
		ABP_LoopManager_Nobles_C_Setup_Bird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_BonusCustomer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::Setup_BonusCustomer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Setup_BonusCustomer");
		
		ABP_LoopManager_Nobles_C_Setup_BonusCustomer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SetupLevel");
		
		ABP_LoopManager_Nobles_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfLoopStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SpawnEndOfLoopStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.Spawn:EndOfLoopStats");
		
		ABP_LoopManager_Nobles_C_SpawnEndOfLoopStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnBird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Nobles_C::SpawnBird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.SpawnBird");
		
		ABP_LoopManager_Nobles_C_SpawnBird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ExecuteUbergraph_BP_LoopManager_Nobles
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Nobles_C::ExecuteUbergraph_BP_LoopManager_Nobles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Nobles.BP_LoopManager_Nobles_C.ExecuteUbergraph_BP_LoopManager_Nobles");
		
		ABP_LoopManager_Nobles_C_ExecuteUbergraph_BP_LoopManager_Nobles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LoopManager_Nobles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LoopManager_Nobles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoopManager_Nobles.BP_LoopManager_Nobles_C");
		return ptr;
	}

}


