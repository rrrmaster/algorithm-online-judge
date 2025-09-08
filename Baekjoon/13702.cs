var s = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int n = s[0], k = s[1];
var arr = Enumerable.Range(0, n).Select(_ => int.Parse(Console.ReadLine())).ToList();


long best = 0;
long left = 0, right = Int32.MaxValue;
while (left <= right)
{
    var mid = (left + right) / 2;
    var count = arr.Sum(i => i / mid);

    if (count < k)
    {
        right = mid - 1;
    }
    else
    {
        left = mid + 1;
        best = mid;
    }
}

Console.WriteLine(best);