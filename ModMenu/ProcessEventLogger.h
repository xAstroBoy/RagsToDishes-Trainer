#pragma once
// ProcessEventLogger.h

#pragma once

#include <algorithm>
#include <regex>
#include <vector>

#include "ConsoleUtils.h"

namespace ProcessEventLogger
{
	extern bool LoggerActive;
	extern bool AllowAllFunctions;
	extern const std::vector<std::string> ClassNames;
	extern const std::vector<std::string> FilterList;
	extern const std::vector<std::string> EndingFilterList;

	bool DoNotLogEvent(const std::string& funcname);
	void ReportCustomEvent(const std::string& funcname);
}
