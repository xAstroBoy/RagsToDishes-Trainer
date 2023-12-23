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
	 * 		Name   -> Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Platter_Meat_Holder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.UserConstructionScript");
		
		ABP_Platter_Meat_Holder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Platter_Meat_Holder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.ReceiveBeginPlay");
		
		ABP_Platter_Meat_Holder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.SpawnLobster
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Platter_Meat_Holder_C::SpawnLobster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.SpawnLobster");
		
		ABP_Platter_Meat_Holder_C_SpawnLobster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.ExecuteUbergraph_BP_Platter_Meat_Holder
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Platter_Meat_Holder_C::ExecuteUbergraph_BP_Platter_Meat_Holder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C.ExecuteUbergraph_BP_Platter_Meat_Holder");
		
		ABP_Platter_Meat_Holder_C_ExecuteUbergraph_BP_Platter_Meat_Holder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Platter_Meat_Holder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Platter_Meat_Holder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Platter_Meat_Holder.BP_Platter_Meat_Holder_C");
		return ptr;
	}

}


