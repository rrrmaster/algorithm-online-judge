#include <iostream>
int n;
int arr[20001];
int solved()
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != i + 1)
			c += 1;
	}
	return c;
}
int main()
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << solved();
}
