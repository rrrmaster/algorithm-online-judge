#include <iostream>

int main()
{
	int t,n;
	std::cin >> t;
	while (t--)
	{
		std::cin >> n;
		while (n--)std::cout << '=';
		std::cout << '\n';
	}
}