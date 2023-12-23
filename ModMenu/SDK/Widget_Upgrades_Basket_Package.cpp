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
	 * 		Name   -> Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Upgrades_Basket_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.Construct");
		
		UWidget_Upgrades_Basket_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Upgrades_Basket_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.Update");
		
		UWidget_Upgrades_Basket_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.CloseSpeechBubble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Upgrades_Basket_C::CloseSpeechBubble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.CloseSpeechBubble");
		
		UWidget_Upgrades_Basket_C_CloseSpeechBubble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.ShowNextDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UserInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_Upgrades_Basket_C::ShowNextDialogue(bool UserInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.ShowNextDialogue");
		
		UWidget_Upgrades_Basket_C_ShowNextDialogue_Params params {};
		params.UserInput = UserInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.ExecuteUbergraph_Widget_Upgrades_Basket
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Upgrades_Basket_C::ExecuteUbergraph_Widget_Upgrades_Basket(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Upgrades_Basket.Widget_Upgrades_Basket_C.ExecuteUbergraph_Widget_Upgrades_Basket");
		
		UWidget_Upgrades_Basket_C_ExecuteUbergraph_Widget_Upgrades_Basket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Upgrades_Basket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Upgrades_Basket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Upgrades_Basket.Widget_Upgrades_Basket_C");
		return ptr;
	}

}


