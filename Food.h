#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

class Food
{
protected:
	int _kcal, _fats, _carbs, _protein;
	std::string _name;

public:
	Food();
	Food(int fats, int carbs, int proteins, std::string name);
	virtual ~Food() {}

	// Functions
	virtual void writeData() const;
	virtual void writeToFile(std::fstream& out) const;
	virtual void readFromFile(std::fstream& in);

	std::string getName() const;
};

