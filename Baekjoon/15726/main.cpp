#include <iostream>
#include <cmath>

long long a, b, c;

long long solved()
{
	return std::max((double)a * b / c, (double)a / b * c);
}

int main()
{
	std::cin >> a >> b >> c;
	std::cout << solved();
}
