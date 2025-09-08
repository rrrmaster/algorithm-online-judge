using static System.Console;
var split = ReadLine().Split();
var Rev = (string value) => int.Parse(new string(value.Reverse().ToArray()));
Write(Rev((Rev(split[0])+ Rev(split[1])).ToString()));