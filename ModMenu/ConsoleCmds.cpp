#include "Cheats.h"
#include "ConsoleUtils.h"
#include "ProcessEventLogger.h"
#include "StringUtils.h"
#include "ConsoleCmd.h"
#include "InputCmd.h"

namespace ConsoleCmd
{
	std::unordered_map<std::string, InputCmd> commandMap;

	void HelpCommand() {
		ConsoleTools::ConsoleWrite("Available commands:");
		for (const auto& entry : commandMap) {
			ConsoleTools::ConsoleWrite(entry.second.getName() + " - " + entry.second.getDescription());
		}
	}
	void LogEventsCommand() {
		ProcessEventLogger::LoggerActive = !ProcessEventLogger::LoggerActive;
		ConsoleTools::ConsoleWrite("Process Event Logger: " + StringUtils::bool_as_text(ProcessEventLogger::LoggerActive));
	}

	void UnlockAllCommand() {
		Cheats::UnlockAllPeasantsUpgrades();
		Cheats::UnlockAllNoblesUpgrades();
		Cheats::UnlockAllRoyalsUpgrades();
	}

	void FastCookCommand() {
		Cheats::FastOvens();
		Cheats::FastSoups();
		Cheats::FastGrill();
		Cheats::FastCakePan();
	}

	void FixCustomersCommand() {
		Cheats::CustomerWaitHolyshitWTF();
	}

	// Initialize commands
	void initializeCommands() {
		commandMap["help"] = InputCmd("help", "Shows this help menu.", HelpCommand);
		commandMap["logevents"] = InputCmd("logevents", "Expose all ProcessEvent functions in console.", LogEventsCommand);
		commandMap["unlockall"] = InputCmd("unlockall", "Unlocks all Accessories.", UnlockAllCommand);
		commandMap["fastcook"] = InputCmd("fastcook", "Speeds cooking a lot.", FastCookCommand);
		commandMap["fixcustomers"] = InputCmd("fixcustomers", "Fix customers waiting time.", FixCustomersCommand);
	}

	void ConsoleInput() {
		ConsoleTools::SetTitle("Cheat Menu By xAstroBoy");
		ConsoleTools::ClearConsole();
		while (true) {
			// Convert input to lowercase
			std::string lowercaseInput = StringUtils::toLowercase(ConsoleTools::AskInput("Command : "));

			// Check if the input is empty
			if (lowercaseInput.empty()) {
				ConsoleTools::ClearConsole();
				ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
				continue; // Continue the loop to prompt for input again
			}

			// Look up the command in the map
			auto it = commandMap.find(lowercaseInput);
			if (it != commandMap.end()) {
				ConsoleTools::ClearConsole();
				// Execute the command
				it->second.execute();
				continue; // process the valid command and prompt for input again
			}
			else {
				ConsoleTools::ClearConsole();
				ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
				continue; // Continue the loop to prompt for input again
			}
		}
	}
}