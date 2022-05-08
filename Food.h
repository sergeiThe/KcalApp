#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "Enum.h"

class Food
{
protected:
	int _kcal, _fats, _carbs, _protein;
	std::string _name;

	FoodType type;

	// Protected functions
	void setType(FoodType type);

public:
	Food();
	Food(int fats, int carbs, int proteins, std::string name);
	virtual ~Food() {}

	// Functions
	virtual void writeData() const;
	void writeToFile(std::fstream& out) const;
	void readFromFile(std::fstream& in);

	const std::string& getName() const;

	friend std::ostream& operator<<(std::ostream& os, FoodType type);
	friend std::fstream& operator<<(std::fstream& os, FoodType type);
	friend std::istream& operator>>(std::istream& is, FoodType type);
	friend std::fstream& operator>>(std::fstream& is, FoodType type);
};

