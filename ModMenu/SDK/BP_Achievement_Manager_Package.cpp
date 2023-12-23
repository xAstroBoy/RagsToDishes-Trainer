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
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.GetAchievementNameAndDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Achievements                                  Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Achievement_Manager_C::GetAchievementNameAndDescription(Enum_Achievements Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.GetAchievementNameAndDescription");
		
		ABP_Achievement_Manager_C_GetAchievementNameAndDescription_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Achievement_Manager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.UserConstructionScript");
		
		ABP_Achievement_Manager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Achievement_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.ReceiveBeginPlay");
		
		ABP_Achievement_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.EventEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Achievement_Manager_C::EventEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.EventEnd");
		
		ABP_Achievement_Manager_C_EventEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.SpawnAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Achievement_Manager_C::SpawnAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.SpawnAchievement");
		
		ABP_Achievement_Manager_C_SpawnAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_Achievement_Manager.BP_Achievement_Manager_C.ExecuteUbergraph_BP_Achievement_Manager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Achievement_Manager_C::ExecuteUbergraph_BP_Achievement_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Achievement_Manager.BP_Achievement_Manager_C.ExecuteUbergraph_BP_Achievement_Manager");
		
		ABP_Achievement_Manager_C_ExecuteUbergraph_BP_Achievement_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Achievement_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Achievement_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Achievement_Manager.BP_Achievement_Manager_C");
		return ptr;
	}

}


