using System;
using System.Linq;
using static System.Console;

var n = int.Parse(ReadLine());
var arr = new int[n, n];
var dp = new int[n, n];
for (int i = 0; i < n; i++)
{
    var values = Array.ConvertAll(ReadLine().Split(), int.Parse);
    for (int j = 0; j <= i; j++)
    {
        arr[i, j] = values[j];
    }
}
dp[0, 0] = arr[0, 0];
for (int i = 1; i < n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        var a = (j - 1 >= 0     ? dp[i - 1, j - 1] : 0);
        var b = (i != j         ? dp[i - 1, j    ] : 0);
        dp[i, j] = arr[i, j] + Math.Max(a, b);
    }
}
Write( Enumerable.Range(0, n).Max(i => dp[n - 1, i]));
