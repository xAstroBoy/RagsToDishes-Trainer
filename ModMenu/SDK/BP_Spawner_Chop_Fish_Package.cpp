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
	 * 		Name   -> Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.SpawnAndAttachObject
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ObjectRef                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spawner_Chop_Fish_C::SpawnAndAttachObject(class AActor** ObjectRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.SpawnAndAttachObject");
		
		ABP_Spawner_Chop_Fish_C_SpawnAndAttachObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectRef != nullptr)
			*ObjectRef = params.ObjectRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Spawner_Chop_Fish_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.UserConstructionScript");
		
		ABP_Spawner_Chop_Fish_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.SpawnObjectAtSpawner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Spawner_Chop_Fish_C::SpawnObjectAtSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.SpawnObjectAtSpawner");
		
		ABP_Spawner_Chop_Fish_C_SpawnObjectAtSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.ExecuteUbergraph_BP_Spawner_Chop_Fish
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spawner_Chop_Fish_C::ExecuteUbergraph_BP_Spawner_Chop_Fish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C.ExecuteUbergraph_BP_Spawner_Chop_Fish");
		
		ABP_Spawner_Chop_Fish_C_ExecuteUbergraph_BP_Spawner_Chop_Fish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spawner_Chop_Fish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spawner_Chop_Fish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spawner_Chop_Fish.BP_Spawner_Chop_Fish_C");
		return ptr;
	}

}


