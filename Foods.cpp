#include "Foods.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include "LesData3.h"

void Foods::writeToFile(std::fstream& out) const
{
	// Add to the list from the file
}

void Foods::readFromFile(std::fstream& in)
{

	for (const auto& food : foodList)
	{
		food->readFromFile(in);
	}
}

void Foods::addFood()
{
	// ADDING FOOD TO THE LIST HERE





}

void Foods::deleteFood()
{
	// 1. If the list is empty/not
	// 2. Choose the food by entering a string
	// 3. Delete it
	if (foodList.empty())
	{
		std::cerr << "\n\n\t[ERROR] THE FOOD LIST IS EMPTY\n\n\n";
		return;
	}
	else
	{
		std::string foodName = "";
		std::getline(std::cin, foodName);
		
		toupper(foodName.at(0));
		for (int i = 1; i < foodName.length(); i++)
			tolower(foodName.at(i));

		auto it = foodList.begin();

		bool erased = false;

		// Find the match
		for (; it != foodList.end(); it++)
		{
			if ((*it)->getName() == foodName)
			{
				foodList.erase(it);
				erased = true;
			}
		}

		// Message about the result
		if (erased)
			std::cout << "\nSuccesfully erased\n";
		else
			std::cout << "\nNot found\n";

	}
}

void Foods::showAllFoods() const
{
	if (foodList.empty())
	{
		std::cerr << "\n\n\t[ERROR] The list is empty!\n\n\n";
	}
	else
	{
		short unsigned count = 0;

		std::function<void(short unsigned&, Food&)> printer = [](short unsigned& count, Food& food)
		{
			count++;
			std::cout << std::setw(15) << food.getName() << std::endl;
		};

		std::for_each(foodList.begin(), foodList.end(), printer);
	}
}
