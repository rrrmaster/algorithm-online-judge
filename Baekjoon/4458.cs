using System;
using static System.Console;
using static System.Convert;

int t;
string str;
t = ToInt32(ReadLine());

while (t > 0)
{
    Input();
    Solution();
    Output();
    t -= 1;
}

void Input()
{
    str = ReadLine();
}

void Solution()
{
    if ('a' <= str[0] && str[0] <= 'z')
    {
        var arr = str.ToArray();
        arr[0] = (char)(arr[0] - 'a' + 'A');
        str = new string(arr);
    }
}

void Output()
{
    WriteLine(str);
}

