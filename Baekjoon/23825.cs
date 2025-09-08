using System;
using static System.Console;
using static System.Convert;

int n, m;

Input();
Print(Solution());

void Input()
{
    var split = ReadLine().Split();
    n = ToInt32(split[0]);
    m = ToInt32(split[1]);
}

int Solution()
{
    return Math.Min(n, m) / 2;
}

void Print(int n)
{
    Write(n);
}