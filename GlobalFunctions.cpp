#include "GlobalFunctions.h"
#include <iostream>
#include <iomanip>

void GlobalFunctions::writeMenu() const
{
	std::cout
		<< "\n\t====== MAIN MENU ======\n\n"
		<< std::setw(10) << "N" << std::setw(20) << std::right << "Add new food\n"
		<< std::setw(10) << "D" << std::setw(20) << std::right << "Delete a food\n"
		<< std::setw(10) << "S" << std::setw(20) << std::right << "Show all foods\n"
		<< std::setw(10) << "Q" << std::setw(20) << std::right << "Quit\n" << std::endl;

}
