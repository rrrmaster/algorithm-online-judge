#include <iostream>
#include <algorithm>

int solved(int* s, int* t)
{
	int sum0 = 0, sum1 = 0;
	for (int i = 0; i < 4; i++)
	{
		sum0 += s[i];
		sum1 += t[i];
	}
	return std::max(sum0, sum1);
}

int main()
{
	int s[4], t[4];

	for (int i = 0; i < 4; i++)std::cin >> s[i]; 
	for (int i = 0; i < 4; i++)std::cin >> t[i];
	std::cout << solved(s, t);
}