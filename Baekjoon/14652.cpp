#include <iostream>

void solved(int n,int m, int k)
{
	std::cout << (k / m) <<  ' ' << (k%m);
}

int main()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	solved(n, m, k);
}