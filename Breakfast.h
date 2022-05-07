#pragma once
#include "Food.h"
class Breakfast :
    public Food
{



public:

	Breakfast();
	Breakfast(int fats, int carbs, int proteins, std::string name);
	virtual ~Breakfast() {}

	// Functions
	virtual void writeData() const;
	virtual void writeToFile(std::fstream& out) const;
	virtual void readFromFile(std::fstream& in);
};

