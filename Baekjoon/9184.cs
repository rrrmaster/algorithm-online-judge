using static System.Console;
using static System.Convert;

var dp = new int[21, 21, 21];
while (true)
{
    var split = ReadLine().Split();
    int a = ToInt32(split[0]);
    int b = ToInt32(split[1]);
    int c = ToInt32(split[2]);
    if (a == -1 && b == -1 && c == -1)
        break;
    int count = W(a, b, c);
    WriteLine($"w({a}, {b}, {c}) = {count}");
}

int W(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;

    else if (a > 20 || b > 20 || c > 20)
        return W(20, 20, 20);

    else if (dp[a, b, c] != 0)
        return dp[a, b, c];

    else if (a < b && b < c)
        return dp[a, b, c] = W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);

    else
        return dp[a, b, c] = W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
}
