#include <iostream>
#include <string>

long long int solved(int n, std::string str)
{
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long int v = 0;
		while (i < n && '0' <= str[i] && str[i] <= '9')
		{
			v = v * 10 + str[i] - '0';
			i += 1;
		}
		sum += v;
	}

	return sum;
}

int main()
{
	int n;
	std::string str;
	std::ios_base::sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);

	std::cin >> n;
	std::cin >> str;
	std::cout << solved(n, str);
}