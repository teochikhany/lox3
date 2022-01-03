#include "Local.h"

Local::Local(std::string name, int depth)
{
	this->name = name;
	this->depth = depth;
}

int Local::getDepth()
{
	return depth;
}

std::string Local::getName()
{
	return name;
}

std::string Local::print()
{
	return "Name: " + name + ", Depth: " + std::to_string(depth);
}