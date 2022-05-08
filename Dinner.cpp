#include "Dinner.h"

Dinner::Dinner()
	: Food()
{
	setType(FoodType::DINNER);
}

Dinner::Dinner(int fats, int carbs, int proteins, std::string name)
	: Food(fats, carbs, proteins, name)
{
	setType(FoodType::DINNER);
}

void Dinner::writeData() const
{
	std::cout << "\n\n\t==== DINNER DATA ====\n\n"
		<< std::setw(14) << std::left << "\tKCAL: " << std::right << std::setw(6) << _kcal << "\n"
		<< std::setw(14) << std::left << "\tFATS: " << std::right << std::setw(6) << _fats << "\n"
		<< std::setw(14) << std::left << "\tCARBS: " << std::right << std::setw(6) << _carbs << "\n"
		<< std::setw(14) << std::left << "\tPROTEINS: " << std::right << std::setw(6) << _protein << "\n\n\n";
}

void Dinner::writeToFile(std::fstream& out) const
{
}

void Dinner::readFromFile(std::fstream& in)
{
}