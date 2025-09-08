#include <iostream>
#include <stack>

int main()
{
	int n;
	int sticks[100001] = {};
	std::stack<int> s({ 0 });

	std::cin >> n;

	
	for (int i = 0; i < n; i++)
	{
		std::cin >> sticks[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (sticks[i] > s.top())
			s.push(sticks[i]);
	}

	std::cout << s.size() - 1;
}