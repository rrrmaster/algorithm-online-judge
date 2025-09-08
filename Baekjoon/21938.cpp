#include <iostream>
#include <cmath>
struct Color
{
	int r, g, b;
};
Color colors[1001][1001];
int grays[1001][1001];
bool visible[1001][1001];
int n, m, t;

int Avg(Color color)
{
	int avg = (color.r + color.g + color.b) / 3;
	return avg;
	
}

void dfs(int x, int y, int t)
{
	visible[y][x] = true;
	if (x - 1 >= 0 && grays[y][x - 1] == 255 && !visible[y][x - 1])
		dfs(x - 1, y, t);

	if (y - 1 >= 0 && grays[y - 1][x] == 255 && !visible[y - 1][x])
		dfs(x, y - 1, t);

	if (x + 1 < m && grays[y][x + 1] == 255 && !visible[y][x + 1])
		dfs(x + 1, y, t);

	if (y + 1 < n && grays[y + 1][x] == 255 && !visible[y + 1][x])
		dfs(x, y + 1, t);
}

int solved()
{
	int c = 0;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			grays[y][x] = (Avg(colors[y][x]) >= t ? 255 : 0);
		}
	}
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			if (!visible[y][x]&&grays[y][x]==255)
			{
				dfs(x, y, t);
				c += 1;
			}
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
			std::cin >> colors[y][x].r >> colors[y][x].g >> colors[y][x].b;
		}
	}
	std::cin >> t;
	std::cout << solved();
}