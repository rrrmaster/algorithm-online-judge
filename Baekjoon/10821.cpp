#include <iostream>
#include <string>

int main()
{
	int n = 1;
	std::string str;
	std::cin >> str;
	for (auto i : str)
	{
		if (i == ',')n++;
	}
	std::cout << n;
}