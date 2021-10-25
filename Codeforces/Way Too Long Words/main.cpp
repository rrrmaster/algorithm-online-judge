#include <iostream>
#include <string>
 
int main()
{
	int t, l;
	std::string str;
	std::cin >> t;
	while (t--)
	{
		std::cin >> str;
		l = str.size();
 
		if (str.size() > 10) {
			std::cout << str[0] << (l - 2) << str[l - 1] << '\n';
		}
		else {
 
			std::cout << str << '\n';
		}
	}
}
