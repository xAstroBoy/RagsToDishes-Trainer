#pragma once
#include <string>

namespace ConsoleTools
{
	void ConsoleWrite(std::string text);
	void ClearConsole();
	std::string AskInput(std::string question);
	void SetTitle(const std::string& title);
	void SetTitle(const std::wstring& title);
	std::string bool_as_text(bool b);
	bool ShowConsole();
}
