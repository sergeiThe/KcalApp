#pragma once
#include <map>
#include <list>
#include "Food.h"
#include <fstream>

class Foods
{
private:
	std::list<Food*> foodList;
	
public:
	void writeToFile(std::fstream& out) const;
	void readFromFile(std::fstream& in);

	void addFood();
	void deleteFood();
};

