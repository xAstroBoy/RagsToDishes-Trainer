#include "pch.h"
#include "ConsoleUtils.h"
#include <string>
#include <iostream>
#include <sstream>
#include "stdafx.h"

namespace ConsoleTools
{
	void ConsoleWrite(const std::string text)
	{
		std::cout << text << std::endl;
	}

	void ClearConsole()
	{
		system("cls");
	}

	std::string AskInput(std::string question)
	{
		std::string input;
		std::cout << question << std::endl;
		std::getline(std::cin, input);
		return input;
	}

	void SetTitle(const std::wstring& title) {
		if (!SetConsoleTitleW(title.c_str())) {
			// Handle error, check GetLastError for more information
			DWORD error = GetLastError();
			// Add error handling logic here
		}
	}

	void SetTitle(const std::string& title) {
		// Convert narrow string to wide string
		std::wstring wideTitle(title.begin(), title.end());

		if (!SetConsoleTitleW(wideTitle.c_str())) {
			// Handle error, check GetLastError for more information
			DWORD error = GetLastError();
			// Add error handling logic here
		}
	}

	bool ShowConsole() {
		if (AllocConsole() != NULL) {
			freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
			freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
			freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
			ConsoleWrite("This Cheat has been coded by xAstroBoy#1337, enjoy!");
			return true;
		}
		return false;
	}
}