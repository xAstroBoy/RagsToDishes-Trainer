#pragma once
#include "SDK.h"

namespace EngineUtils
{
	CG::AWorldSettings* GetWorldSettings();
	CG::ULocalPlayer* GetActiveLocalPlayer();
	CG::APlayerController* GetActivePlayerController();
	void SpawnCheatManager(CG::APlayerController* Pc);
}
