#include <iostream>
#include <climits>
#include <algorithm>

int n, b, h, w;
void solved()
{
	int cost = INT_MAX;
	for (int i = 0; i < h; i++)
	{
		int a, p;
		std::cin >> p;

		for (int j = 0; j < w; j++)
		{
			std::cin >> a;
			if (a >= n)
				cost = std::min(cost, p * n);
		}
	}
	if (cost <= b)
		std::cout << cost << std::endl;
	else
		std::cout << "stay home" << std::endl;
}
int main()
{
	while (std::cin >> n >> b >> h >> w)
	{
		solved();
	}
}