var n = int.Parse(Console.ReadLine());
var arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
var sum = new int[arr.Length];
for (var i = 0; i < n; i++)
{
    sum[i] = arr[i] + (i > 0 ? sum[i - 1] : 0);
}

var m = int.Parse(Console.ReadLine());
for (var i = 0; i < m; i++)
{
    var split = Console.ReadLine().Split();
    int s = int.Parse(split[0]), e = int.Parse(split[1]);
    Console.WriteLine(sum[e] - (s > 0 ? sum[s - 1] : 0));
}