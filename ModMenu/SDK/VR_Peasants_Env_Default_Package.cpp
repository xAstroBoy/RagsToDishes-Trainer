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
	 * 		Name   -> PredefinedFunction AVR_Peasants_Env_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVR_Peasants_Env_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VR_Peasants_Env_Default.VR_Peasants_Env_Default_C");
		return ptr;
	}

}


