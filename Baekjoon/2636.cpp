#include <iostream>
#include <queue>

struct Point {
	int x, y;
};
Point dir[] = {
	{ 1,0},
	{-1,0},
	{ 0, 1},
	{ 0, -1}
};

int h, w;
char arr[101][101];
void solved()
{
	int day = 0;
	int cheese = 0;
	int count = 0;
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (arr[y][x] == '1')
			{
				cheese++;
			}
		}
	}

	while (cheese > 0)
	{
		day += 1;
		count = cheese;

		bool visible[101][101] = {};
		std::queue<Point> q;
		
		q.push({ 0,0 });
		visible[0][0] = true;
		while (!q.empty())
		{
			Point p = q.front();
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				Point temp = { p.x + dir[i].x, p.y + dir[i].y };
				if (0 <= temp.x && temp.x < w &&
					0 <= temp.y && temp.y < h && 
					!visible[temp.y][temp.x])
				{
					if (arr[temp.y][temp.x] == '1')
					{
						cheese -= 1;
						arr[temp.y][temp.x] = '0';
					}
					else
					{
						q.push(temp);
					}
					visible[temp.y][temp.x] = true;
				}
			}
		}
	}
	std::cout << day << '\n';
	std::cout << count << '\n';
}

int main()
{
	std::cin >> h >> w;
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			std::cin >> arr[y][x];
		}
	}
	solved();
}