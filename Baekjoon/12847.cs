var str = Console.ReadLine().Split();
int n = int.Parse(str[0]), m = int.Parse(str[1]);
long[] arr = Array.ConvertAll(Console.ReadLine().Split(), long.Parse), sum = new long[n];

for (int i = 0; i < n; i++)
    sum[i] = arr[i] + (i - 1 < 0 ? 0 : sum[i - 1]) - (i - m < 0 ? 0 : arr[i - m]);

Console.Write(sum.Max());