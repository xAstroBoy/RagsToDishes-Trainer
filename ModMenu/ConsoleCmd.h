#pragma once

#include <string>
#include <unordered_map>
#include "InputCmd.h"

namespace ConsoleCmd
{
	extern std::unordered_map<std::string, InputCmd> commandMap;

	void HelpCommand();
	void UnlimitedPowerCommand();
	void LogEventsCommand();
	void UnlockLevelsCommand();

	// Initialize commands
	void initializeCommands();
	void ConsoleInput();
}
