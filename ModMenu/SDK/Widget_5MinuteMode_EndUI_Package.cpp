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
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Get_MoneyEarned_Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MoneyEarned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            KnightBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BirdPenalty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_5MinuteMode_EndUI_C::Get_MoneyEarned_Setup(int32_t MoneyEarned, int32_t KnightBonus, int32_t BirdPenalty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Get_MoneyEarned_Setup");
		
		UWidget_5MinuteMode_EndUI_C_Get_MoneyEarned_Setup_Params params {};
		params.MoneyEarned = MoneyEarned;
		params.KnightBonus = KnightBonus;
		params.BirdPenalty = BirdPenalty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_EndUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Construct");
		
		UWidget_5MinuteMode_EndUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.CollectStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_EndUI_C::CollectStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.CollectStats");
		
		UWidget_5MinuteMode_EndUI_C_CollectStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.GetScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_EndUI_C::GetScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.GetScore");
		
		UWidget_5MinuteMode_EndUI_C_GetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.StopGetScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FinalScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_5MinuteMode_EndUI_C::StopGetScore(int32_t FinalScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.StopGetScore");
		
		UWidget_5MinuteMode_EndUI_C_StopGetScore_Params params {};
		params.FinalScore = FinalScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Show_HighScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_5MinuteMode_EndUI_C::Show_HighScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.Show_HighScore");
		
		UWidget_5MinuteMode_EndUI_C_Show_HighScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.ExecuteUbergraph_Widget_5MinuteMode_EndUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_5MinuteMode_EndUI_C::ExecuteUbergraph_Widget_5MinuteMode_EndUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C.ExecuteUbergraph_Widget_5MinuteMode_EndUI");
		
		UWidget_5MinuteMode_EndUI_C_ExecuteUbergraph_Widget_5MinuteMode_EndUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_5MinuteMode_EndUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_5MinuteMode_EndUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_5MinuteMode_EndUI.Widget_5MinuteMode_EndUI_C");
		return ptr;
	}

}


