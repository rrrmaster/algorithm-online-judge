#include <iostream>

const char* solved(char* str,int n)
{
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'A')a += 1;
		else b += 1;
	}

	if (a == b) 
		return "Tie";
	else if (a > b) 
		return "A";
	else 
		return "B";
}

int main()
{
	int n;
	char str[16];
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> str[i];
	std::cout << solved(str, n);
}