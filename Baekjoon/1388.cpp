#include <iostream>

void vertical(int x, int y, int h, char map[][101], bool visited[][101])
{
	visited[y][x] = true;
	if (y > 0 && map[y - 1][x] == '|' && !visited[y - 1][x])
		vertical(x, y - 1, h, map, visited);
	if (y < h - 1 && map[y + 1][x] == '|' && !visited[y + 1][x])
		vertical(x, y + 1, h, map, visited);

	return;
}

void horizontal(int x, int y, int w, char map[][101], bool visited[][101])
{
	visited[y][x] = true;
	if (x > 0 && map[y][x - 1] == '-' && !visited[y][x - 1])
		horizontal(x - 1, y, w, map, visited);
	if (x < w - 1 && map[y][x + 1] == '-' && !visited[y][x + 1])
		horizontal(x + 1, y, w, map, visited);

	return;
}

int main()
{
	int n, m;
	int count = 0;
	char map[101][101] = {};
	bool visited[101][101] = {};

	std::cin >> n >> m;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cin >> map[y][x];
		}
	}
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			if (visited[y][x])
				continue;
			
			if (map[y][x] == '|')
				vertical(x, y, n, map, visited);
			else
				horizontal(x, y, m, map, visited);
			
			count += 1;
		}
	}
	std::cout << count;
}