#include <iostream>

void solved(int n, int r1, int c1, int r2, int c2)
{
	int m = n * 2 - 1;
	for (int y = r1; y <= r2; y++)
	{
		for (int x = c1; x <= c2; x++)
		{
			if (abs((x % m) - m / 2) + abs((y % m) - m / 2) < n)
				std::cout << (char)('a' + (abs((x % m) - m / 2) + abs((y % m) - m / 2)) % 26);
			else
				std::cout << '.';

		}
		std::cout << '\n';
	}
}

int main()
{
	int n,m;
	int c1, r1, c2, r2;
	std::cin >> n >> r1 >> c1 >> r2 >> c2;
	solved(n, r1, c1, r2, c2);

}