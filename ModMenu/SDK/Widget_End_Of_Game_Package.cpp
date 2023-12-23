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
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupRoyals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Game_C::SetupRoyals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupRoyals");
		
		UWidget_End_Of_Game_C_SetupRoyals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupNobles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Game_C::SetupNobles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupNobles");
		
		UWidget_End_Of_Game_C_SetupNobles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupPeasants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_End_Of_Game_C::SetupPeasants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.SetupPeasants");
		
		UWidget_End_Of_Game_C_SetupPeasants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.Get_Time
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Hours                                                      (Parm, OutParm)
	 * 		class FText                                        Minutes                                                    (Parm, OutParm)
	 * 		class FText                                        Seconds                                                    (Parm, OutParm)
	 */
	void UWidget_End_Of_Game_C::Get_Time(class FText* Hours, class FText* Minutes, class FText* Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.Get_Time");
		
		UWidget_End_Of_Game_C_Get_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hours != nullptr)
			*Hours = params.Hours;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_End_Of_Game_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.Construct");
		
		UWidget_End_Of_Game_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Game.Widget_End_Of_Game_C.ExecuteUbergraph_Widget_End_Of_Game
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Game_C::ExecuteUbergraph_Widget_End_Of_Game(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Game.Widget_End_Of_Game_C.ExecuteUbergraph_Widget_End_Of_Game");
		
		UWidget_End_Of_Game_C_ExecuteUbergraph_Widget_End_Of_Game_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_End_Of_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_End_Of_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_End_Of_Game.Widget_End_Of_Game_C");
		return ptr;
	}

}


