#include <iostream>
#include <queue>
struct Point
{
	int x, y;
};
char arr[1001][1001];
bool visible[1001][1001];
Point dir[] = {
	{1,0},
	{-1,0},
	{0,1},
	{0,-1},
};

bool solved(int r,int c)
{
	std::queue<Point> queue;
	for (int x = 0; x < c; x++)
	{
		if (arr[0][x] == '0')
		{
			queue.push({ x,0 });
			visible[0][x] = true;
		}
	}
	while (!queue.empty())
	{
		Point p= queue.front();
		for (int i = 0; i < 4; i++)
		{
			Point np{ p.x + dir[i].x ,p.y + dir[i].y };
			if (0 <= np.x && np.x < c && 0 <= np.y && np.y < r && arr[np.y][np.x]=='0' && !visible[np.y][np.x])
			{
				visible[np.y][np.x] = true;
				queue.push(np);
			}
		}
		queue.pop();
	}	
	
	bool flag = false;
	for (int x = 0; x < c; x++)
	{
		if (visible[r - 1][x])
			flag = true;
	}
	return flag;
}

int main()
{
	int n, m;
	std::cin >> m >> n;
	for (int y = 0; y < m; y++)
	{
		for (int x = 0; x < n; x++)
		{
			std::cin >> arr[y][x];
		}
	}
	std::cout << (solved(m, n) ? "YES" : "NO");
}