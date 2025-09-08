#include <iostream>

int main()
{
	int n;
	char a[101][101];
	
	std::cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		std::cin >> a[i / n][i % n];
	}

	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < n; j++) {
			if (a[i][j] != a[j][i])
				flag = false;
		}
		if (!flag)
		{
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
}