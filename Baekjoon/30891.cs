var str = Console.ReadLine().Split();
int n = int.Parse(str[0]), r = int.Parse(str[1]);
var p = Enumerable.Range(0, n).Select(_ => Console.ReadLine().Split())
    .Select(p => new Point(int.Parse(p[0]), int.Parse(p[1]))).ToArray();
int max = 0;
Point b = null;
for (int y = -100; y <= 100; y++)
{
    for (int x = -100; x <= 100; x++)
    {
        var c = p.Count(i => (i.x - x) * (i.x - x) + (i.y - y) * (i.y - y) <= r * r);
        if (c >= max)
        {
            b = new Point(x, y);
            max = c;
        }
    }
}

Console.Write($"{b.x} {b.y}");

public record Point(int x, int y);