using System;
using static System.Console;
var n =int.Parse(ReadLine());
var a = ReadLine().Split().Count(p => p == "0");
Write(Math.Min(a, n-a));