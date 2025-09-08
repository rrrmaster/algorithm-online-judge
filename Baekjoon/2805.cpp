#include <iostream>
#include <algorithm>

long long a[1000000];
int main()
{
	int n, m;
	int height = 0;
	long long int left = 0, right = 0;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		right = std::max(a[i], right);
	}

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++)
			sum += std::max(0LL, (a[i] - mid));
		if (sum < m)
		{
			right = mid - 1;
		}
		else
		{
			height = std::max(height, (int)mid);
			left = mid + 1;
		}
	}
	std::cout << height;
}