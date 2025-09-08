using static System.Convert;
using static System.Console;

var n = ToInt32(ReadLine());
var p = Enumerable.Range(0, n).Select(p => ReadLine().Split()).Select(p => new Vector2(ToInt32(p[0]), ToInt32(p[1]))).ToList();
var list = new List<int>();

for (int i = 0; i < n; i++)
{
    int count = 1;
    for (int j = 0; j < n; j++)
    {
        if (p[i].x < p[j].x && p[i].y < p[j].y)
        {
            count++;
        }
    }
    list.Add(count);
}
list.ForEach(p => Write($"{p} "));

public record struct Vector2(int x, int y);