#include <iostream>
#include <vector>
int main()
{
	int n, l;
	std::vector<std::string> c;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string str;
		std::cin >> str;
		c.push_back(str);
	}

	l = c[0].size();
	for (int i = 0; i < l; i++) 
	{
		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (c[0][i] != c[j][i]) 
			{
				flag = false;
				break;
			}

		}
		if (flag) std::cout << c[0][i];
		else std::cout << '?';
	}
}