#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string a, b;
	std::cin >> a >> b;

	std::string result;
	if (a.size() < b.size())
		std::swap(a, b);

	int c = 0;
	for (int i = 0; i < b.size(); i++)
	{
		int temp = a[a.size() - 1 - i] + b[b.size() - 1 - i] - '0' * 2 + c;
		result += temp % 10;
		c = temp / 10;
	}
	for (int i = b.size(); i < a.size(); i++)
	{
		int temp = a[a.size() - 1 - i] - '0' + c;
		result += temp % 10;
		c = temp / 10;
	}
	if (c != 0)
		result += c;
	for (int i = result.size()-1; i >=0; i--)
	{
		std::cout << (char)(result[i] + '0');
	}
}