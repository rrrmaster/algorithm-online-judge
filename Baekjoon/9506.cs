using System.Linq;
using static System.Console;
using static System.Convert;

int n;
List<int> list = new List<int>();

while(true)
{
    Input();
    if (n == -1) break;
    Output(Solution());
}

void Input()
{
    n = ToInt32(ReadLine());
}

bool Solution()
{
    list.Clear();
    int m = n / 2 + 1;
    for (int i = 1; i <= m; i++)
    {
        if (n % i == 0)
            list.Add(i);
    }
    return list.Sum() == n;
}

void Output(bool value)
{
    if (value)
    {
        WriteLine($"{n} = {string.Join(" + ",list)}");

    }
    else
    {
        WriteLine($"{n} is NOT perfect.");
    }
}