using System;
using System.Collections.Generic;
using static System.Console;
using static System.Convert;

int n;
long[] arr;
while(true)
{
    Input();
    if (n == 0)
        break;
    Output(Solution());
}

void Input()
{
    var str = ReadLine().Split();
    n = ToInt32(str[0]);

        arr = new long[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = ToInt64(str[i + 1]);
    }
}

long Solution()
{
    Stack<long> stack = new Stack<long>();
    long[] widths = new long[n];
    long t;

    for (int i = 0; i < n; i++)
    {
        while (stack.Count > 0)
        {
            if (arr[i] <= arr[stack.Peek()])
                stack.Pop();
            else
                break;
        }

        t = (stack.Count == 0) ? -1 : stack.Peek();
        widths[i] = i - t - 1;
        stack.Push(i);
    }

    stack.Clear();

    for (int i =n - 1; i >= 0; i--)
    {
        while (stack.Count > 0)
        {
            if (arr[i] <= arr[stack.Peek()])
                stack.Pop();
            else
                break;
        }

        t = (stack.Count == 0) ? arr.Length : stack.Peek();
        widths[i] += t - i - 1;
        stack.Push(i);
    }

    long max = 0;
    for (int i = 0; i < arr.Length; i++)
    {
        long area = arr[i] * (widths[i] + 1);
        max = Math.Max(area, max);
    }
    return max;
}

void Output(long value)
{
    WriteLine(value);
}