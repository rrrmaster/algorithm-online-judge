#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();
	while (n--)
	{
		std::string str,temp;
		std::getline(std::cin, str);
		temp = str;
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		int b = std::count(temp.begin(), temp.end(), 'b');
		int g = std::count(temp.begin(), temp.end(), 'g');
		std::cout << str << " is " << (g == b ? "NEUTRAL" : (g > b ? "GOOD" : "A BADDY")) << '\n';
	}
}