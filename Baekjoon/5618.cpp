#include <iostream>
#include <algorithm>
#include <climits>

int main()
{
	int n, max = INT_MIN;
	int a[4];
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		max = std::max(a[i], max);
	}

	for (int i = 1; i <= max; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] % i == 0)
				s += 1;
		}
		if (s == n)
		{
			std::cout << i << '\n';
		}
	}
}