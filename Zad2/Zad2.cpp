#include <iostream>
#include "PositivNum.hpp"



int main()
{

	double num = 10;
	try
	{
		PositivNumber num1(15);
		PositivNumber num3(-15);
		//PositivNumber num2 = num1 - num;
	}
	catch (const std::out_of_range& error)
	{
		std::cout << error.what() << std::endl;
	}

}
