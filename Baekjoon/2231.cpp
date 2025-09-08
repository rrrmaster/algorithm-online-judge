#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int s = i, m = i;
		while (m > 0)
		{
			s += m % 10;
			m /= 10;
		}
		if (s == n)
		{
			std::cout << i;
			return 0;
		}
	}
	std::cout << 0;
}