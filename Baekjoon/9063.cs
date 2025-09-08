using System;
using static System.Console;

int n, x, y;
int minX, minY, maxX, maxY;

Input();
Solution();

void Input()
{
    n = Convert.ToInt32(ReadLine());
    
    minX = int.MaxValue;
    minY = int.MaxValue;
    maxX = int.MinValue;
    maxY = int.MinValue;

    while (n-- > 0)
    {
        var split = ReadLine().Split();
        x = Convert.ToInt32(split[0]);
        y = Convert.ToInt32(split[1]);

        minX = Math.Min(minX, x);
        minY = Math.Min(minY, y);
        maxX = Math.Max(maxX, x);
        maxY = Math.Max(maxY, y);
    }
}
void Solution()
{
    Write((maxX - minX) * (maxY - minY));
}