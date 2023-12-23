// StringUtils.h

#pragma once

#include <algorithm>
#include <ios>
#include <sstream>
#include <string>

namespace StringUtils {
	bool ends_with(const std::string& mainStr, const std::string& toMatch);

	// Convert a string to lowercase
	std::string toLowercase(const std::string& str);

	std::string bool_as_text(bool b);
}
