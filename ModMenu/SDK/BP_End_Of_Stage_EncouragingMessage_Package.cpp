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
	 * 		Name   -> Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_End_Of_Stage_EncouragingMessage_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.UserConstructionScript");
		
		ABP_End_Of_Stage_EncouragingMessage_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_End_Of_Stage_EncouragingMessage_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.Timeline_0__FinishedFunc");
		
		ABP_End_Of_Stage_EncouragingMessage_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_End_Of_Stage_EncouragingMessage_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.Timeline_0__UpdateFunc");
		
		ABP_End_Of_Stage_EncouragingMessage_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_End_Of_Stage_EncouragingMessage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.ReceiveBeginPlay");
		
		ABP_End_Of_Stage_EncouragingMessage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.ExecuteUbergraph_BP_End_Of_Stage_EncouragingMessage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_End_Of_Stage_EncouragingMessage_C::ExecuteUbergraph_BP_End_Of_Stage_EncouragingMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C.ExecuteUbergraph_BP_End_Of_Stage_EncouragingMessage");
		
		ABP_End_Of_Stage_EncouragingMessage_C_ExecuteUbergraph_BP_End_Of_Stage_EncouragingMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_End_Of_Stage_EncouragingMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_End_Of_Stage_EncouragingMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_End_Of_Stage_EncouragingMessage.BP_End_Of_Stage_EncouragingMessage_C");
		return ptr;
	}

}


