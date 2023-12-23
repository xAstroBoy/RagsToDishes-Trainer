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
	 * 		Name   -> Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.SetupColours
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Loop_Bonus_Objective_C::SetupColours()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.SetupColours");
		
		UWidget_Loop_Bonus_Objective_C_SetupColours_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Loop_Bonus_Objective_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.Construct");
		
		UWidget_Loop_Bonus_Objective_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.ExecuteUbergraph_Widget_Loop_Bonus_Objective
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Loop_Bonus_Objective_C::ExecuteUbergraph_Widget_Loop_Bonus_Objective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C.ExecuteUbergraph_Widget_Loop_Bonus_Objective");
		
		UWidget_Loop_Bonus_Objective_C_ExecuteUbergraph_Widget_Loop_Bonus_Objective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Loop_Bonus_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Loop_Bonus_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Loop_Bonus_Objective.Widget_Loop_Bonus_Objective_C");
		return ptr;
	}

}


