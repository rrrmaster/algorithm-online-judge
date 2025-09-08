using static System.Console;

var a = ReadLine();
var b = ReadLine();

var lcs = new int[a.Length + 1, b.Length + 1];
var max = 0;
for (int i = 0; i <= a.Length; i++)
{
    for (int j = 0; j <= b.Length; j++)
    {
        if (i == 0 || j == 0)
            lcs[i, j] = 0;
        else if (a[i - 1] == b[j - 1])
            lcs[i, j] = lcs[i - 1, j - 1] + 1;
        else
            lcs[i, j] = Math.Max(lcs[i - 1, j], lcs[i, j - 1]);
    }
}
Write(lcs[a.Length , b.Length]);