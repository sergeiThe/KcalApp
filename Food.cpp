#include "Food.h"
#include <string>

Food::Food(int fats, int carbs, int proteins)
	:	_fats(fats), _carbs(carbs), _protein(proteins)
{
	_kcal = fats * 9 + carbs * 4 + proteins * 4;
	_name = std::string("No-name food");
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
	out << _name << "\n"
		<< std::setw(14) << std::left << "\tKCAL: " << std::right << std::setw(6) << _kcal << "\n"
		<< std::setw(14) << std::left << "\tFATS: " << std::right << std::setw(6) << _fats << "\n"
		<< std::setw(14) << std::left << "\tCARBS: " << std::right << std::setw(6) << _carbs << "\n"
		<< std::setw(14) << std::left << "\tPROTEINS: " << std::right << std::setw(6) << _protein << "\n\n\n";
}

void Food::readFromFile(std::fstream& in)
{
	in.ignore(200, '\n');
	in.ignore('\t');
	in.ignore(14);
	in >> _kcal;
	in.ignore('\t');
	in.ignore(14);
	in >> _fats;
	in.ignore('\t');
	in.ignore(14);
	in >> _carbs;
	in.ignore('\t');
	in.ignore(14);
	in >> _protein;
}

std::string Food::getName() const
{
	return _name;
}
