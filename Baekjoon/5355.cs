using static System.Console;
using static System.Convert;

int n = ToInt32(ReadLine());
for (int i = 0; i < n; i++)
{
    var split = ReadLine().Split();
    double value = ToDouble(split[0]);
    for (int j = 1; j < split.Length; j++)
    {
        if (split[j] == "@") value *= 3;
        else if (split[j] == "%") value += 5;
        else value -= 7;
    }
    WriteLine(value.ToString("F2"));
}