#include <iostream>

int main()
{
	int t, n;
	std::cin >> t;

	while (t--)
	{
		std::cin >> n;
		for (int x = 0, y = 0; y < n; x++, y += x / n, x %= n)
		{
			std::cout << (x == 0 || y == 0 || x == n - 1 || y == n - 1 ? '#' : 'J') ;
			if (x == n - 1)std::cout << '\n';
		}
		std::cout << '\n';
	}
}