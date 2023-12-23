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
	 * 		Name   -> Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.DestroyPointers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Upgrades_Store_C::DestroyPointers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.DestroyPointers");
		
		UWidget_SE_Upgrades_Store_C_DestroyPointers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SE_Upgrades_Store_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.Construct");
		
		UWidget_SE_Upgrades_Store_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.DisplayContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Upgrades_Store_C::DisplayContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.DisplayContinueArrow");
		
		UWidget_SE_Upgrades_Store_C_DisplayContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.ShowNextDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UserInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_SE_Upgrades_Store_C::ShowNextDialogue(bool UserInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.ShowNextDialogue");
		
		UWidget_SE_Upgrades_Store_C_ShowNextDialogue_Params params {};
		params.UserInput = UserInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.ExecuteUbergraph_Widget_SE_Upgrades_Store
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SE_Upgrades_Store_C::ExecuteUbergraph_Widget_SE_Upgrades_Store(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C.ExecuteUbergraph_Widget_SE_Upgrades_Store");
		
		UWidget_SE_Upgrades_Store_C_ExecuteUbergraph_Widget_SE_Upgrades_Store_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SE_Upgrades_Store_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SE_Upgrades_Store_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SE_Upgrades_Store.Widget_SE_Upgrades_Store_C");
		return ptr;
	}

}


