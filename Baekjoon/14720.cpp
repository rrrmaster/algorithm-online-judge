#include <iostream>
#include <vector>

int solved(std::vector<int>& v, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (k%3 == (v[i] % 3))
		{
			k += 1;
		}
	}
	return k;
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