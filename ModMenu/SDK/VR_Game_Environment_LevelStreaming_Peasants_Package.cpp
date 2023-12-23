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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVR_Game_Environment_LevelStreaming_Peasants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVR_Game_Environment_LevelStreaming_Peasants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VR_Game_Environment_LevelStreaming_Peasants.VR_Game_Environment_LevelStreaming_Peasants_C");
		return ptr;
	}

}


