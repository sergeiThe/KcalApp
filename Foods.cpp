#include "Foods.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include "LesData3.h"

void Foods::writeToFile(std::fstream& out) const
{
	for (const auto& food : foodList)
	{
		food->writeToFile(out);
	}
}

void Foods::readFromFile(std::fstream& in)
{
	while (!in.eof())
	{
		foodList.emplace_back(new Food());
		foodList.back()->readFromFile(in);

		if (!foodList.back()->getName().length())
			foodList.pop_back();
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
		
		foodName.at(0) = toupper(foodName.at(0));
		for (int i = 1; i < foodName.length(); i++)
			foodName.at(i) = tolower(foodName.at(i));

		auto it = foodList.begin();

		bool erased = false;

		// Find the match
		for (; it != foodList.end();)
		{
			if ((*it)->getName() == foodName)
			{
				foodList.erase(it);
				erased = true;
			}
			else
				it++;
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
		unsigned count = 0;

		std::function<void(Food*)> printer = [&](Food* food)
		{
			count++;
			std::cout << std::setw(15) << food->getName() << std::endl;
		};

		std::for_each(foodList.begin(), foodList.end(), printer);
	}
}
