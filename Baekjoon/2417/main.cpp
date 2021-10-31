#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>

long long n;

long long solved()
{
	long long left = 0;
	long long right = sqrt(n);
	long long mid;
	while (left <= right)
	{
		mid = (left + right) / 2;

		if (mid * mid >= n)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}    
	if (mid * mid == n)
		return mid;
	return mid + 1;
}

int main()
{
	std::cin >> n;
	std::cout << solved();
}
