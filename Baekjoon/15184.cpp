#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
int main()
{
	int c[26] = {};
	std::string str, temp;
	std::getline(std::cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if (std::isalpha(str[i]) > 0)
		{
			c[std::tolower(str[i])-'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		std::cout << (char)('A' + i) << " | " << std::string(c[i], '*')  << '\n';
	}

}