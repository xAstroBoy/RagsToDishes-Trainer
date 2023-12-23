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
	 * 		Name   -> Function BP_Honey_Pot.BP_Honey_Pot_C.ReturnSpoon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Serving_Spoon_C*                         Spoon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Returned                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Honey_Pot_C::ReturnSpoon(class ABP_Serving_Spoon_C* Spoon, bool* Returned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Honey_Pot.BP_Honey_Pot_C.ReturnSpoon");
		
		ABP_Honey_Pot_C_ReturnSpoon_Params params {};
		params.Spoon = Spoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Returned != nullptr)
			*Returned = params.Returned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Honey_Pot.BP_Honey_Pot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Honey_Pot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Honey_Pot.BP_Honey_Pot_C.UserConstructionScript");
		
		ABP_Honey_Pot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Honey_Pot.BP_Honey_Pot_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Honey_Pot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Honey_Pot.BP_Honey_Pot_C.ReceiveBeginPlay");
		
		ABP_Honey_Pot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Honey_Pot.BP_Honey_Pot_C.SpawnSpoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Honey_Pot_C::SpawnSpoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Honey_Pot.BP_Honey_Pot_C.SpawnSpoon");
		
		ABP_Honey_Pot_C_SpawnSpoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Honey_Pot.BP_Honey_Pot_C.ExecuteUbergraph_BP_Honey_Pot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Honey_Pot_C::ExecuteUbergraph_BP_Honey_Pot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Honey_Pot.BP_Honey_Pot_C.ExecuteUbergraph_BP_Honey_Pot");
		
		ABP_Honey_Pot_C_ExecuteUbergraph_BP_Honey_Pot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Honey_Pot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Honey_Pot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Honey_Pot.BP_Honey_Pot_C");
		return ptr;
	}

}


