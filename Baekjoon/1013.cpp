#include <iostream>
#include <string>
#include <regex>

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();
	while (n--)
	{
		std::string str;
		std::cin >> str;
		std::regex pattern("(100+1+|01)+");
		std::cout << (std::regex_match(str, pattern) ? "YES" : "NO") << '\n';
	}
}