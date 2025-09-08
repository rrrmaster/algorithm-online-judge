#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> v;
bool compare(std::string a, std::string b)
{
	if (a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.size() < b.size();
	}
}
void solved()
{
	int n = v.size();
	std::sort(v.begin(), v.end(), compare);

}

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::string str;
		std::cin >> str;
		v.push_back(str);
	}
	solved();
	std::string temp;
	for (int i = 0; i < n; i++) {
		if (temp == v[i])continue;
		std::cout << v[i] << std::endl;
		temp = v[i];
	}
}