#include <iostream>
#include <cmath>

int B;
void solved()
{
	int P = 5 * B - 400;
	std::cout << P << '\n';
	std::cout << ((P > 100) ? -1 : ((P < 100) ? 1 : 0)) << '\n';
}

int main()
{
	std::cin >> B;
	solved();

}