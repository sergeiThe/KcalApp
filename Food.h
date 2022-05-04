#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>

class Food
{
protected:
	int _kcal, _fats, _carbs, _protein;


public:
	Food(int fats, int carbs, int proteins);
	virtual ~Food() {}

	// Functions
	virtual void writeData() const;
	virtual void writeToFile(std::fstream& out) const;
	virtual void readFromFile(std::fstream& in);
};

