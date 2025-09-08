#include <iostream>
#include <cmath>

int a, b, c;
int solved()
{
	if (a == b && b == c)
		return a * 1000 + 10000;

	if (a == b || b == c)
		return b * 100 + 1000;
	if (a == c)
		return a * 100 + 1000;

	return std::max(std::max(a, b), c) * 100;
}

int main()
{
	std::cin >> a >> b >> c;
	std::cout << solved();
}