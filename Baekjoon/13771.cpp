#include <iostream>
#include <algorithm>

int main()
{
	int n;
	float a[101];
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::sort(a, a + n);
	std::cout.precision(2);
	std::cout <<std::fixed<< a[1];
}