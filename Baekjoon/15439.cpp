#include <iostream>

int solved(int n)
{
	return n * (n - 1);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << solved(n);
}