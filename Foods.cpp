#include "Foods.h"
#include <string>

void Foods::writeToFile(std::fstream& out) const
{
	for (const auto& food : foodList)
	{
		food->writeToFile(out);
	}
}

void Foods::readFromFile(std::fstream& in)
{
	std::string trash;

	for (const auto& food : foodList)
	{
		food->readFromFile(in);
	}
}

void Foods::addFood()
{
	// ADDING FOOD TO THE LIST HERE
}

void Foods::deleteFood()
{
	// DELETE FOOD FROM THE LIST
}
