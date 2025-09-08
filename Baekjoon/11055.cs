using System;
using System.Linq;
using static System.Console;

var n = int.Parse(ReadLine());
var dp = new int[n];
var arr = Array.ConvertAll(ReadLine().Split(), int.Parse);
for (int i = 0; i < n; i++)
{
    int sum = 0;
    for (int j = 0; j <= i; j++)
    {
        if (arr[i] > arr[j])
            sum = Math.Max(sum, dp[j]);
    }
    dp[i] = sum + arr[i];
}
Write(dp.Max());