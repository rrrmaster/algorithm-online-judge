using System;

int t = 1;
int n, m, c, max;
int[] arr; 
int[] arr1;

while (true)
{
    Input();
    if (n == 0 && m == 0 && c == 0)
        break;


    bool blown = Solution();
    Console.WriteLine($"Sequence {t}");
    if(blown)
    {
        Console.WriteLine($"Fuse was blown.\n");
    }
    else
    {
        Console.WriteLine($"Fuse was not blown.");
        Console.WriteLine($"Maximal power consumption was {max} amperes.\n");
    }
    t += 1;
}

void Input()
{
    string[] split = Console.ReadLine().Split(' ');
    n = Convert.ToInt32(split[0]);
    m = Convert.ToInt32(split[1]);
    c = Convert.ToInt32(split[2]);
    max = 0;

    arr = new int[n];
    arr1 = new int[m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = Convert.ToInt32(Console.ReadLine());
    }
    for (int i = 0; i < m; i++)
    {
        arr1[i] = Convert.ToInt32(Console.ReadLine());
    }
}
bool Solution()
{
    int v = 0;
    bool[] turn = new bool[20];
    for (int i = 0; i < m; i++)
    {
        int index = arr1[i] - 1;
        turn[index] = !turn[index];

        if (turn[index])
            v += arr[index];
        else
            v -= arr[index];
        if (v > c)
        {
            return true;
        }

        max = Math.Max(max, v);
    }

    return false;
}