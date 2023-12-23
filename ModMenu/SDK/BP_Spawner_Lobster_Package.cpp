﻿/**
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
	 * 		Name   -> Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.SpawnAndAttachObject
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ObjectRef                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spawner_Lobster_C::SpawnAndAttachObject(class AActor** ObjectRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.SpawnAndAttachObject");
		
		ABP_Spawner_Lobster_C_SpawnAndAttachObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectRef != nullptr)
			*ObjectRef = params.ObjectRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Spawner_Lobster_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.UserConstructionScript");
		
		ABP_Spawner_Lobster_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.SpawnObjectAtSpawner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Spawner_Lobster_C::SpawnObjectAtSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.SpawnObjectAtSpawner");
		
		ABP_Spawner_Lobster_C_SpawnObjectAtSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.ExecuteUbergraph_BP_Spawner_Lobster
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spawner_Lobster_C::ExecuteUbergraph_BP_Spawner_Lobster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Lobster.BP_Spawner_Lobster_C.ExecuteUbergraph_BP_Spawner_Lobster");
		
		ABP_Spawner_Lobster_C_ExecuteUbergraph_BP_Spawner_Lobster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spawner_Lobster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spawner_Lobster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spawner_Lobster.BP_Spawner_Lobster_C");
		return ptr;
	}

}


