#include <iostream>

int solved(int n, int t, int c, int p)
{
	return ((n-1) / t) * c * p;
}

int main()
{
	int n, t, c, p;
	std::cin >> n >> t >> c >> p;
	std::cout << solved(n, t, c, p);
}