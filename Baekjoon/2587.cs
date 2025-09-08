using System.Linq;
using static System.Console;
using static System.Convert;

int[] arr;
Input();
Output(Solution());

void Input()
{
    arr = new int[5];
    for (int i = 0; i < arr.Length; i++)
    {
        arr[i] = ToInt32(ReadLine());
    }
}

(int avg, int mid) Solution()
{

    return ((int)arr.Average(), arr.OrderBy(p => p).ToArray()[arr.Length / 2]);
}

void Output((float avg, int mid) output)
{
    WriteLine(output.avg);
    WriteLine(output.mid);
}