#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
int main()
{
	std::string str, temp;
	int n;
	std::cin >> n;
	std::cin.ignore();
	while (n--)
	{
		std::getline(std::cin, str);
		std::stringstream sstream(str);
		while (sstream >> temp)
		{
			if (temp.size() == 4)
				temp = std::string(4,'*');
			std::cout << temp<< ' ';
		}
		std::cout << '\n';
		if(n!=0)
			std::cout << '\n';
	}

}