#include <iostream>

void solved(char mail[][101], int n, int m)
{
	char boldMail[101][101] = {};
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			if (mail[y][x] == '#')
			{
				boldMail[y][x] = '#';
				boldMail[y+1][x] = '#';
				boldMail[y][x+1] = '#';
				boldMail[y+1][x+1] = '#';
			}
			if (boldMail[y][x] == 0 && mail[y][x] == '.')
			{
				boldMail[y][x] = '.';
			}
		}
	}
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cout << boldMail[y][x];
		}
		std::cout << '\n';
	}
}

int main()
{
	char mail[101][101];
	int n, m;
	std::cin >> n >> m;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cin >> mail[y][x];
		}
	}
	solved(mail, n, m);
}