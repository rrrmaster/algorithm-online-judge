using static System.Console;
using static System.Convert;

int n, l, k;
var ps = new System.Collections.Generic.List<(int sub1, int sub2)>();
Input();
Output(Solution());

void Input()
{
    var str = ReadLine().Split();
    n = ToInt32(str[0]);
    l = ToInt32(str[1]);
    k = ToInt32(str[2]);

    for (int i = 0; i < n; i++)
    {
        str = ReadLine().Split();
        ps.Add((ToInt32(str[0]), ToInt32(str[1])));
    }
}

int Solution()
{
    ps.Sort((a, b) =>
    {
        int s0 = (l >= a.sub1 ? 100 : 0) + (l >= a.sub2 ? 40 : 0);
        int s1 = (l >= b.sub1 ? 100 : 0) + (l >= b.sub2 ? 40 : 0);

        if (s0 < s1) return 1;
        else if (s0 > s1) return -1;
        return 0;
    });

    int sum = 0;
    
    for (int i = 0; i < k; i++)
    {
        if (l >= ps[i].sub1) sum += 100;
        if (l >= ps[i].sub2) sum += 40;
    }

    return sum;
}

void Output(int value)
{
    Write(value);
}