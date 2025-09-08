#include <iostream>
#include <string>

std::string solved(int k, std::string s)
{
	std::string str;
	for (int i = 0; i < s.size(); i += k)
	{
		str.push_back(s[i]);
	}
	return str;
}

int main()
{
	int k;
	std::string s;
	std::cin >> k;
	std::cin >> s;

	std::cout << solved(k, s);
}