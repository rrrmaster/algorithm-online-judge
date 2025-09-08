using System;
using static System.Console;

int t = 1;
int w = 0, l = 0, r = 0;

while (Input())
{
    Solution();
}

bool Input()
{
    var split = ReadLine().Split();
    r = Convert.ToInt32(split[0]);
    if (r == 0)
        return false;
    w = Convert.ToInt32(split[1]);
    l = Convert.ToInt32(split[2]);
    return true;
}

void Solution()
{
    var h = Math.Sqrt((w * w + l * l) / 4.0f);
    if (r >= h)
    {
        WriteLine($"Pizza {t} fits on the table.");
    }
    else
    {
        WriteLine($"Pizza {t} does not fit on the table.");
    }
    t += 1;

}