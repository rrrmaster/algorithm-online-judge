using static System.Console;
using static System.Convert;

int p, q;
Input();
Output(Solution());

void Input()
{
    p = ToInt32(ReadLine());
    q = ToInt32(ReadLine());
}

string Solution()
{
    if (p <= 50 && q <= 10) return "White";
    else if (q > 30) return "Red";
    else return "Yellow";
}

void Output(string type)
{
    Write(type);
}