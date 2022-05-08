#pragma once
#include "Food.h"
class Breakfast :
    public Food
{



public:

	Breakfast(const std::string &name);
	Breakfast(int fats, int carbs, int proteins, std::string name);
	virtual ~Breakfast() {}

	// Functions
	virtual void writeData() const;
};

