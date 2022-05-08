#pragma once
#include "Food.h"
class Lunch :
    public Food
{
public:
	Lunch(const std::string& name);
	Lunch(int fats, int carbs, int proteins, std::string name);
	virtual ~Lunch() {}

	// Functions
	virtual void writeData() const;
};

