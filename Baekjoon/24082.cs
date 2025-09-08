using static System.Console;
using static System.Convert;

int x;
Input();
Output(Solution());

void Input()
{
    x = ToInt32(ReadLine());
}

int Solution()
{
    return x * x * x;
}

void Output(int output)
{
    Write(output);
}