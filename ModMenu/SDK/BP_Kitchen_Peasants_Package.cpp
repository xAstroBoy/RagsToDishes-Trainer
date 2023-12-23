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
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.UserConstructionScript");
		
		ABP_Kitchen_Peasants_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Ale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::SpawnAle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Ale");
		
		ABP_Kitchen_Peasants_C_SpawnAle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Peasants_C::OpenCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.OpenCurtain");
		
		ABP_Kitchen_Peasants_C_OpenCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Peasants_C::CloseCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.CloseCurtain");
		
		ABP_Kitchen_Peasants_C_CloseCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.BossLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::BossLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.BossLevel");
		
		ABP_Kitchen_Peasants_C_BossLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.ReceiveBeginPlay");
		
		ABP_Kitchen_Peasants_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Soup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::SpawnSoup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Soup");
		
		ABP_Kitchen_Peasants_C_SpawnSoup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Oatmeal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Peasants_C::SpawnOatmeal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.Spawn:Oatmeal");
		
		ABP_Kitchen_Peasants_C_SpawnOatmeal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.ExecuteUbergraph_BP_Kitchen_Peasants
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kitchen_Peasants_C::ExecuteUbergraph_BP_Kitchen_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Peasants.BP_Kitchen_Peasants_C.ExecuteUbergraph_BP_Kitchen_Peasants");
		
		ABP_Kitchen_Peasants_C_ExecuteUbergraph_BP_Kitchen_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Kitchen_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Kitchen_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kitchen_Peasants.BP_Kitchen_Peasants_C");
		return ptr;
	}

}


