var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int n = a[0], m = a[1];
var map = new char[n, m];
var visible = new bool[n, m];
var dirs = new[]
{
    new Point(1, 0),
    new Point(-1, 0),
    new Point(0, 1),
    new Point(0, -1),
};

int dfs(int x, int y)
{
    var c = 0;
    visible[y, x] = true;

    foreach (var dir in dirs)
    {
        var point = new Point(x + dir.x, y + dir.y);
        if (0 <= point.x && point.x < m && 0 <= point.y && point.y < n && map[point.y, point.x] == '.' &&
            !visible[point.y, point.x])
        {
            c += dfs(point.x, point.y);
        }
    }

    return c + 1;
}


for (int y = 0; y < n; y++)
{
    var str = Console.ReadLine();

    for (int x = 0; x < m; x++)
    {
        map[y, x] = str[x];
    }
}

var max = -1;
for (int y = 0; y < n; y++)
{
    for (int x = 0; x < m; x++)
    {
        if (map[y, x] == '.' && !visible[y, x])
        {
            visible[y, x] = true;
            var val2 = dfs(x, y);
            max = Math.Max(max, val2);
        }
    }
}

Console.Write(max);

record Point(int x, int y);