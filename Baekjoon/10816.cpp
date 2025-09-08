#include <iostream>
int a[20000001] = {};

int main()
{
	int n, m;
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		a[temp + 10000000] += 1;
	}

	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		int temp;
		std::cin >> temp;
		std::cout << a[temp + 10000000] << ' ';
	}
}