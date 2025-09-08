using System;

while (true)
{
    double u;
    int h, d, f;
    var split = Console.ReadLine().Split(' ');
    h = Convert.ToInt32(split[0]);
    u = Convert.ToDouble(split[1]);
    d = Convert.ToInt32(split[2]);
    f = Convert.ToInt32(split[3]);
    if (h == 0)
        break;
    bool status = true;
    double p = (u * f) / 100.0;
    double height = 0;
    int day = 1;
    


    while (true)
    {
        height += u;
        u -= p;

        if (u < 0)
            u = 0;

        if (height > h) {  break; }

        height -= d;
        if (height < 0)
        {
            status = false;
            break;
        }
        
        day += 1;
    }
    Console.WriteLine($"{(status ? "success" : "failure")} on day {day}");
}