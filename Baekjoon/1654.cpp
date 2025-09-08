#include <iostream>
#include <algorithm>

long long v[10000];
int main()
{
	int n, k;
	long long max = 0, left = 1, right;
	std::cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		std::cin >> v[i];
		right = std::max(right, v[i]);
	}

	while (left <= right)
	{
		int sum = 0;
		long long mid = (right + left) / 2;
		for (int i = 0; i < k; i++)
		{
			sum += v[i] / mid;
		}

		if (sum >= n)
		{
			left = mid + 1;
			max = std::max(max, mid);
		}
		else
		{
			right = mid - 1;
		}
	}
	std::cout << max;
}