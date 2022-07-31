#include <iostream>
#include <chrono>
#include <iomanip>

long fibbonacci(unsigned n)
{
	if (n < 2) return n;
	return fibbonacci(n - 1) + fibbonacci(n - 2);
}


int main()
{
	auto start = std::chrono::steady_clock::now();
	std::cout << "fib(42)" << fibbonacci(42) << std::endl;
	auto end = std::chrono::steady_clock::now();



}