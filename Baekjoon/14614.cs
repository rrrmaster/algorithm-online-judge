using System;
using static System.Console;
var arr = ReadLine().Split();
var a = int.Parse(arr[0]);
var b = int.Parse(arr[1]);
Write(int.Parse(arr[2][arr[2].Length-1].ToString()) % 2 == 0 ? a : a ^ b);