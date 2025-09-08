#include <iostream>
#include <string>
int main()
{
	int n, m;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int s = 0;
		std::string str;
		std::cin >> m;
		for (int i = 0; i < m; i++)
		{
			std::cin >> str;
			s += !str.compare("sheep");
		}
		printf("Case %d: This list contains %d sheep.\n", i, s);
		if (n != i)printf("\n");
	}
}