#include <iostream>
#include <ctime>
#include <iomanip>

#include "functions.h"


int main()
{
	std::cout << "\tTASK 3 TIMER\n\n";

	try
	{
		std::tm overtime = getTime();

		std::time_t stopTime = std::time(nullptr) + overtime.tm_min*60 + overtime.tm_sec;

		std::cout << "START\n";

		while (std::time(nullptr) < stopTime)
		{
			std::time_t remainingTime = stopTime - std::time(nullptr);
			std::tm* tmRemainingTime = std::gmtime(&remainingTime);
			std::cout << "Time remaining: " << std::setfill('0') << std::setw(2) << tmRemainingTime->tm_min 
				<< ":" << std::setw(2) << tmRemainingTime->tm_sec << "\r";
		}

		std::cout << "\nDING! DING! DING!\n";
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error: " << ex.what() << "\n";
	}
	catch (...)
	{
		std::cout << "Something went wrong\n";
	}


	return 0;
}
