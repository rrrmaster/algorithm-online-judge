#include <iostream>

int main()
{
	int n;
	long long int m = 5;
	std::cin >> n;
	for (int i = 1; i < n; i++)
		m += (7 + ((i - 1) * 3)) % 45678;
	std::cout << m % 45678;
}