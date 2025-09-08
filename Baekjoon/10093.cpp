#include <iostream>
#include <algorithm>

int main()
{
	std::cout.tie(NULL);

	long long int a, b;
	std::cin >> a >> b;
	if (a > b)
		std::swap(a, b);

	if (a == b)
		std::cout << 0 << '\n';
	else
		std::cout << (b - a - 1) << '\n';
	
	for (long long int i = a + 1; i < b; i++)
	{
		std::cout << i << ' ';
	}
}