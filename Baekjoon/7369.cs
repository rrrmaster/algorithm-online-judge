using System;
using static System.Convert;
using static System.Console;

int n = ToInt32(ReadLine());
int haabDay, haabMonth, haabYear;
string[] haabMonths = new string[] { "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet" };
string[] tzolkinMonths = new string[] { "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };

WriteLine(n);
while (n > 0)
{
    n--;
    Input();
    var value = Solution();
    Output(value);
}

void Input()
{
    var str = ReadLine();
    var v = str.Split()[1];
    haabDay = ToInt32(str.Split('.')[0]);
    haabMonth = Array.FindIndex(haabMonths, p => p == v);
    haabYear = ToInt32(str.Split()[2]);
}

(int year, int month, int day) Solution()
{
    int totalDay = haabYear * 365 + haabMonth * 20 + haabDay;
    int tzolkinYear = totalDay / 260;
    int tzolkinMonth = (totalDay % 260) % 20;
    int tzolkinDay = (totalDay % 260) % 13 + 1;
    return (tzolkinYear, tzolkinMonth, tzolkinDay);
}

void Output((int year, int month, int day) value)
{
    WriteLine($"{value.day} {tzolkinMonths[value.month]} {value.year}");
}