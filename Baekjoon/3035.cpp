#include <iostream>

void solved(char print[][51], int r, int c, int zr, int zc)
{
	for (int y = 0; y < r; y++)
	{
		for (int sy = 0; sy < zr; sy++)
		{
			for (int x = 0; x < c; x++)
			{
				for (int sx = 0; sx < zc; sx++)
				{
					std::cout << print[y][x];
				}
			}
			std::cout << '\n';
		}
	}

}

int main()
{
	char print[51][51];
	int r, c, zr, zc;
	std::cin >> r >> c >> zr >> zc;
	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			std::cin >> print[y][x];
		}
	}
	solved(print, r, c, zr, zc);
}