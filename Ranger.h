#pragma once
#include <string>

class Ranger
{
private:
	std::string _name;

public:
	Ranger(std::string name);
	~Ranger();

	std::string GetName()
		const {
		return _name;
	}
	std::string Attack()
	{
		return _name + " shoots arrows at his enemies! * PEW PEW PEW *";
	}
};
