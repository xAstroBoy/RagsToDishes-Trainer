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
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.DestroyPointers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Royals_Cake_C::DestroyPointers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.DestroyPointers");
		
		UWidget_SE_Royals_Cake_C_DestroyPointers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.SpawnCakePointers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Royals_Cake_C::SpawnCakePointers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.SpawnCakePointers");
		
		UWidget_SE_Royals_Cake_C_SpawnCakePointers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SE_Royals_Cake_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.Construct");
		
		UWidget_SE_Royals_Cake_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.DisplayContinueArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Royals_Cake_C::DisplayContinueArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.DisplayContinueArrow");
		
		UWidget_SE_Royals_Cake_C_DisplayContinueArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.ShowNextDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UserInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_SE_Royals_Cake_C::ShowNextDialogue(bool UserInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.ShowNextDialogue");
		
		UWidget_SE_Royals_Cake_C_ShowNextDialogue_Params params {};
		params.UserInput = UserInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.SkipTextRender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SE_Royals_Cake_C::SkipTextRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.SkipTextRender");
		
		UWidget_SE_Royals_Cake_C_SkipTextRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.ExecuteUbergraph_Widget_SE_Royals_Cake
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SE_Royals_Cake_C::ExecuteUbergraph_Widget_SE_Royals_Cake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C.ExecuteUbergraph_Widget_SE_Royals_Cake");
		
		UWidget_SE_Royals_Cake_C_ExecuteUbergraph_Widget_SE_Royals_Cake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SE_Royals_Cake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SE_Royals_Cake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SE_Royals_Cake.Widget_SE_Royals_Cake_C");
		return ptr;
	}

}


