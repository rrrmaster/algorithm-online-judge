#include <iostream>

bool isPal(int n)
{
	int m = 0;
	for (int i = n; i > 0; i /= 10)
	{
		m *= 10;
		m += i%10;
	}
	while (m > 0)
	{
		if (m % 10 != n % 10)return false;
		m /= 10;
		n /= 10;
	}
	return true;
}
int main()
{
	int n;
	while (std::cin >> n && n != 0)
	{
		std::cout << (isPal(n) ? "yes" : "no") << '\n';
	}
}