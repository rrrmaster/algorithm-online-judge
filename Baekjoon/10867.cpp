#include <iostream>
bool a[2001] = {};

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		a[temp + 1000] = true;
	}
	for (int i = 0; i < 2001; i++)
	{
		if (a[i])std::cout << i - 1000 << ' ';
	}
}