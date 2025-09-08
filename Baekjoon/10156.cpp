#include <iostream>
#include <algorithm>


int k, n, m;
int solved()
{
	return std::max(0, k * n - m);
}

int main()
{
	std::cin >> k >> n >> m;
	std::cout << solved();
}