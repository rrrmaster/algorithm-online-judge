#include <iostream>
#include <cmath>

int solved(int l, int a, int b, int c, int d)
{
	return l - std::max(std::ceil(a / (float)c), std::ceil(b / (float)d));
}
int main()
{
	int l, a, b, c, d;
	std::cin >> l >> a >> b >> c >> d;
	std::cout << solved(l, a, b, c, d);
}
