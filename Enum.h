#pragma once
#include <iostream>
#include <fstream>
enum class FoodType { UNDEFINED, BREAKFAST, LUNCH, DINNER };


std::ostream& operator<<(std::ostream& os, FoodType type);
std::fstream& operator<<(std::fstream& os, FoodType type);
std::istream& operator>>(std::ostream& is, FoodType type);
std::fstream& operator>>(std::fstream& is, FoodType type);
