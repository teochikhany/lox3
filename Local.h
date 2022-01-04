#pragma once

#include <string>


class Local {
private:
	std::string name;
	int depth;

public:
	Local(std::string name, int depth);
	int getDepth();
	std::string getName();
	std::string print();
};