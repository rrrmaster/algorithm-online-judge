using static System.Console;
using static System.Convert;

int a, b;
Input();
Output(Solution());

void Input()
{
    a = ToInt32(ReadLine());
    b = ToInt32(ReadLine());
}

int Solution()
{
    return b - a;
}

void Output(int output)
{
    Write(output);
}