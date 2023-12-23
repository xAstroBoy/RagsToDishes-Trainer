#include <algorithm>
#include <ios>
#include <sstream>
#include <string>

namespace StringUtils {
	bool ends_with(const std::string& mainStr, const std::string& toMatch)
	{
		if (mainStr.size() >= toMatch.size() &&
			mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
			return true;
		else
			return false;
	}

	std::string toLowercase(const std::string& str) {
		std::string result = str;
		std::transform(result.begin(), result.end(), result.begin(), ::tolower);
		return result;
	}

	std::string bool_as_text(bool b)
	{
		std::stringstream converter;
		converter << std::boolalpha << b;
		return converter.str();
	}
}