using System.Linq;
using static System.Console;
using static System.Convert;

while (true)
{
    var n = ToInt32(ReadLine());
    if (n == 0)
    {
        break;
    }
    var pages = ReadLine().Split(',');
    var pairs = new bool[n + 1];

    foreach (var page in pages)
    {
        if (page.Contains('-'))
        {
            var split = page.Split('-');
            int low = ToInt32(split[0]);
            int high = ToInt32(split[1]);

            if (low > high)
                continue;

            for (int i = low; i <= high; i++)
            {
                if (i <= n)
                {

                    pairs[i] = true;
                }
            }
        }
        else
        {
            var a = ToInt32(page);
            if (a <= n)
            {
                pairs[a] = true;
            }
        }
    }
    WriteLine(pairs.Count(p => p));
}
