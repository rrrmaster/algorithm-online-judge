using System.Linq;
using static System.Console;
using static System.Convert;

int[] arr;
Input();
Output(Solution());

void Input()
{
    var split = ReadLine().Split();
    arr = new int[split.Length];
    for (int i = 0; i < arr.Length; i++)
    {
        arr[i] = ToInt32(split[i]);
    }
}

int Solution()
{
    return arr.Count(p => p > 0);
}

void Output(int output)
{
    Write(output);
}