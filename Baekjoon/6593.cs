using System.Collections.Generic;
using static System.Console;
using static System.Convert;

int l, r, c;
var queue = new Queue<Vector3>();
char[,,] grid;

while (true)
{
    queue.Clear();

    var split = ReadLine().Split();
    l = ToInt32(split[0]);
    r = ToInt32(split[1]);
    c = ToInt32(split[2]);
    grid = new char[c, l, r];

    if (l == 0 && r == 0 && c == 0)
    {
        break;
    }

    for (int y = 0; y < l; y++)
    {
        for (int z = 0; z < r; z++)
        {
            var str = ReadLine();
            for (int x = 0; x < c; x++)
            {
                grid[x, y, z] = str[x];
                if (str[x] == 'S')
                {
                    queue.Enqueue(new Vector3(x, y, z));
                }
            }
        }
        ReadLine();
    }

    if (BFS(out var value))
    {
        WriteLine($"Escaped in {value} minute(s).");
    }
    else
    {
        WriteLine("Trapped!");
    }
}

bool BFS(out int count)
{
    var visible = new int[c, l, r];
    var dirs = new Vector3[]
    {
    new Vector3(+1,0,0),
    new Vector3(-1,0,0),
    new Vector3(0,-1,0),
    new Vector3(0,+1,0),
    new Vector3(0,0,+1),
    new Vector3(0,0,-1),
    };
    while (queue.Count > 0)
    {
        var point = queue.Dequeue();
        foreach (var dir in dirs)
        {
            var temp = new Vector3(point.x + dir.x, point.y + dir.y, point.z + dir.z);
            if (0 <= temp.x && temp.x < c && 0 <= temp.y && temp.y < l && 0 <= temp.z && temp.z < r && visible[temp.x, temp.y, temp.z] == 0)
            {
                if (grid[temp.x, temp.y, temp.z] == '.')
                {
                    visible[temp.x, temp.y, temp.z] = visible[point.x, point.y, point.z] + 1;
                    queue.Enqueue(temp);
                }
                if (grid[temp.x, temp.y, temp.z] == 'E')
                {
                    visible[temp.x, temp.y, temp.z] = visible[point.x, point.y, point.z] + 1;
                    count = visible[temp.x, temp.y, temp.z];
                    return true;
                }
            }
        }
    }
    count = -1;
    return false;
}
public record struct Vector3(int x, int y, int z);
