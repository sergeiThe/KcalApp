#include "Breakfast.h"

Breakfast::Breakfast(const std::string& name)
	: Food()
{
	_name = name;
	setType(FoodType::BREAKFAST);
}

Breakfast::Breakfast(int fats, int carbs, int proteins, std::string name)
	: Food(fats, carbs, proteins, name)
{
	setType(FoodType::BREAKFAST);
}

void Breakfast::writeData() const
{
	std::cout << "\n\n\t==== BREAKFAST DATA ====\n\n"
		<< std::setw(14) << std::left << "\tKCAL: " << std::right << std::setw(6) << _kcal << "\n"
		<< std::setw(14) << std::left << "\tFATS: " << std::right << std::setw(6) << _fats << "\n"
		<< std::setw(14) << std::left << "\tCARBS: " << std::right << std::setw(6) << _carbs << "\n"
		<< std::setw(14) << std::left << "\tPROTEINS: " << std::right << std::setw(6) << _protein << "\n\n\n";
}


