using System.Linq;
using static System.Console;

string str;

Input();
Output(Solution());

void Input()
{
    str = ReadLine();
}

bool Solution()
{
    return str.Select(p => p - '0').Select((value, index) => { return (index % 2 == 0 ? ((value * 2) % 10 + (value * 2) / 10) : value); }).Sum() % 10 == 0;
}

void Output(bool value)
{
    Write(value ? "DA" : "NE");
}