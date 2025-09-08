#include <iostream>
#include <string>

bool solved(std::string a, std::string b)
{
	int n = a.size();
	char arr1[26] = {}, arr2[26] = {};
	
	if (a.size() != b.size())
		return false;

	for (int i = 0; i < n; i++)
	{
		arr1[a[i] - 'a']++;
		arr2[b[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr1[i] != arr2[i])
			return false;
	}
	return true;
}
int main()
{
	int t = 1;
	std::string a, b;
	while (std::cin >> a >> b && a.compare("END") != 0)
	{
		printf("Case %d: %s\n", t++, solved(a, b) ? "same" : "different");
	}
}