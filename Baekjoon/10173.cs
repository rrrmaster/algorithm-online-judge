using static System.Console;

while (true)
{
    var str = ReadLine();
    if (str == "EOI") break;
    WriteLine(str.ToUpper().Contains("NEMO") ? "Found" : "Missing");
}