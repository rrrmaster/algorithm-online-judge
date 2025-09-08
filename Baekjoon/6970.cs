using System.Linq;
using System.Text;
using static System.Convert;
using static System.Console;

var t = ToInt32(ReadLine());
while (t-- > 0)
{
    var s = ToInt32(ReadLine());
    var v = ToInt32(ReadLine());
    var o = ToInt32(ReadLine());

    var subjects = Enumerable.Range(0, s).Select(_ => ReadLine()).ToList();
    var verbs = Enumerable.Range(0, v).Select(_ => ReadLine()).ToList();
    var objects = Enumerable.Range(0, o).Select(_ => ReadLine()).ToList();

    var sb = new StringBuilder();
    for (int i = 0; i < subjects.Count; i++)
    {
        for (int j = 0; j < verbs.Count; j++)
        {
            for (int k = 0; k < objects.Count; k++)
            {
                sb.AppendLine($"{subjects[i]} {verbs[j]} {objects[k]}.");
            }
        }
    }
    WriteLine(sb.ToString());
}