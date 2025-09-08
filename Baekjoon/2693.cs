using System;
using System.Linq;
using static System.Console;

int[] array;
int t = Convert.ToInt32(ReadLine());

while (t-- > 0) 
{
    Input();
    WriteLine(array[7]);
}

void Input()
{
    array = ReadLine().Split(' ').Select(x => Convert.ToInt32(x)).OrderBy(p=>p).ToArray();
}