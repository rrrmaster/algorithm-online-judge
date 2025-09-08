#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		int sum = 0;
		bool alphabet[26] = {};
		std::string str;
		std::cin >> str;
		for (char& a : str)
		{
			alphabet[a - 'A'] = true;
		}
		for (int i = 0; i < 26; i++)
		{
			sum += !alphabet[i] * ('A' + i);
		}
		std::cout << sum << '\n';
	}
}