#include <iostream>

int solved(int a, int b, int c)
{
	if (a == b && b == c)
		return 2;

	if (a >= b && a >= c)
	{
		return b * b + c * c == a * a ? 1 : 0;
	}
	else if (b >= c && b >= a)
	{
		return a * a + c * c == b * b ? 1 : 0;
	}
	else
	{
		return a * a + b * b == c * c ? 1 : 0;
	}
}

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << solved(a, b, c);
}