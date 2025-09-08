#include <iostream>
#include <vector>
#include <climits>

#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a < b ? a : b)

int main()
{
	int t; 
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);
	std::cin >> t;
	while (t--)
	{
		int n, m;
		std::cin >> n;
		int max = INT_MIN;
		int min = INT_MAX;

		for (int i = 0; i < n; i++)
		{
			std::cin >> m;
			max = MAX(max, m);
			min = MIN(min, m);
		}
		std::cout << min << ' ' << max << '\n';
	}
}