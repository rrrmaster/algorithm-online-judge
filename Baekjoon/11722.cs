using System;
using System.Linq;
using static System.Console;

var n = int.Parse(ReadLine());
var dp = new int[n];
var arr = Array.ConvertAll(ReadLine().Split(), int.Parse);
for (int i = 0; i < n; i++)
{
    int count = 0;
    for (int j = 0; j <= i; j++)
    {
        if (arr[i] < arr[j])
            count = Math.Max(count, dp[j]);
    }
    dp[i] = count + 1;
}
Write(dp.Max());