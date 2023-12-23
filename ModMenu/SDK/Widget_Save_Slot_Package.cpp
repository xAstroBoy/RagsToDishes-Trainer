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
	 * 		Name   -> Function Widget_Save_Slot.Widget_Save_Slot_C.SetSaveSlotDetails
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Save_Slot_C::SetSaveSlotDetails(const class FText& Name, const class FText& Number, const class FText& Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Save_Slot.Widget_Save_Slot_C.SetSaveSlotDetails");
		
		UWidget_Save_Slot_C_SetSaveSlotDetails_Params params {};
		params.Name = Name;
		params.Number = Number;
		params.Stage = Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Save_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Save_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Save_Slot.Widget_Save_Slot_C");
		return ptr;
	}

}


