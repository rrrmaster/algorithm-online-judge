#include <iostream>
#include <string>
#include <queue>

#define LAKE '*'
#define HEDGEHOG 'S'
#define CAVE 'D'
#define ROCK 'X'
#define GROUND '.'

struct Point
{
	int x, y;
};
Point dir[] = {
	{ 1, 0},
	{-1, 0},
	{ 0, 1},
	{ 0,-1},
};
int r, c;

char arr[51][51];
int counting[51][51] = {};
int lakeDay[51][51];

void lake()
{
	std::queue<Point> q;
	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			if (arr[y][x] == LAKE)
			{
				q.push({ x,y });
			}
		}
	}
	while (!q.empty())
	{
		Point p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			Point temp = { p.x + dir[i].x, p.y + dir[i].y };

			if (0 <= temp.x && temp.x < c && 0 <= temp.y && temp.y < r && lakeDay[temp.y][temp.x] == 0 && arr[temp.y][temp.x] == GROUND)
			{
				lakeDay[temp.y][temp.x] = lakeDay[p.y][p.x] + 1;
				q.push(temp);
			}
		}
	}
}
void movement(Point start, Point end)
{
	std::queue<Point> q;
	q.push(start);

	while (!q.empty())
	{
		Point p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			Point temp = { p.x + dir[i].x, p.y + dir[i].y };
			if (0 <= temp.x && temp.x < c && 0 <= temp.y && temp.y < r && counting[temp.y][temp.x] == 0)
			{
				if (arr[temp.y][temp.x] == CAVE || (arr[temp.y][temp.x] == GROUND && (lakeDay[temp.y][temp.x] == 0 || counting[p.y][p.x] + 1 < lakeDay[temp.y][temp.x])))
				{
				counting[temp.y][temp.x] = counting[p.y][p.x] + 1;
				q.push(temp);
				}
			}
		}
	}
}
void solved()
{
	Point start, end;
	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			if (arr[y][x] == HEDGEHOG)
			{
				start = { x,y };
			}
			else if (arr[y][x] == CAVE)
			{
				end = { x,y };
			}
		}
	}
	lake();
	movement(start, end);
	std::cout << (counting[end.y][end.x] != 0 ? std::to_string(counting[end.y][end.x]) : "KAKTUS");
}

int main()
{
	std::cin >> r >> c;
	for (int y = 0; y < r; y++)
	{
		for (int x = 0; x < c; x++)
		{
			std::cin >> arr[y][x];
		}
	}
	solved();
}