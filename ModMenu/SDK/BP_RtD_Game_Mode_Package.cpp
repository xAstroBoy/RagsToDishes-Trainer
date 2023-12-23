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
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.CheckAchievements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<Enum_Achievements>                          NewAchievements                                            (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_RtD_Game_Mode_C::CheckAchievements(TArray<Enum_Achievements>* NewAchievements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.CheckAchievements");
		
		ABP_RtD_Game_Mode_C_CheckAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewAchievements != nullptr)
			*NewAchievements = params.NewAchievements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveAchievements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::SaveAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveAchievements");
		
		ABP_RtD_Game_Mode_C_SaveAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.LoadGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::LoadGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.LoadGame");
		
		ABP_RtD_Game_Mode_C_LoadGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.SaveGame");
		
		ABP_RtD_Game_Mode_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UserConstructionScript");
		
		ABP_RtD_Game_Mode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ReceiveBeginPlay");
		
		ABP_RtD_Game_Mode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Peasants
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::StartStage_Peasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Peasants");
		
		ABP_RtD_Game_Mode_C_StartStage_Peasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Nobles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::StartStage_Nobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Nobles");
		
		ABP_RtD_Game_Mode_C_StartStage_Nobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Royals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::StartStage_Royals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.StartStage_Royals");
		
		ABP_RtD_Game_Mode_C_StartStage_Royals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UpdateTutorialsAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_RtD_Game_Mode_C::UpdateTutorialsAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.UpdateTutorialsAchievement");
		
		ABP_RtD_Game_Mode_C_UpdateTutorialsAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ExecuteUbergraph_BP_RtD_Game_Mode
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RtD_Game_Mode_C::ExecuteUbergraph_BP_RtD_Game_Mode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RtD_Game_Mode.BP_RtD_Game_Mode_C.ExecuteUbergraph_BP_RtD_Game_Mode");
		
		ABP_RtD_Game_Mode_C_ExecuteUbergraph_BP_RtD_Game_Mode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RtD_Game_Mode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RtD_Game_Mode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RtD_Game_Mode.BP_RtD_Game_Mode_C");
		return ptr;
	}

}


