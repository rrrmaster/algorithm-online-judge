#include <iostream>
#include <vector>

int solved(std::vector<int>& v, int n)
{
	int sum = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		max = (v[i] > max) ? v[i] : max;
	}
	sum -= max;
	return sum;
}

int main()
{
	int n;
	std::vector<int> v;
	std::cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::cout << solved(v, n);
}
