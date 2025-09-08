#include <iostream>
#include <string>

int main()
{
	int a, b, i = 1;
	std::string oper;
	while (std::cin >> a >> oper >> b && oper.compare("E") != 0)
	{
		bool flag;
		if (!oper.compare(">"))flag = (a > b);
		else if (!oper.compare(">="))flag = (a >= b);
		else if (!oper.compare("<"))flag = (a < b);
		else if (!oper.compare("<="))flag = (a <= b);
		else if (!oper.compare("=="))flag = (a == b);
		else flag = (a != b);
		printf("Case %d: %s\n", i++, (flag ? "true" : "false"));
	}
}