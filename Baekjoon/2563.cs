using System.Linq;
using System.Collections.Generic;
using static System.Console;
var list = new List<(int, int)>();
int n = int.Parse(ReadLine());
for (int i = 0; i < n; i++)
{
    var str = ReadLine().Split();
    int x = int.Parse(str[0]);
    int y = int.Parse(str[1]);
    for (int j = 0; j < 100; j++)
    {
        list.Add((x + j / 10, y + j % 10));
    }
}
Write(list.Distinct().Count());