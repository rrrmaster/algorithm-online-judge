#include <iostream>
#include <algorithm>

struct Point {
	int x, y;
};
Point dirs[] = {
	{ 0, 1},
	{-1, 0},
	{ 1, 0},
	{ 0,-1},
};
int n;
char grid[101][101];
bool visible[101][101];
void RGB_DFS(Point p)
{
	visible[p.y][p.x] = true;
	for (int i = 0; i < 4; i++)
	{
		Point temp = { p.x + dirs[i].x, p.y + dirs[i].y };
		if (0 <= temp.x && temp.x < n && 0 <= temp.y && temp.y < n
			&& !visible[temp.y][temp.x]
			&& grid[temp.y][temp.x] == grid[p.y][p.x])
		{
			RGB_DFS(temp);
		}
	}
}
void RB_DFS(Point p)
{
	visible[p.y][p.x] = true;
	for (int i = 0; i < 4; i++)
	{
		Point temp = { p.x + dirs[i].x, p.y + dirs[i].y };
		if (0 <= temp.x && temp.x < n && 0 <= temp.y && temp.y < n
			&& !visible[temp.y][temp.x] 
			&& ( grid[temp.y][temp.x] == grid[p.y][p.x] || (grid[temp.y][temp.x] =='R'&& grid[p.y][p.x] =='G') || (grid[temp.y][temp.x] == 'G' && grid[p.y][p.x] == 'R')))
		{
			RB_DFS(temp);
		}
	}
}

void solved()
{
	int c0 = 0, c1 = 0;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			if (!visible[y][x])
			{
				c0 += 1;
				RGB_DFS({ x,y });
			}
		}
	}
	std::fill(&visible[0][0], &visible[n][n], false);
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			if (!visible[y][x])
			{
				c1 += 1;
				RB_DFS({ x,y });
			}
		}
	}
	std::cout << c0 << ' ' << c1;
}

int main()
{
	std::cin >> n ;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			std::cin >> grid[y][x];
		
		}
	}
	solved();

}
