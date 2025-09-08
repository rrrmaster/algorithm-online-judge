#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		int hamming = 0;
		std::string a, b;
		std::cin >> a >> b;
		for (int i = 0; i < a.size(); i++)
		{
			hamming += (a[i] != b[i]);
		}
		printf("Hamming distance is %d.\n", hamming);
	}
}