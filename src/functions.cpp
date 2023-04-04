#include "functions.h"
#include <iostream>
#include <ctime>

std::tm getTime()
{
	std::tm tmTime;
	std::cout << "Enter time in \"MM:SS\" format: ";
	std::cin >> std::get_time(&tmTime, "%M:%S");
	if (std::cin.fail())
	{
		throw std::runtime_error("Invalid time format");
	}

	return tmTime;
}