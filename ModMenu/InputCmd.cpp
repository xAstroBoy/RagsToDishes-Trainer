#include <functional>
#include <string>

class InputCmd {
public:InputCmd() = default;  // Default constructor

	  InputCmd(const std::string& name, const std::string& description, std::function<void()> action)
		  : name(name), description(description), action(action) {}

	  void execute() const {
		  action();
	  }

	  const std::string& getName() const {
		  return name;
	  }

	  const std::string& getDescription() const {
		  return description;
	  }

private:
	std::string name;
	std::string description;
	std::function<void()> action;
};