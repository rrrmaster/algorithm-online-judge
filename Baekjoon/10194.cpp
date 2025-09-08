#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		int year, month, day;
		int nMonth=0, nDay=0;
		int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int newMonths[13] = { 28,28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,28 };
		std::cin >> year >> month >> day;

	
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			months[1] = 29;

		int temp = 0;
		day -= 1;
		for (int i = 0; i < month; i++)
		{
			if (i == month - 1)temp += day;
			else temp += months[i];
		}
		for (int i = 0; i < 13; i++)
		{
			if (temp >= newMonths[i]) {
				nMonth += 1;
				temp -= newMonths[i];
			}
			else {
				nDay = temp;
				break;
			}
		}
		if(nMonth < 13)
			printf("%d/%d/%d became %d/%d/%d\n", year, month, day + 1,year,nMonth + 1,nDay + 1);
		else
			printf("%d/%d/%d became a HOLIDAY\n", year, month, day + 1);
	}
}