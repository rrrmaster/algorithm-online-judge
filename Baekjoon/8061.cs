using System;
using System.Collections.Generic;
using System.Text;
using static System.Console;

int n, m;
char[] grid;
int[] visit;

Input();
Solution();
Print();

void Input()
{
    var split = ReadLine().Split();
    n = Convert.ToInt32(split[0]);
    m = Convert.ToInt32(split[1]);
    grid = new char[n*m];
    visit = new int[n*m];
    for (int y = 0; y < n; y++)
    {
        var str = ReadLine();
        for (int x = 0; x < m; x++)
        {
            grid[y * m + x] = str[x];
        }
    }
}

void Solution()
{
    Queue<(Point p, int c)> q = new Queue<(Point p , int c)>();
    Point[] dirs = new Point[]
    {
        new Point(1,0),
        new Point(0,1),
        new Point(-1,0),
        new Point(0,-1),
    };

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (grid[y * m + x] == '1') 
            {
                q.Enqueue((new Point(x, y), 0));
            }
        }
    }

    while(q.Count > 0)
    {
        var temp = q.Dequeue();
        foreach (var dir in dirs)
        {
            var point = new Point(dir.x + temp.p.x, dir.y + temp.p.y);
            if (0 <= point.x && point.x < m && 0 <= point.y && point.y < n && 
                grid[point.y * m + point.x] == '0' && 
                visit[point.y * m + point.x] == 0) 
            {
                visit[point.y * m + point.x] = temp.c + 1;
                q.Enqueue((point, temp.c + 1));
            }
        }
    }

}

void Print()
{
    StringBuilder sb = new StringBuilder();
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            sb.Append($"{visit[y * m + x]} ");
        }
        sb.Append('\n');
    }
    Write(sb);
}

struct Point
{
    public int x, y;
    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}