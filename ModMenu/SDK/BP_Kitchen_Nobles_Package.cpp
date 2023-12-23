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
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.UserConstructionScript");
		
		ABP_Kitchen_Nobles_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Nobles_C::OpenCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.OpenCurtain");
		
		ABP_Kitchen_Nobles_C_OpenCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Nobles_C::CloseCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.CloseCurtain");
		
		ABP_Kitchen_Nobles_C_CloseCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.BossLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::BossLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.BossLevel");
		
		ABP_Kitchen_Nobles_C_BossLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.ReceiveBeginPlay");
		
		ABP_Kitchen_Nobles_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Fish
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::SpawnFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Fish");
		
		ABP_Kitchen_Nobles_C_SpawnFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Pie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::SpawnPie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Pie");
		
		ABP_Kitchen_Nobles_C_SpawnPie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Stew
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Nobles_C::SpawnStew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.Spawn:Stew");
		
		ABP_Kitchen_Nobles_C_SpawnStew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.ExecuteUbergraph_BP_Kitchen_Nobles
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kitchen_Nobles_C::ExecuteUbergraph_BP_Kitchen_Nobles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Nobles.BP_Kitchen_Nobles_C.ExecuteUbergraph_BP_Kitchen_Nobles");
		
		ABP_Kitchen_Nobles_C_ExecuteUbergraph_BP_Kitchen_Nobles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Kitchen_Nobles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Kitchen_Nobles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kitchen_Nobles.BP_Kitchen_Nobles_C");
		return ptr;
	}

}


