#include "Food.h"
#include <string>
#include "Enum.h"

void Food::setType(FoodType type)
{
	this->type = type;
}

Food::Food()
	: _fats(0), _carbs(0), _protein(0)
{
	_kcal = _fats * 9 + _carbs * 4 + _protein * 4;
	_name = "";
	type = FoodType::UNDEFINED;
}

Food::Food(int fats, int carbs, int proteins, std::string name)
	:	_fats(fats), _carbs(carbs), _protein(proteins)
{
	_kcal = fats * 9 + carbs * 4 + proteins * 4;
	_name = name;
}

void Food::writeData() const
{
	std::cout << "\n\n\t==== FOOD DATA ====\n\n"
		<< std::setw(14) << std::left << "\tKCAL: "		<< std::right << std::setw(6) << _kcal << "\n"
		<< std::setw(14) << std::left << "\tFATS: "		<< std::right << std::setw(6) << _fats << "\n"
		<< std::setw(14) << std::left << "\tCARBS: "	<< std::right << std::setw(6) << _carbs << "\n"
		<< std::setw(14) << std::left << "\tPROTEINS: " << std::right << std::setw(6) << _protein << "\n\n\n";
}

void Food::writeToFile(std::fstream& out) const
{
	if (out)
	out << _name << "\n"
		<< "Type: " << this->type << "\n"
		<< std::setw(14) << std::left << "\tKCAL: " << std::right << std::setw(6) << _kcal << "\n"
		<< std::setw(14) << std::left << "\tFATS: " << std::right << std::setw(6) << _fats << "\n"
		<< std::setw(14) << std::left << "\tCARBS: " << std::right << std::setw(6) << _carbs << "\n"
		<< std::setw(14) << std::left << "\tPROTEINS: " << std::right << std::setw(6) << _protein << "\n";
}

void Food::readFromFile(std::fstream& in)
{
	// std::getline(in, _name);
	// in.ignore(6);
	// in >> type;
	in.ignore(14);
	in >> _kcal;
	in.ignore(14);
	in >> _fats;
	in.ignore(14);
	in >> _carbs;
	in.ignore(14);
	in >> _protein;
	in.ignore(200, '\n');
}

const std::string& Food::getName() const
{
	return _name;
}



