using static System.Console;

int n = int.Parse(ReadLine());
Write(string.Join('\n', Enumerable.Range(0,  n + 2).Select(x => new string(Enumerable.Range(0, n + 2).Select(y => (x == 0 || y == 0 || x == n + 1 || y == n + 1) ? '@' : ' ').ToArray()))));