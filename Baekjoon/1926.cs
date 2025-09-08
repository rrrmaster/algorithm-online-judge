using System;
using System.Collections;
using static System.Console;
using static System.Convert;

int n, m;


int[,] arr;
bool[,] visible;

Point[] dirs = new Point[]
{
    new Point(1,0),
    new Point(0,1),
    new Point(-1,0),
    new Point(0,-1),
};

Input();
var value = Solution();
Output(value);

void Input()
{
    var split = ReadLine().Split();
    n = ToInt32(split[0]);
    m = ToInt32(split[1]);
    arr = new int[n, m];
    visible = new bool[n, m];

    for (int y = 0; y < n; y++)
    {
        split = ReadLine().Split();
        for (int x = 0; x < m; x++)
        {
            arr[y, x] = ToInt32(split[x]);
        }
    }

}

(int count, int max) Solution()
{
    int count = 0;
    int max = 0;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (!visible[y, x] && arr[y, x] == 1) 
            {
                int dfs = DFS(new Point(x, y));
                max = Math.Max(max, dfs);
                count += 1;

            }
        }
    }
    return (count, max);
}

int DFS(Point point)
{
    int count = 1;
    visible[point.y, point.x] = true;
    for (int dir = 0; dir < 4; dir++)
    {
        var temp = new Point(dirs[dir].x + point.x, dirs[dir].y + point.y);
        if (temp.x >= 0 && temp.y >= 0 && temp.x < m && temp.y < n && arr[temp.y, temp.x] == 1 && !visible[temp.y, temp.x])
        {
            count += DFS(temp);
        }
    }
    return count;
}

void Output((int count, int max) value)
{
    WriteLine(value.count);
    WriteLine(value.max);
}

public record struct Point(int x, int y);