using System;
using System.Text;
using static System.Console;
using static System.Convert;

int n;
int[] arr;

Input();
Solution();
Print();

void Input()
{
    using var reader = new System.IO.StreamReader(OpenStandardInput());

    n = ToInt32(reader.ReadLine());
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = ToInt32(reader.ReadLine());
    }
}
void Solution()
{
    Array.Sort(arr);
}

void Print()
{
    using var print = new System.IO.StreamWriter(OpenStandardOutput());
    for (int i = 0; i < n; i++)
    {
        print.WriteLine(arr[i].ToString());
    }
}