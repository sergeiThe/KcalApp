#pragma once
#include "Food.h"
class Lunch :
    public Food
{
public:
	Lunch();
	Lunch(int fats, int carbs, int proteins, std::string name);
	virtual ~Lunch() {}

	// Functions
	virtual void writeData() const;
	virtual void writeToFile(std::fstream& out) const;
	virtual void readFromFile(std::fstream& in);
};

