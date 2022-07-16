#include <iostream>

template<typename T>
T max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <typename T>
T max(T arr)
{

}


int main()
{
	int a = 5;
	int b = 7;
	std::cout << max(a, b);
 
}
