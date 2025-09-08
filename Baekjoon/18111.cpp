#include <iostream>
#include <cmath>

int n, m, b;
int arr[501][501];
void solved()
{
	int t = 100000000, bh = -1;
	for (int y = 0; y <= 256; y++)
	{
		int tempBlock = b;
		int tempTime = 0;
		for (int z = 0; z < n; z++)
		{
			for (int x = 0; x < m; x++)
			{
				int diff = std::abs(arr[z][x] - y);
				if (arr[z][x] > y)
				{
					tempBlock += diff;
					tempTime += diff * 2;
				}
				else if (arr[z][x] < y)
				{

					tempBlock -= diff;
					tempTime += diff;
				}
			}
		}
		
		if (tempBlock >= 0 && tempTime <= t)
		{
			bh = y;
			t = tempTime;
		}

	}
	std::cout << t << ' ' << bh;
}

int main()
{
	std::cin >> n >> m >> b;
	for (int z = 0; z < n; z++)
	{
		for (int x = 0; x < m; x++)
		{
			std::cin >> arr[z][x];
		}
	}
	solved();
}