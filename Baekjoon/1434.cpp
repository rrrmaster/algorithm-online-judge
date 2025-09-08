#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	int n, m, sum = 0;
	std::vector<int> a, b;
	std::cin >> n >> m;
	a.resize(n);
	b.resize(m);

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < m; i++)
	{
		std::cin >> b[i];
	}

	int bookPos = 0, boxPos = 0;
	while (boxPos < n && bookPos < m)
	{
		if (a[boxPos] >= b[bookPos])
		{
			a[boxPos] -= b[bookPos];
			bookPos += 1;
		}
		else
			boxPos += 1;

	}
	std::cout << accumulate(a.begin(),a.end(), 0);
}