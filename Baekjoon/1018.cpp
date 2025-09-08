#include <iostream>

int solved(int n, int m,char b[][51])
{
	int result = n * m;
	for (int y = 0; y <= n - 8; y++)
	{
		for (int x = 0; x <= m - 8; x++)
		{
			int white = 0, black = 0;
			for (int ny = 0; ny < 8; ny++)
			{
				for (int nx = 0; nx < 8; nx++)
				{
					char value = (nx + ny) % 2 == 0 ? 'B' : 'W';

					if (b[(ny + y)][(nx + x)] == value)
					{
						black += 1;
					}
					else
					{
						white += 1;
					}
				}
			}

			result = std::min(std::min(black, white), result);
		}
	}
	return result;
}
int main()
{
	int n, m;
	int x;
	
	char b[51][51];
	std::cin >> n >> m;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cin >> b[y][x];
		}
	}
	std::cout << solved(n, m, b);
}