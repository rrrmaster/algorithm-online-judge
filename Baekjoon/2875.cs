using System;
using static System.Console;
var arr = Array.ConvertAll(ReadLine().Split(),int.Parse);
Write(Math.Min(Math.Min(arr[0]/2, arr[1]),(arr[0]+arr[1]-arr[2])/3));