#pragma once
#include "Food.h"
class Dinner :
    public Food
{
public:
	Dinner(const std::string& name);
	Dinner(int fats, int carbs, int proteins, std::string name);
	virtual ~Dinner() {}

	// Functions
	virtual void writeData() const;
};

