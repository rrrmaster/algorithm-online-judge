using System.Linq;
using static System.Console;

string n;
int[] width = new[] { 4, 2, 3, 3, 3, 3, 3, 3, 3, 3 };

while (Input())
{
   Print(Solution());
}

bool Input()
{
    n = ReadLine();
    return n != "0";
}
int Solution()
{
    return n.Length + 1 + n.Sum(p => width[p - '0']);
}

void Print(int n)
{
    WriteLine(n);
}