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
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.UserConstructionScript");
		
		ABP_Kitchen_Royals_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Platters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::SpawnPlatters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Platters");
		
		ABP_Kitchen_Royals_C_SpawnPlatters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Cake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::SpawnCake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.Spawn:Cake");
		
		ABP_Kitchen_Royals_C_SpawnCake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.BossLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::BossLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.BossLevel");
		
		ABP_Kitchen_Royals_C_BossLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.FinalLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::FinalLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.FinalLevel");
		
		ABP_Kitchen_Royals_C_FinalLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Kitchen_Royals_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ReceiveBeginPlay");
		
		ABP_Kitchen_Royals_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.CloseCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Royals_C::CloseCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.CloseCurtain");
		
		ABP_Kitchen_Royals_C_CloseCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.OpenCurtain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StoryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Kitchen_Royals_C::OpenCurtain(bool StoryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.OpenCurtain");
		
		ABP_Kitchen_Royals_C_OpenCurtain_Params params {};
		params.StoryPoint = StoryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ExecuteUbergraph_BP_Kitchen_Royals
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kitchen_Royals_C::ExecuteUbergraph_BP_Kitchen_Royals(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Kitchen_Royals.BP_Kitchen_Royals_C.ExecuteUbergraph_BP_Kitchen_Royals");
		
		ABP_Kitchen_Royals_C_ExecuteUbergraph_BP_Kitchen_Royals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Kitchen_Royals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Kitchen_Royals_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kitchen_Royals.BP_Kitchen_Royals_C");
		return ptr;
	}

}


