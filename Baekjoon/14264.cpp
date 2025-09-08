#include <iostream>
#include <cmath>

double solved(int l)
{
	return (std::sqrt(3) * l * l) / 4.0;
}

int main()
{
	int a;
	std::cin >> a;
	std::cout.precision(15);
	std::cout << std::fixed << solved(a);
}