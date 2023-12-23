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
	 * 		Name   -> Function Widget_End_Of_Stage_Progress_Add.Widget_End_Of_Stage_Progress_Add_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_End_Of_Stage_Progress_Add_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress_Add.Widget_End_Of_Stage_Progress_Add_C.Construct");
		
		UWidget_End_Of_Stage_Progress_Add_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_End_Of_Stage_Progress_Add.Widget_End_Of_Stage_Progress_Add_C.ExecuteUbergraph_Widget_End_Of_Stage_Progress_Add
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_End_Of_Stage_Progress_Add_C::ExecuteUbergraph_Widget_End_Of_Stage_Progress_Add(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_End_Of_Stage_Progress_Add.Widget_End_Of_Stage_Progress_Add_C.ExecuteUbergraph_Widget_End_Of_Stage_Progress_Add");
		
		UWidget_End_Of_Stage_Progress_Add_C_ExecuteUbergraph_Widget_End_Of_Stage_Progress_Add_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_End_Of_Stage_Progress_Add_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_End_Of_Stage_Progress_Add_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_End_Of_Stage_Progress_Add.Widget_End_Of_Stage_Progress_Add_C");
		return ptr;
	}

}


