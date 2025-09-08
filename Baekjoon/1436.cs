using static System.Convert;
using static System.Console;

var dp = new int[10000];
int n = ToInt32(ReadLine());
int i = 666, j = 0;
while (j < n) 
{
    if (isThreeNumber(i))
        dp[j++] = i;
    i++;
}
Write(dp[n - 1]);

bool isThreeNumber(int n)
{
    var temp = n;
    var count = 0;
    var max = 0;
    while(temp != 0)
    {
        if (temp % 10 == 6)
            count += 1;
        else
            count = 0;
        max = Math.Max(max, count);
        temp /= 10;
    }
    return max >= 3;
}