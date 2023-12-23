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
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo_5Minute
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetInfo_5Minute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo_5Minute");
		
		UWidget_Loop_Panel_C_GetInfo_5Minute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo_Campaign
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetInfo_Campaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo_Campaign");
		
		UWidget_Loop_Panel_C_GetInfo_Campaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetTime:5Minute
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetTime5Minute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetTime:5Minute");
		
		UWidget_Loop_Panel_C_GetTime5Minute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetTime:Campaign
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetTimeCampaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetTime:Campaign");
		
		UWidget_Loop_Panel_C_GetTimeCampaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.Construct");
		
		UWidget_Loop_Panel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo:Campaign
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetInfoCampaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo:Campaign");
		
		UWidget_Loop_Panel_C_GetInfoCampaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo:5Minute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Panel_C::GetInfo5Minute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.GetInfo:5Minute");
		
		UWidget_Loop_Panel_C_GetInfo5Minute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Panel.Widget_Loop_Panel_C.ExecuteUbergraph_Widget_Loop_Panel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Loop_Panel_C::ExecuteUbergraph_Widget_Loop_Panel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Panel.Widget_Loop_Panel_C.ExecuteUbergraph_Widget_Loop_Panel");
		
		UWidget_Loop_Panel_C_ExecuteUbergraph_Widget_Loop_Panel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Loop_Panel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Loop_Panel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Loop_Panel.Widget_Loop_Panel_C");
		return ptr;
	}

}


