using System;
using System.Linq;
using static System.Console;
var n = int.Parse(ReadLine());
var arr = Enumerable.Range(0, n).Select(_=>Array.ConvertAll(ReadLine().Split(),int.Parse)).ToList();
var dp = new int[arr.Count+1,3];
for (int i = 1; i <= n; i++)
{
    dp[i, 0] = arr[i - 1][0] + Math.Min(dp[i - 1, 1], dp[i - 1, 2]);
    dp[i, 1] = arr[i - 1][1] + Math.Min(dp[i - 1, 0], dp[i - 1, 2]);
    dp[i, 2] = arr[i - 1][2] + Math.Min(dp[i - 1, 0], dp[i - 1, 1]);
}
Write(Math.Min(Math.Min(dp[n, 0], dp[n, 1]), dp[n, 2]));