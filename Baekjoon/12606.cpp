#include <iostream>
#include <sstream>
#include <string>
#include <stack>
int main()
{
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		std::stack<std::string> v;
		std::string str, temp;
		std::getline(std::cin, str);
		
		std::stringstream stream(str);
		while (stream >> temp)v.push(temp);
		printf("Case #%d: ", i);
		while(!v.empty())
		{
			std::cout << v.top() << ' ';
			v.pop();
		}
		std::cout << '\n';
	}
}