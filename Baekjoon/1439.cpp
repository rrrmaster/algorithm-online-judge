#include <iostream>
#include <string>

std::string str;

int solved()
{
	int z = 0, o = 0;
	int n = str.size();

	if (str[0] == '0')
		z++;
	else
		o++;
	for (int i = 1; i < n; i++)
	{
		if (str[i - 1] != str[i])
		{
			if (str[i] == '0')
				z++;
			else
				o++;
		}
	}
	return (o > z ? z : o);
}

int main()
{
	std::cin.tie(0);
	std::cin >> str;
	std::cout << solved();
}