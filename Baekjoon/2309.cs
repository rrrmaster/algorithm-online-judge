using static System.Console;
using static System.Convert;
using System.Linq;

var arr = new int[9];
for (int i = 0; i < 9; i++)
{
    arr[i] = ToInt32(ReadLine());
}

for (int a = 0; a < 9; a++)
{
    for (int b = a + 1; b < 9; b++)
    {
        for (int c = b + 1; c < 9; c++)
        {
            for (int d = c + 1; d < 9; d++)
            {
                for (int e = d + 1; e < 9; e++)
                {
                    for (int f = e + 1; f < 9; f++)
                    {
                        for (int g = f + 1; g < 9; g++)
                        {
                            if (arr[a] + arr[b] + arr[c]+ arr[d] + arr[e] + arr[f] + arr[g] == 100)
                            {
                                Write($"{string.Join('\n',new int[] { arr[a], arr[b], arr[c], arr[d], arr[e], arr[f], arr[g] }.OrderBy(p=>p))}");
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
}