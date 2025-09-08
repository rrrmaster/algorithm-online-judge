using static System.Console;
string a, b;

Input();
Output(Solution());

void Input()
{
    var split = ReadLine().Split();
    a = split[0];
    b = split[1];
}

string Solution()
{
    int min = Math.Min(a.Length, b.Length);
    string c = string.Empty;

    if (a.Length < b.Length)
    {
        var temp = a;
        a = b;
        b = temp;
    }
    int cur = 0;
    for (int i = 0; i < b.Length; i++)
    {
        int value = (a[a.Length - 1 - i] + b[b.Length - 1 - i] - (2 * '0')) + cur;

        c += value % 10;
        cur = value / 10;
    }
    for (int i = b.Length; i < a.Length; i++)
    {
        int value = a[a.Length - 1 - i] - '0' + cur;

        c += value % 10;
        cur = value / 10;
    }
    if (cur != 0)
        c += cur;
    return new string(c.Reverse().ToArray());
}

void Output(string output)
{
    Write(output);
}