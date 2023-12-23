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
	 * 		Name   -> PredefinedFunction ASpawnPoint_5Minute_Keyboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnPoint_5Minute_Keyboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_5Minute_Keyboard.SpawnPoint_5Minute_Keyboard_C");
		return ptr;
	}

}


