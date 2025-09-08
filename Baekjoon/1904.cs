using static System.Console;
using static System.Convert;

var dp = new int[1000001];
int n = ToInt32(ReadLine());
dp[1] = 1;
dp[2] = 2;
for (int i = 3; i <= n; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
Write(dp[n]);