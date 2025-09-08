#include <iostream>
#include <string>
#include <algorithm>
bool isAnagram(std::string a, std::string b)
{
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	return a.compare(b) == 0;
}
int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		std::string a, b;
		std::cin >> a >> b;
		std::cout << a << " & " << b << " are" << (isAnagram(a, b) ? "" : " NOT") << " anagrams.\n";
	}
}