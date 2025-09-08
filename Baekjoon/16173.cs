using System;
using System.Collections.Generic;
using static System.Console;

int n;
var grid = new int[3, 3];
var visible = new bool[3, 3];

Input();
bool flag = Solution();


Write(flag ? "HaruHaru" : "Hing");

bool Solution()
{
    var dirs = new Point[] { new Point(1, 0), new Point(0, 1), };
    var q = new Queue<Point>();
    q.Enqueue(new Point(0, 0));
    while (q.Count > 0)
    {
        var point = q.Dequeue();
        if (point.x == n - 1 && point.y == n - 1)
        {
            return true;
        }
        foreach (var dir in dirs)
        {
            var temp = new Point(point.x + dir.x * grid[point.y, point.x], point.y + dir.y * grid[point.y, point.x]);
            if (temp.x < n && temp.y < n && !visible[temp.y, temp.x])
            {
                visible[temp.y, temp.x] = true;
                q.Enqueue(temp);
            }
        }
    }
    return false;

}

void Input()
{
    n = Convert.ToInt32(ReadLine());
    for (int i = 0; i < n; i++)
    {
        var split = ReadLine().Split(' ');
        for (int j = 0; j < n; j++)
        {
            grid[i,j] = Convert.ToInt32(split[j]);
        }
    }
}
public struct Point
{
    public int x, y;

    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}