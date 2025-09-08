using System.Linq;
using System.Text;
using static System.Console;
using static System.Convert;

var split = ReadLine().Split();
var n =ToInt32(split[0]);
var m =ToInt32(split[1]);
var list = ReadLine().Split().Select(p => ToInt32(p)).ToList();
var dp = new int[n];
dp[0] = list[0];
for (int i = 1; i < n; i++)
{
    dp[i] = dp[i - 1] + list[i];
}
var sb = new StringBuilder();
while (m-- > 0)
{
    split = ReadLine().Split();
    int i = ToInt32(split[0]);
    int j = ToInt32(split[1]);
    sb.AppendLine((dp[j - 1] - dp[i - 1] + list[i-1]).ToString());
}
Write(sb.ToString());