#include <iostream>

int main()
{
	int t;
	double m;
	std::cin >> t;
	while (t--)
	{
		std::cin >> m;
		std::cout.precision(2);
		std::cout << std::fixed << '$' << (m * 0.8) << '\n';
	}
}
