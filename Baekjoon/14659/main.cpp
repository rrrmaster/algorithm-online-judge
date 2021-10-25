#include <iostream>
#include <vector>

int solved(std::vector<int>& v, int n)
{
	int c = 0;
	int last = v[0];
	int max = 0;

	for (int i = 1; i < n; i++)
	{
		if (last > v[i])
		{
			c += 1;
			max = (c > max) ? c : max;
		}
		else
		{
			last = v[i];
			c = 0;
		}
	}
	return max;
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
