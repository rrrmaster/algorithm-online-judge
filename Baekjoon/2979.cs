using System;
using System.Linq;
using static System.Console;


int a, b, c;
(int start,int end)[] cars = new (int start, int end)[3];
Input();
Solution();

void Input()
{
    var split = ReadLine().Split();
    a = Convert.ToInt32(split[0]);
    b = Convert.ToInt32(split[1]);
    c = Convert.ToInt32(split[2]);
    for (int i = 0; i < 3; i++)
    {
        split = ReadLine().Split();
        cars[i].start = Convert.ToInt32(split[0]);
        cars[i].end = Convert.ToInt32(split[1]);
    }
}

void Solution()
{
    int[] spend = new int[]{ a, b, c };
    int start = cars.Min(p => p.start);
    int end = cars.Max(p => p.end);
    int money = 0;

    for (int i = start; i <= end; i++)
    {
        int c = 0;
        for (int j = 0; j < 3; j++)
        {
            if (cars[j].start <= i && i<= cars[j].end &&
                cars[j].start <= i+1 && i+1 <= cars[j].end)
                c += 1;
        }
        if (c > 0)
        {
            money += spend[c - 1] * c;

        }
    }
    Write(money);
}