using static System.Console;

var pairs = new Dictionary<string,int>();
while (true)
{
    var str = ReadLine();
    if(str == null)
        break;
    if(!pairs.ContainsKey(str))
        pairs.Add(str, 1);
    else
        pairs[str]++;
}

var total = pairs.Sum(p => p.Value);
foreach (var item in pairs.OrderBy(p => p.Key)) 
{
    WriteLine($"{item.Key} {item.Value/(double)total * 100.0:F4}");
}