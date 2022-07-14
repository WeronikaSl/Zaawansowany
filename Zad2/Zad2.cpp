#include <iostream>
#include "PositivNum.hpp"



int main()
{
	PositivNumber num1(100);
	double num = 10;
	try
	{
		PositivNumber num2 = num1 - num;
	}
	catch (std::string& error)
	{
		std::cout << error << std::endl;
	}

}
