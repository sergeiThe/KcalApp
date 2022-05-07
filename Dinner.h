#pragma once
#include "Food.h"
class Dinner :
    public Food
{
public:
	Dinner();
	Dinner(int fats, int carbs, int proteins, std::string name);
	virtual ~Dinner() {}

	// Functions
	virtual void writeData() const;
	virtual void writeToFile(std::fstream& out) const;
	virtual void readFromFile(std::fstream& in);
};

