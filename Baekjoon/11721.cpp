#include<iostream>

int main()
{
	using namespace std;
	char number[101];
	cin >> number;

	for (int i = 0; number[i] != '\0'; i++)
	{
		if (i % 10 == 0 && i != 0)
			cout << '\n';
		cout << number[i];
	}

}
