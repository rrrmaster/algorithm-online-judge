using System;
using static System.Console;
using static System.Convert;

int r, c;
char[,] grid;
bool[,] visit;
int k = 0, v = 0;

Point[] dirs = new Point[4]
{
    new Point(1,0),
    new Point(-1,0),
    new Point(0,1),
    new Point(0,-1),

};

Input();
Solution();
Print();

void Input()
{
    var split = ReadLine().Split();
    r = ToInt32(split[0]);
    c = ToInt32(split[1]);
    
    grid = new char[r, c];
    visit = new bool[r, c];

    for (int y = 0; y < r; y++)
    {
        var str = ReadLine();
        for (int x = 0; x < c; x++)
        {
            grid[y, x] = str[x];  
        }
    }
}

(int v,int k) DFS(Point point)
{
    (int v, int k) result = new(0, 0);
    visit[point.y, point.x] = true;

    if (grid[point.y, point.x] == 'v') result.v += 1;
    else if (grid[point.y, point.x] == 'k') result.k += 1;

    foreach (var dir in dirs)
    {
        var temp = new Point(dir.x + point.x,dir.y + point.y);

        if (0 <= temp.x && temp.x < c && 0 <= temp.y && temp.y < r && !visit[temp.y,temp.x] && grid[temp.y,temp.x] !='#')
        {
            var value = DFS(temp);
            result.v += value.v;
            result.k += value.k;
        }
    }
    return result;
}

void Solution()
{
    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            if (!visit[y, x] && grid[y, x] != '#')
            {
                var value = DFS(new Point(x, y));
                if (value.v >= value.k) v += value.v;
                else k += value.k;
            }
        }
    }
}

void Print()
{
    Write($"{k} {v}");
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