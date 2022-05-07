#include "Foods.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include "LesData3.h"
#include "Breakfast.h"
#include "Dinner.h"
#include "Lunch.h"

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


	int type = lesInt("Enter type (Breakfast - 1, Lunch - 2, Dinner - 3)", 1, 3);



	std::cout << "\nEnter food name: ";
	std::string tempName{};
	std::getline(std::cin, tempName);
	tempName.front() = toupper(tempName.front());

	int fat, carb, prot = 0;

	fat = lesInt("Enter fat amount per 100gr", 0, 100);
	carb = lesInt("Enter carb amount per 100gr", 0, 100);
	prot = lesInt("Enter protein amount per 100gr", 0, 100);



	foodList.push_back(new Food(fat, carb, prot, tempName));

	std::cout << "\n" << tempName << " successfully added\n";
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

		showAllFoods();

		std::cout << "\nEnter food name for deleting: ";
		std::getline(std::cin, foodName);
		
		foodName.at(0) = toupper(foodName.at(0));
		for (int i = 1; i < foodName.length(); i++)
			foodName.at(i) = tolower(foodName.at(i));

		bool erased = false;

		Food* ptr = nullptr;

		// Find the match
		for (auto it = foodList.begin(); it != foodList.end(); it++)
		{
			if ((*it)->getName() == foodName)
			{
				ptr = *it;
			}
		}

		if (ptr)
		{
			foodList.remove(ptr);
			erased = true;
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
