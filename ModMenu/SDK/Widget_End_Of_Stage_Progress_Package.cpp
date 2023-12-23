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
	 * 		Name   -> Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_Progress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.Construct");
		
		UWidget_End_Of_Stage_Progress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.GetSatisfactionAndTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_Progress_C::GetSatisfactionAndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.GetSatisfactionAndTime");
		
		UWidget_End_Of_Stage_Progress_C_GetSatisfactionAndTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.Setup:Labels
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_Progress_C::SetupLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.Setup:Labels");
		
		UWidget_End_Of_Stage_Progress_C_SetupLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.StopTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_Progress_C::StopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.StopTimer");
		
		UWidget_End_Of_Stage_Progress_C_StopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.ExecuteUbergraph_Widget_End_Of_Stage_Progress
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_Progress_C::ExecuteUbergraph_Widget_End_Of_Stage_Progress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C.ExecuteUbergraph_Widget_End_Of_Stage_Progress");
		
		UWidget_End_Of_Stage_Progress_C_ExecuteUbergraph_Widget_End_Of_Stage_Progress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_End_Of_Stage_Progress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_End_Of_Stage_Progress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_End_Of_Stage_Progress.Widget_End_Of_Stage_Progress_C");
		return ptr;
	}

}


