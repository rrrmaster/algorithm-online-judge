using System;
using static System.Console;
var arr = Array.ConvertAll(ReadLine().Split(), int.Parse);
var arr1 = Array.ConvertAll(ReadLine().Split(), int.Parse);
for (int i = 0; i < 3; i++)
{
    var count = (
           (0 < arr1[i] % (arr[0] + arr[1]) && arr1[i] % (arr[0] + arr[1]) <= arr[0]) ? 1 : 0)
        + (0 < arr1[i] % (arr[2] + arr[3]) && (arr1[i] % (arr[2] + arr[3]) <= arr[2]) ? 1 : 0);
    WriteLine(count);
}