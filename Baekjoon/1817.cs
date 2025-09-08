using System.Linq;
using static System.Console;
using static System.Convert;

int n, m;
int[] books = null;
Input();
Output(Solution());

void Input()
{
    var split = ReadLine().Split();
    n = ToInt32(split[0]);
    m = ToInt32(split[1]);
    if(n != 0)
        books = ReadLine().Split(' ').Select(p=>ToInt32(p)).ToArray();
}

int Solution()
{
    if (n == 0) return 0;
    int box = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum + books[i] <= m)
        {
            sum += books[i];
        }
        else
        {
            sum = books[i];
            box++;
        }
    }
    return box;
}

void Output(int value)
{
    Write(value);
}