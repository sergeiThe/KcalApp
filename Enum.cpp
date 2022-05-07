#include "Enum.h"
#include <string>

std::ostream& operator<<(std::ostream& os, FoodType type)
{
	switch (type)
	{
	case FoodType::UNDEFINED:	os << "No-name food";	break;
	case FoodType::BREAKFAST:	os << "Breakfast";		break;
	case FoodType::LUNCH:		os << "Lunch";			break;
	case FoodType::DINNER:		os << "Dinner";			break;
	default:
		os << "Dinner";			break;
	}

	return os;
}

std::istream& operator>>(std::istream& is, FoodType type)
{
	std::string text{};

	is >> text;

	if (text == "No-name food")
		type = FoodType::UNDEFINED;
	else if (text == "Breakfast")
		type = FoodType::BREAKFAST;
	else if (text == "Lunch")
		type = FoodType::LUNCH;
	else if (text == "Dinner")
		type = FoodType::DINNER;

	return is;
}

std::fstream& operator<<(std::fstream& os, FoodType type)
{
	switch (type)
	{
	case FoodType::UNDEFINED:	os << "No-name food";	break;
	case FoodType::BREAKFAST:	os << "Breakfast";		break;
	case FoodType::LUNCH:		os << "Lunch";			break;
	case FoodType::DINNER:		os << "Dinner";			break;
	default:
		os << "Dinner";			break;
	}

	return os;
}

std::fstream& operator>>(std::fstream& is, FoodType type)
{
	std::string text{};

	is >> text;

	if (text == "No-name food")
		type = FoodType::UNDEFINED;
	else if (text == "Breakfast")
		type = FoodType::BREAKFAST;
	else if (text == "Lunch")
		type = FoodType::LUNCH;
	else if (text == "Dinner")
		type = FoodType::DINNER;

	return is;
}

