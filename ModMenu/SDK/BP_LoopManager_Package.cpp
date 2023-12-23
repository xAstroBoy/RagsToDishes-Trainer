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
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SpawnStartOfLoopUI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeveledUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_StartOfLoop_UI_C*                        Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::SpawnStartOfLoopUI(bool LeveledUp, class ABP_StartOfLoop_UI_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SpawnStartOfLoopUI");
		
		ABP_LoopManager_C_SpawnStartOfLoopUI_Params params {};
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
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SpawnBird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnBird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SpawnBird");
		
		ABP_LoopManager_C_SpawnBird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SpawnLoopMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		Enum_InLoopMenu                                    MenuOption                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EndOfStage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_InLoop_Selection_Menu_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::SpawnLoopMenu(const struct FTransform& Transform, Enum_InLoopMenu MenuOption, bool EndOfStage, class ABP_InLoop_Selection_Menu_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SpawnLoopMenu");
		
		ABP_LoopManager_C_SpawnLoopMenu_Params params {};
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
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Check_5_Consecutive_Fast_Orders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OriginalTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeliveryTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::Check_5_Consecutive_Fast_Orders(float OriginalTime, float DeliveryTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Check_5_Consecutive_Fast_Orders");
		
		ABP_LoopManager_C_Check_5_Consecutive_Fast_Orders_Params params {};
		params.OriginalTime = OriginalTime;
		params.DeliveryTime = DeliveryTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Check_10_Consecutive_Happy_Customers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HappyCustomer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::Check_10_Consecutive_Happy_Customers(bool HappyCustomer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Check_10_Consecutive_Happy_Customers");
		
		ABP_LoopManager_C_Check_10_Consecutive_Happy_Customers_Params params {};
		params.HappyCustomer = HappyCustomer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Check
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::LoopBonusCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Check");
		
		ABP_LoopManager_C_LoopBonusCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoadGame");
		
		ABP_LoopManager_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SaveGame");
		
		ABP_LoopManager_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SetupReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SetupReferences");
		
		ABP_LoopManager_C_SetupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.RemoveEquipment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::RemoveEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.RemoveEquipment");
		
		ABP_LoopManager_C_RemoveEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CollectStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::CollectStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CollectStats");
		
		ABP_LoopManager_C_CollectStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CheckAchievements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AchievementUnlocked                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::CheckAchievements(bool* AchievementUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CheckAchievements");
		
		ABP_LoopManager_C_CheckAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AchievementUnlocked != nullptr)
			*AchievementUnlocked = params.AchievementUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.GeneratePseudoTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::GeneratePseudoTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.GeneratePseudoTime");
		
		ABP_LoopManager_C_GeneratePseudoTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Setup_BonusCustomer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::Setup_BonusCustomer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Setup_BonusCustomer");
		
		ABP_LoopManager_C_Setup_BonusCustomer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Setup_Bird
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::Setup_Bird()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Setup_Bird");
		
		ABP_LoopManager_C_Setup_Bird_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::LoopBonusActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoopBonus:Activate");
		
		ABP_LoopManager_C_LoopBonusActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.ResetValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::ResetValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.ResetValues");
		
		ABP_LoopManager_C_ResetValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CheckUpgradeLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UnlockedLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::CheckUpgradeLevel(bool* UnlockedLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CheckUpgradeLevel");
		
		ABP_LoopManager_C_CheckUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevel != nullptr)
			*UnlockedLevel = params.UnlockedLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CheckStoryLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowStoryPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::CheckStoryLevel(bool* ShowStoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CheckStoryLevel");
		
		ABP_LoopManager_C_CheckStoryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStoryPoint != nullptr)
			*ShowStoryPoint = params.ShowStoryPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SetupLoopStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Story                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::SetupLoopStart(bool Story)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SetupLoopStart");
		
		ABP_LoopManager_C_SetupLoopStart_Params params {};
		params.Story = Story;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.UpdateUpgradesArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::UpdateUpgradesArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.UpdateUpgradesArray");
		
		ABP_LoopManager_C_UpdateUpgradesArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SetupLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SetupLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SetupLevel");
		
		ABP_LoopManager_C_SetupLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.StartReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::StartReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.StartReferences");
		
		ABP_LoopManager_C_StartReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.UserConstructionScript");
		
		ABP_LoopManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		ABP_LoopManager_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.MusicTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Music                                         To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::MusicTransition(Enum_Music To)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.MusicTransition");
		
		ABP_LoopManager_C_MusicTransition_Params params {};
		params.To = To;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SetupStartOfLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeveledUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EndOfLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::SetupStartOfLoop(bool LeveledUp, bool EndOfLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SetupStartOfLoop");
		
		ABP_LoopManager_C_SetupStartOfLoop_Params params {};
		params.LeveledUp = LeveledUp;
		params.EndOfLoop = EndOfLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.ShowStartMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::ShowStartMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.ShowStartMenu");
		
		ABP_LoopManager_C_ShowStartMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.SetupStage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Game_Stages                                   Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StageString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::SetupStage(Enum_Game_Stages Stage, const class FString& StageString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.SetupStage");
		
		ABP_LoopManager_C_SetupStage_Params params {};
		params.Stage = Stage;
		params.StageString = StageString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Spawn:StageStartStoryPoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnStageStartStoryPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Spawn:StageStartStoryPoint");
		
		ABP_LoopManager_C_SpawnStageStartStoryPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Setup:NewGameKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SetupNewGameKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Setup:NewGameKitchen");
		
		ABP_LoopManager_C_SetupNewGameKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.StopGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::StopGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.StopGameSystems");
		
		ABP_LoopManager_C_StopGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.StartGameSystems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::StartGameSystems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.StartGameSystems");
		
		ABP_LoopManager_C_StartGameSystems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.RushHourEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::RushHourEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.RushHourEffect");
		
		ABP_LoopManager_C_RushHourEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.PlayLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::PlayLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.PlayLoop");
		
		ABP_LoopManager_C_PlayLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CheckLoopComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OrdersCompleted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::CheckLoopComplete(bool OrdersCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CheckLoopComplete");
		
		ABP_LoopManager_C_CheckLoopComplete_Params params {};
		params.OrdersCompleted = OrdersCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.ResetPlayLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::ResetPlayLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.ResetPlayLoop");
		
		ABP_LoopManager_C_ResetPlayLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.ResetDeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::ResetDeliveryBay(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.ResetDeliveryBay");
		
		ABP_LoopManager_C_ResetDeliveryBay_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::OpenCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.OpenCurtain");
		
		ABP_LoopManager_C_OpenCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageEvent");
		
		ABP_LoopManager_C_SpawnEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.EndOfLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::EndOfLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.EndOfLoop");
		
		ABP_LoopManager_C_EndOfLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfLoopStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnEndOfLoopStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfLoopStats");
		
		ABP_LoopManager_C_SpawnEndOfLoopStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.EndOfLoopUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::EndOfLoopUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.EndOfLoopUI");
		
		ABP_LoopManager_C_EndOfLoopUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Setup:NewLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SetupNewLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Setup:NewLoop");
		
		ABP_LoopManager_C_SetupNewLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::CloseCurtain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CloseCurtain");
		
		ABP_LoopManager_C_CloseCurtain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Reset:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RoundNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OldLadyActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::ResetEndOfStageEvent(int32_t RoundNumber, bool OldLadyActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Reset:EndOfStageEvent");
		
		ABP_LoopManager_C_ResetEndOfStageEvent_Params params {};
		params.RoundNumber = RoundNumber;
		params.OldLadyActive = OldLadyActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Destroy:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::DestroyEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Destroy:EndOfStageEvent");
		
		ABP_LoopManager_C_DestroyEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Play:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::PlayEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Play:EndOfStageEvent");
		
		ABP_LoopManager_C_PlayEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.End:EndOfStageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::EndEndOfStageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.End:EndOfStageEvent");
		
		ABP_LoopManager_C_EndEndOfStageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Completed:EndOfStage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::CompletedEndOfStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Completed:EndOfStage");
		
		ABP_LoopManager_C_CompletedEndOfStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnEndOfStageStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Spawn:EndOfStageStats");
		
		ABP_LoopManager_C_SpawnEndOfStageStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Destroy:DeliveryBay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::DestroyDeliveryBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Destroy:DeliveryBay");
		
		ABP_LoopManager_C_DestroyDeliveryBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Setup:BossKitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SetupBossKitchen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Setup:BossKitchen");
		
		ABP_LoopManager_C_SetupBossKitchen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.PauseGame-Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::PauseGameActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.PauseGame-Activate");
		
		ABP_LoopManager_C_PauseGameActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.PauseGame-Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::PauseGameDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.PauseGame-Deactivate");
		
		ABP_LoopManager_C_PauseGameDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Equipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EndOfLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::LoadLevelEquipment(bool StoryPoint, bool EndOfLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Equipment");
		
		ABP_LoopManager_C_LoadLevelEquipment_Params params {};
		params.StoryPoint = StoryPoint;
		params.EndOfLoop = EndOfLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Upgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::LoadLevelUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoadLevel:Upgrades");
		
		ABP_LoopManager_C_LoadLevelUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Equipment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_LevelStreaming                                LoadLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EndOfLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::UnloadLevelEquipment(Enum_LevelStreaming LoadLevel, bool StoryPoint, bool EndOfLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Equipment");
		
		ABP_LoopManager_C_UnloadLevelEquipment_Params params {};
		params.LoadLevel = LoadLevel;
		params.StoryPoint = StoryPoint;
		params.EndOfLoop = EndOfLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LevelStreaming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_LevelStreaming                                UnloadLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_LevelStreaming                                LoadLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EndOfLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::LevelStreaming(Enum_LevelStreaming UnloadLevel, Enum_LevelStreaming LoadLevel, bool StoryPoint, bool EndOfLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LevelStreaming");
		
		ABP_LoopManager_C_LevelStreaming_Params params {};
		params.UnloadLevel = UnloadLevel;
		params.LoadLevel = LoadLevel;
		params.StoryPoint = StoryPoint;
		params.EndOfLoop = EndOfLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Upgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EndOfLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LoopManager_C::UnloadLevelUpgrades(bool EndOfLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.UnloadLevel:Upgrades");
		
		ABP_LoopManager_C_UnloadLevelUpgrades_Params params {};
		params.EndOfLoop = EndOfLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.CompleteUpgradeOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::CompleteUpgradeOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.CompleteUpgradeOrder");
		
		ABP_LoopManager_C_CompleteUpgradeOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.Spawn:FreeSampleTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::SpawnFreeSampleTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.Spawn:FreeSampleTutorial");
		
		ABP_LoopManager_C_SpawnFreeSampleTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.LoadPlayerInLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LoopManager_C::LoadPlayerInLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.LoadPlayerInLevel");
		
		ABP_LoopManager_C_LoadPlayerInLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_LoopManager.BP_LoopManager_C.ExecuteUbergraph_BP_LoopManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LoopManager_C::ExecuteUbergraph_BP_LoopManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoopManager.BP_LoopManager_C.ExecuteUbergraph_BP_LoopManager");
		
		ABP_LoopManager_C_ExecuteUbergraph_BP_LoopManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LoopManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LoopManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoopManager.BP_LoopManager_C");
		return ptr;
	}

}


