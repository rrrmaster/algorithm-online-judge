using System;
using System.Linq;
using static System.Console;

int t, c = 1;
int[] arr;
bool flag;
t = Convert.ToInt32(Console.ReadLine());

while (t-- > 0)
{
    Input();
    Solution();
    Print();
}

void Input()
{
    arr = ReadLine().Split().Select(p => Convert.ToInt32(p)).OrderBy(p => p).ToArray();
}

void Solution()
{
    flag = (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]);
}

void Print()
{
    WriteLine($"Scenario #{c}:");
    WriteLine($"{(flag ? "yes" :"no")}");
    if (t != 0) WriteLine();
    c += 1;
}