#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

struct Point {
	int x, y;
};
Point dirs[] = {
	{-1, 1},
	{ 0, 1},
	{ 1, 1},

	{-1, 0},
	{ 1, 0},

	{-1,-1},
	{ 0,-1},
	{ 1,-1},
};
std::vector<Point> points;
int n, m;
int grid[101][71];
bool visible[101][71];
void DFS(Point p)
{
	visible[p.y][p.x] = true;
	for (int i = 0; i < 8; i++)
	{
		Point temp = { p.x + dirs[i].x, p.y + dirs[i].y };
		if (0 <= temp.x && temp.x < m && 0 <= temp.y && temp.y < n
			&& !visible[temp.y][temp.x]
			&& grid[temp.y][temp.x] > 0
			&& grid[p.y][p.x] >= grid[temp.y][temp.x])
		{
			DFS(temp);
		}
	}
}
int compare(Point a, Point b)
{
	return grid[a.y][a.x] > grid[b.y][b.x];
}
int solved()
{
	int c = 0;
	for (int i = 0; i < points.size(); i++)
	{
		if (grid[points[i].y][points[i].x] > 0 && !visible[points[i].y][points[i].x])
		{
			c += 1;
			DFS(points[i]);
		}
	}
	return c;
}

int main()
{
	std::cin >> n >> m;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cin >> grid[y][x];
			if (grid[y][x] > 0)
			{
				points.push_back({ x,y });
			}
		}
	}
	std::sort(points.begin(), points.end(),compare);
	std::cout << solved();

}