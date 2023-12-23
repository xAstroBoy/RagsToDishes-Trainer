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
	 * 		Name   -> Function VR_Game_Equipment_LevelStreaming_Peasants.VR_Game_Equipment_LevelStreaming_Peasants_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AVR_Game_Equipment_LevelStreaming_Peasants_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VR_Game_Equipment_LevelStreaming_Peasants.VR_Game_Equipment_LevelStreaming_Peasants_C.ReceiveBeginPlay");
		
		AVR_Game_Equipment_LevelStreaming_Peasants_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00759C70
	 * 		Name   -> Function VR_Game_Equipment_LevelStreaming_Peasants.VR_Game_Equipment_LevelStreaming_Peasants_C.ExecuteUbergraph_VR_Game_Equipment_LevelStreaming_Peasants
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVR_Game_Equipment_LevelStreaming_Peasants_C::ExecuteUbergraph_VR_Game_Equipment_LevelStreaming_Peasants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VR_Game_Equipment_LevelStreaming_Peasants.VR_Game_Equipment_LevelStreaming_Peasants_C.ExecuteUbergraph_VR_Game_Equipment_LevelStreaming_Peasants");
		
		AVR_Game_Equipment_LevelStreaming_Peasants_C_ExecuteUbergraph_VR_Game_Equipment_LevelStreaming_Peasants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVR_Game_Equipment_LevelStreaming_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVR_Game_Equipment_LevelStreaming_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VR_Game_Equipment_LevelStreaming_Peasants.VR_Game_Equipment_LevelStreaming_Peasants_C");
		return ptr;
	}

}


