using System.Text;
using static System.Console;

var queue = new LinkedList<int>();
var reader = new StreamReader(OpenStandardInput());
var sb = new StringBuilder();
var n = int.Parse(reader.ReadLine());
var split = Enumerable.Range(0,n).Select(_=>reader.ReadLine()).ToArray();
for (int i = 0; i < n; i++)
{
    var command = split[i];
    switch (command)
    {
  
        case "pop":
            if (queue.Count > 0)
            {
                sb.AppendLine(queue.First.Value.ToString());
                queue.RemoveFirst();
            }
            else
            {
                sb.AppendLine("-1");
            }
            break;
        case "size":
            sb.AppendLine(queue.Count.ToString());
            break;
        case "empty":
            sb.AppendLine(queue.Count == 0 ? "1" : "0");
            break;
        case "front":
            if (queue.Count > 0)
            {
                sb.AppendLine(queue.First().ToString());
            }
            else
            {
                sb.AppendLine("-1");
            }
            break;
        case "back":
            if (queue.Count > 0)
            {
                sb.AppendLine(queue.Last.Value.ToString());
            }
            else
            {
                sb.AppendLine("-1");
            }
            break;
        default:
            queue.AddLast(int.Parse(command.Split()[1]));
            break;
    }
}
Write(sb.ToString());