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
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnStartOfLoopUI
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeveledUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_StartOfLoop_UI_C*                        Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnStartOfLoopUI");
		
		ABP_LoopManager_Royals_C_SpawnStartOfLoopUI_Params params {};
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
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnLoopMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_InLoopMenu                                    MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EndOfStage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_InLoop_Selection_Menu_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnLoopMenu");
		
		ABP_LoopManager_Royals_C_SpawnLoopMenu_Params params {};
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
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckStoryLevel(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel");
		
		ABP_LoopManager_Royals_C_CheckStoryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel_Royals
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckStoryLevel_Royals(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckStoryLevel_Royals");
		
		ABP_LoopManager_Royals_C_CheckStoryLevel_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel_Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupLevel_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel_Royals");
		
		ABP_LoopManager_Royals_C_SetupLevel_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBonusCustomer_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupBonusCustomer_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBonusCustomer_Royals");
		
		ABP_LoopManager_Royals_C_SetupBonusCustomer_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBird_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupBird_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupBird_Royals");
		
		ABP_LoopManager_Royals_C_SetupBird_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::ResetValues_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues_Royals");
		
		ABP_LoopManager_Royals_C_ResetValues_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart_Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::SetupLoopStart_Royals(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart_Royals");
		
		ABP_LoopManager_Royals_C_SetupLoopStart_Royals_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::LoadGame_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame_Royals");
		
		ABP_LoopManager_Royals_C_LoadGame_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame_Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SaveGame_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame_Royals");
		
		ABP_LoopManager_Royals_C_SaveGame_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::CollectStats_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats_Royals");
		
		ABP_LoopManager_Royals_C_CollectStats_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckUpgradeLevel(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel");
		
		ABP_LoopManager_Royals_C_CheckUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel_Royals
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckUpgradeLevel_Royals(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckUpgradeLevel_Royals");
		
		ABP_LoopManager_Royals_C_CheckUpgradeLevel_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray_Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpdateUpgradesArray_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray_Royals");
		
		ABP_LoopManager_Royals_C_UpdateUpgradesArray_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckAchievements(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements");
		
		ABP_LoopManager_Royals_C_CheckAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements_Royals
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckAchievements_Royals(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckAchievements_Royals");
		
		ABP_LoopManager_Royals_C_CheckAchievements_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment_Royals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::RemoveEquipment_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment_Royals");
		
		ABP_LoopManager_Royals_C_RemoveEquipment_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckForNewUpgrades
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::CheckForNewUpgrades(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CheckForNewUpgrades");
		
		ABP_LoopManager_Royals_C_CheckForNewUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences_Royals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupReferences_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences_Royals");
		
		ABP_LoopManager_Royals_C_SetupReferences_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateSaveEvents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Royals                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::UpdateSaveEvents(Enum_Upgrade_Levels_Royals UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateSaveEvents");
		
		ABP_LoopManager_Royals_C_UpdateSaveEvents_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpdateUpgradesStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesStats");
		
		ABP_LoopManager_Royals_C_UpdateUpgradesStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UserConstructionScript");
		
		ABP_LoopManager_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StopGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::StopGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StopGameSystems");
		
		ABP_LoopManager_Royals_C_StopGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::StartGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartGameSystems");
		
		ABP_LoopManager_Royals_C_StartGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StartOfGame_Story
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::EndStartOfGame_Story()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StartOfGame_Story");
		
		ABP_LoopManager_Royals_C_EndStartOfGame_Story_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Play:StoryPoints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Royals                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::PlayStoryPoints(Enum_Upgrade_Levels_Royals UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Play:StoryPoints");
		
		ABP_LoopManager_Royals_C_PlayStoryPoints_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Upgrade_Levels_Royals                         UpgradeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::EndStoryPoint(Enum_Upgrade_Levels_Royals UpgradeLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:StoryPoint");
		
		ABP_LoopManager_Royals_C_EndStoryPoint_Params params {};
		params.UpgradeLevel = UpgradeLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.BeginRoyals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::BeginRoyals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.BeginRoyals");
		
		ABP_LoopManager_Royals_C_BeginRoyals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:FreeSampleTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SpawnFreeSampleTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:FreeSampleTutorial");
		
		ABP_LoopManager_Royals_C_SpawnFreeSampleTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:FreeSampleTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::EndFreeSampleTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.End:FreeSampleTutorial");
		
		ABP_LoopManager_Royals_C_EndFreeSampleTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:NewGameKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupNewGameKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:NewGameKitchen");
		
		ABP_LoopManager_Royals_C_SetupNewGameKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:StageStartStoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SpawnStageStartStoryPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:StageStartStoryPoint");
		
		ABP_LoopManager_Royals_C_SpawnStageStartStoryPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::StartReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.StartReferences");
		
		ABP_LoopManager_Royals_C_StartReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupReferences");
		
		ABP_LoopManager_Royals_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SpawnEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfStageEvent");
		
		ABP_LoopManager_Royals_C_SpawnEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::OpenCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.OpenCurtain");
		
		ABP_LoopManager_Royals_C_OpenCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetDeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::ResetDeliveryBay(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetDeliveryBay");
		
		ABP_LoopManager_Royals_C_ResetDeliveryBay_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::CloseCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CloseCurtain");
		
		ABP_LoopManager_Royals_C_CloseCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::DestroyEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:EndOfStageEvent");
		
		ABP_LoopManager_Royals_C_DestroyEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:DeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::DestroyDeliveryBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Destroy:DeliveryBay");
		
		ABP_LoopManager_Royals_C_DestroyDeliveryBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:BossKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupBossKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup:BossKitchen");
		
		ABP_LoopManager_Royals_C_SetupBossKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CompleteUpgradeOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::CompleteUpgradeOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CompleteUpgradeOrder");
		
		ABP_LoopManager_Royals_C_CompleteUpgradeOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:Oven1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeOven1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:Oven1");
		
		ABP_LoopManager_Royals_C_UpgradeOven1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:PieDish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradePieDish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:PieDish");
		
		ABP_LoopManager_Royals_C_UpgradePieDish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:DrinkBarrels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeDrinkBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:DrinkBarrels");
		
		ABP_LoopManager_Royals_C_UpgradeDrinkBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockCake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UnlockCake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockCake");
		
		ABP_LoopManager_Royals_C_UnlockCake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockPlatters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UnlockPlatters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockPlatters");
		
		ABP_LoopManager_Royals_C_UnlockPlatters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockChocolate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UnlockChocolate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockChocolate");
		
		ABP_LoopManager_Royals_C_UnlockChocolate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockLobster
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UnlockLobster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UnlockLobster");
		
		ABP_LoopManager_Royals_C_UnlockLobster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CleanFruits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeCleanFruits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CleanFruits");
		
		ABP_LoopManager_Royals_C_UpgradeCleanFruits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:MeatStation1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeMeatStation1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:MeatStation1");
		
		ABP_LoopManager_Royals_C_UpgradeMeatStation1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CakeLid
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeCakeLid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:CakeLid");
		
		ABP_LoopManager_Royals_C_UpgradeCakeLid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeKitchenDecorations1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations1");
		
		ABP_LoopManager_Royals_C_UpgradeKitchenDecorations1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:RushHourBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeRushHourBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:RushHourBonus");
		
		ABP_LoopManager_Royals_C_UpgradeRushHourBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusFrequency&Patience
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeBonusFrequencyPatience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusFrequency&Patience");
		
		ABP_LoopManager_Royals_C_UpgradeBonusFrequencyPatience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeKitchenDecorations2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:KitchenDecorations2");
		
		ABP_LoopManager_Royals_C_UpgradeKitchenDecorations2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusValue&Patience
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeBonusValuePatience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:BonusValue&Patience");
		
		ABP_LoopManager_Royals_C_UpgradeBonusValuePatience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:FreeSamples
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpgradeFreeSamples()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Upgrade:FreeSamples");
		
		ABP_LoopManager_Royals_C_UpgradeFreeSamples_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::RemoveEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.RemoveEquipment");
		
		ABP_LoopManager_Royals_C_RemoveEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::UpdateUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.UpdateUpgradesArray");
		
		ABP_LoopManager_Royals_C_UpdateUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::CollectStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.CollectStats");
		
		ABP_LoopManager_Royals_C_CollectStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SaveGame");
		
		ABP_LoopManager_Royals_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.LoadGame");
		
		ABP_LoopManager_Royals_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Story                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_Royals_C::SetupLoopStart(bool Story)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLoopStart");
		
		ABP_LoopManager_Royals_C_SetupLoopStart_Params params {};
		params.Story = Story;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::ResetValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ResetValues");
		
		ABP_LoopManager_Royals_C_ResetValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_Bird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::Setup_Bird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_Bird");
		
		ABP_LoopManager_Royals_C_Setup_Bird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_BonusCustomer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::Setup_BonusCustomer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Setup_BonusCustomer");
		
		ABP_LoopManager_Royals_C_Setup_BonusCustomer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SetupLevel");
		
		ABP_LoopManager_Royals_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.GeneratePseudoTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::GeneratePseudoTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.GeneratePseudoTime");
		
		ABP_LoopManager_Royals_C_GeneratePseudoTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfLoopStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SpawnEndOfLoopStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.Spawn:EndOfLoopStats");
		
		ABP_LoopManager_Royals_C_SpawnEndOfLoopStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnBird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_Royals_C::SpawnBird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.SpawnBird");
		
		ABP_LoopManager_Royals_C_SpawnBird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ExecuteUbergraph_BP_LoopManager_Royals
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_Royals_C::ExecuteUbergraph_BP_LoopManager_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager_Royals.BP_LoopManager_Royals_C.ExecuteUbergraph_BP_LoopManager_Royals");
		
		ABP_LoopManager_Royals_C_ExecuteUbergraph_BP_LoopManager_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LoopManager_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LoopManager_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoopManager_Royals.BP_LoopManager_Royals_C");
		return ptr;
	}

}


