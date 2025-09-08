using static System.Convert;
using static System.Console;

var t = ToInt32(ReadLine());
var dp = new int[15, 15];
for (int b = 0; b < 15; b++) dp[0, b] = b;
for (int a = 1; a < 15; a++)
{
    for (int b = 1; b < 15; b++)
    {
        dp[a, b] = dp[a, b - 1] + dp[a - 1, b];
    }
}
while (t-- > 0)
{
    var k = ToInt32(ReadLine());
    var n = ToInt32(ReadLine());
    WriteLine(dp[k, n]);
}
