using System;
using System.Linq;
using static System.Console;
using static System.Convert;

var n = ToInt32(ReadLine());
var list = ReadLine().Split().Select(p => ToInt32(p)).ToList();
var y = list.Sum(p => 10 * (p / 30 + 1));
var m = list.Sum(p => 15 * (p / 60 + 1));
Write($"{(y == m ? "Y M" : (y < m ? "Y" : "M"))} {Math.Min(y, m)}");