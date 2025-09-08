#include <iostream>

int main()
{
	int a[9][9] = {};
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			std::cin >> a[y][x];
		}
	}

	int mx = 0, my = 0;
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (a[y][x] > a[my][mx])
			{
				my = y, mx = x;
			}
		}
	}

	std::cout << a[my][mx] << '\n';

	std::cout << my + 1 << ' ' << mx + 1;
}