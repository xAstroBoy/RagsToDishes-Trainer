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
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetNoblesProgression
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            XPCollected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Incrementing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StartOfLoop_UI_C::GetNoblesProgression(int32_t XPCollected, float* Incrementing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetNoblesProgression");
		
		ABP_StartOfLoop_UI_C_GetNoblesProgression_Params params {};
		params.XPCollected = XPCollected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Incrementing != nullptr)
			*Incrementing = params.Incrementing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetRoyalsProgression
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            XPCollected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Incrementing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StartOfLoop_UI_C::GetRoyalsProgression(int32_t XPCollected, float* Incrementing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetRoyalsProgression");
		
		ABP_StartOfLoop_UI_C_GetRoyalsProgression_Params params {};
		params.XPCollected = XPCollected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Incrementing != nullptr)
			*Incrementing = params.Incrementing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetPeasantsProgression
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            XPCollected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Incrementing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StartOfLoop_UI_C::GetPeasantsProgression(int32_t XPCollected, float* Incrementing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetPeasantsProgression");
		
		ABP_StartOfLoop_UI_C_GetPeasantsProgression_Params params {};
		params.XPCollected = XPCollected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Incrementing != nullptr)
			*Incrementing = params.Incrementing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.UserConstructionScript");
		
		ABP_StartOfLoop_UI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Peasants__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Peasants__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Peasants__FinishedFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Peasants__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Peasants__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Peasants__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Peasants__UpdateFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Peasants__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Royals__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Royals__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Royals__FinishedFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Royals__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Royals__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Royals__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Royals__UpdateFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Royals__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Nobles__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Nobles__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Nobles__FinishedFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Nobles__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Nobles__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::IncrementLoopMoney_Nobles__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.IncrementLoopMoney_Nobles__UpdateFunc");
		
		ABP_StartOfLoop_UI_C_IncrementLoopMoney_Nobles__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.ReceiveBeginPlay");
		
		ABP_StartOfLoop_UI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.SpawnLoopBonusAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StartOfLoop_UI_C::SpawnLoopBonusAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.SpawnLoopBonusAchievement");
		
		ABP_StartOfLoop_UI_C_SpawnLoopBonusAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Peasants
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowProgression                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StartOfLoop_UI_C::GetMoneyCollectedLoop_Peasants(bool ShowProgression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Peasants");
		
		ABP_StartOfLoop_UI_C_GetMoneyCollectedLoop_Peasants_Params params {};
		params.ShowProgression = ShowProgression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Royals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowProgression                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StartOfLoop_UI_C::GetMoneyCollectedLoop_Royals(bool ShowProgression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Royals");
		
		ABP_StartOfLoop_UI_C_GetMoneyCollectedLoop_Royals_Params params {};
		params.ShowProgression = ShowProgression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Nobles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowProgression                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StartOfLoop_UI_C::GetMoneyCollectedLoop_Nobles(bool ShowProgression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.GetMoneyCollectedLoop_Nobles");
		
		ABP_StartOfLoop_UI_C_GetMoneyCollectedLoop_Nobles_Params params {};
		params.ShowProgression = ShowProgression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.ExecuteUbergraph_BP_StartOfLoop_UI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StartOfLoop_UI_C::ExecuteUbergraph_BP_StartOfLoop_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StartOfLoop_UI.BP_StartOfLoop_UI_C.ExecuteUbergraph_BP_StartOfLoop_UI");
		
		ABP_StartOfLoop_UI_C_ExecuteUbergraph_BP_StartOfLoop_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StartOfLoop_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StartOfLoop_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StartOfLoop_UI.BP_StartOfLoop_UI_C");
		return ptr;
	}

}


