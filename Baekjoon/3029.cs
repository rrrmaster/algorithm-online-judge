using System;
using System.Linq;
using static System.Console;

var start= ReadLine().Split(':').Select(p=>Convert.ToInt32(p)).ToArray();
var end = ReadLine().Split(':').Select(p => Convert.ToInt32(p)).ToArray();

var time =  (end[0] * 3600 + end[1] * 60 + end[2])- (start[0] * 3600 + start[1] * 60 + start[2]);
if (time <= 0) time += 24 * 3600;
Write($"{time / 3600:D2}:{time / 60 % 60:D2}:{time % 60:D2}");
