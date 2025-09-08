using static System.Console;

var s = ReadLine().Split();
int n = int.Parse(s[0]), k = int.Parse(s[1]), m = int.Parse(s[2]);

int[] l = Enumerable.Range(0, n).Select(_ => int.Parse(ReadLine())).ToArray();

int[] l_cut = new int[l.Length];
for (int i = 0; i < l.Length; i++)
{
    l_cut[i] = l[i] >= 2 * k ? l[i] - 2 * k : l[i] >= k ? l[i] - k : 0;
}

int left = 1;
int right = Int32.MaxValue - 1;

int min = -1;
while (left <= right)
{
    int mid = (left + right) / 2, now = l_cut.Sum(p => p / mid);

    if (now >= m)
        min = Math.Max(min, mid);

    if (now < m)
        right = mid - 1;
    else
        left = mid + 1;
}

WriteLine(min);