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
	 * 		Name   -> PredefinedFunction ABP_Invis_Floor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Invis_Floor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Invis_Floor.BP_Invis_Floor_C");
		return ptr;
	}

}


