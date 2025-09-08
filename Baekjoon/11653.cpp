#include <iostream>
#include <vector>

std::vector<int> solved(int n)
{
	std::vector<int> v;
	for (int i = 2; i < (n / 2); i++)
	{
		while (n % i == 0)
		{
			n /= i;
			v.push_back(i);
		}
	}

	if (n != 1)
		v.push_back(n);
	return v;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v = solved(n);
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << '\n';
	}

}