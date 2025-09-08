using System;
using static System.Console;

int n, m, k;
int[,] a, b, c;

Input();
Solution();
Print();

void Input()
{
    var split = ReadLine().Split();
    n = Convert.ToInt32(split[0]);
    m = Convert.ToInt32(split[1]);
    a = new int[n, m];
    for (int y = 0; y < n; y++)
    {
        split = ReadLine().Split();
        for (int x = 0; x < m; x++)
        {
            a[y, x] = Convert.ToInt32(split[x]);
        }
    }

    split = ReadLine().Split();
    k = Convert.ToInt32(split[1]);
    b = new int[m, k];

    for (int y = 0; y < m; y++)
    {
        split = ReadLine().Split();
        for (int x = 0; x < k; x++)
        {
            b[y, x] = Convert.ToInt32(split[x]);
        }
    }
}

void Solution()
{
    c =new int[n, k];

    for (int e = 0; e < k; e++)
    {
        for (int w = 0; w < n; w++)
        {
            for (int q = 0; q < m; q++)
            {
                c[w, e] += a[w, q] * b[q, e];

            }
        }
    }
}

void Print()
{
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < k; x++)
        {
            Write($"{c[y, x]} ");
        }
        WriteLine();
    }
}