using System;
using System.Linq;
using System.Text;
using static System.Console;
var a = Array.ConvertAll(ReadLine().Split(), int.Parse);
var n = a[0];
var m = a[1];
var grid = new int[n, n];
var dp = new int[n, n];
var sb = new StringBuilder();

for (int i = 0; i < n; i++)
{
    var split = ReadLine().Split();
    for (int j = 0; j < n; j++)
    {
        grid[i, j] = int.Parse(split[j]);
    }
}
var list = Enumerable.Range(0, m).Select(_ => ReadLine()).Select(s =>
{
    var split = Array.ConvertAll(s.Split(), int.Parse);
    return (x1: split[0], y1: split[1], x2: split[2], y2: split[3]);
}).ToArray();
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        dp[i, j] = grid[i, j] + 
            (i - 1 >= 0 ? dp[i - 1, j] : 0) + 
            (j - 1 >= 0 ? dp[i, j - 1] : 0) - 
            (i - 1 >= 0 && j - 1 >= 0 ? dp[i - 1, j - 1] : 0);
    }
}
foreach (var item in list)
{
    var x1 = item.x1 - 1;
    var y1 = item.y1 - 1;
    var x2 = item.x2 - 1; 
    var y2 = item.y2 - 1;
    long sum = dp[x2, y2] 
        - (y1 - 1 >= 0 ? dp[x2, y1 - 1] : 0) 
        - (x1 - 1 >= 0 ? dp[x1 - 1, y2] : 0) 
        + (x1 - 1 >= 0 && y1 - 1 >= 0 ? dp[x1 - 1, y1 - 1] : 0);
    sb.Append(sum+"\n");
}
Write(sb.ToString());
