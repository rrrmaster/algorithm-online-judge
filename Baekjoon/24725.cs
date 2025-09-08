using static System.Convert;
using static System.Console;

var split = ReadLine().Split();
var n = ToInt32(split[0]);
var m = ToInt32(split[1]);
var grid = new char[n, m];
var total = 0;
for (int y = 0; y < n; y++)
{
    var str = ReadLine();
    for (int x = 0; x < m; x++)
    {
        grid[y, x] = str[x];
    }
}
//→
for (int y = 0; y < n; y++)
{
    for (int x = 0; x <= m - 4; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y, x + i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↓
for (int y = 0; y <= n - 4; y++)
{
    for (int x = 0; x < m; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y + i, x]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↑
for (int y = 3; y < n; y++)
{
    for (int x = 0; x < m; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y - i, x]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//←
for (int y = 0; y < n; y++)
{
    for (int x = 3; x < m; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y, x - i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↘
for (int y = 0; y <= n - 4; y++)
{
    for (int x = 0; x <= m - 4; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y + i, x + i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↗
for (int y = 3; y < n; y++)
{
    for (int x = 0; x <= m - 4; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y - i, x + i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↙
for (int y = 0; y <= n - 4; y++)
{
    for (int x = 3; x < m; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y + i, x - i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}

//↖
for (int y = 3; y < n; y++)
{
    for (int x = 3; x < m; x++)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (IsMBTI(i, grid[y - i, x - i]))
            {
                count++;
            }
        }
        if (count == 4)
        {
            total++;
        }
    }
}


Write(total);
bool IsMBTI(int index, char c) =>
    (index == 0 && (c == 'E' || c == 'I')) ||
    (index == 1 && (c == 'N' || c == 'S')) ||
    (index == 2 && (c == 'F' || c == 'T')) ||
    (index == 3 && (c == 'P' || c == 'J'));