#include <iostream>
#include <queue>
#include <algorithm>

#define OIL '@'

struct Point
{
	int x, y;
};

Point dir[] =
{
	{ 1, 1},
	{ 0, 1},
	{-1, 1},

	{ 1, 0},
	{-1, 0},

	{ 1,-1},
	{ 0,-1},
	{-1,-1},
};

int visible[101][101];
char arr[101][101];

bool oil_check(int x, int y)
{
	return arr[y][x] == OIL && !visible[y][x];
}

void oil_dfs(int x, int y)
{
	visible[y][x] = true;
	for (int i = 0; i < 8; i++)
	{
		Point p = { x + dir[i].x,y + dir[i].y };
		if (oil_check(p.x, p.y))
		{
			oil_dfs(p.x, p.y);
		}
	}
}

int solved(int n, int m)
{
	int count = 0;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			if (oil_check(x, y))
			{
				oil_dfs(x, y);
				count += 1;
			}
		}
	}
	return count;
}
int main()
{
	int n, m;
	
	while (std::cin >> n >> m && m != 0)
	{
		std::fill(&visible[0][0], &visible[100][100], false);

		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < m; x++)
			{
				std::cin >> arr[y][x];
			}
		}
		std::cout << solved(n, m) << '\n';
	}
}