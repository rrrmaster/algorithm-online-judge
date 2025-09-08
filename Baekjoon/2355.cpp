#include <iostream>
#include <algorithm>

int main()
{
	long long int a, b;
	std::cin >> a >> b;
	if (a > b)
		std::swap(a, b);

	std::cout << (a + b) * (b - a + 1) / 2;

}