using System;
using System.Linq;
using static System.Console;

string shapes = "CDHS";
string numbers = "23456789TJQKA";


while (true)
{
    int[] white = new int[5];
    int[] black = new int[5];
    var str = ReadLine();
    if (str == null)
        break;

    var split = str.Split();
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            var n = split[i * 5 + j][0];
            var s = split[i * 5 + j][1];
            if (i == 0) black[j] = CardConvert(n, s);
            else white[j] = CardConvert(n, s);
        }
    }
    WriteLine(Poker(white,black));
}
int CardConvert(char n, char s) => shapes.IndexOf(s) + numbers.IndexOf(n) * 4;
int CardNumber(int card) => card / 4;
int CardShape(int card) => card % 4;

string Poker(int[] white, int[] black)
{
    var w = Rank(white);
    var b = Rank(black);

    if (w.rank > b.rank)
    {
        return "White wins.";
    }
    else if(w.rank < b.rank)
    {
        return "Black wins.";
    }
    else
    {
        if (w.value > b.value)
        {
            return "White wins.";
        }
        else if(w.value < b.value)
        {
            return "Black wins.";
        }
        else
        {
            if (w.rank == 2)
            {
                var wl = white.GroupBy(p => CardNumber(p)).Where(p => p.Count() >= 2).OrderByDescending(p => p.Key).ToArray();
                var bl = black.GroupBy(p => CardNumber(p)).Where(p => p.Count() >= 2).OrderByDescending(p => p.Key).ToArray();
                var min = Math.Min(wl.Length, bl.Length);
                for (int i = 0; i < min; i++)
                {
                    if (wl[i].Key > bl[i].Key)
                        return "White wins.";
                    else if (wl[i].Key < bl[i].Key)
                        return "Black wins.";
                }
                if (wl.Length > bl.Length)
                    return "White wins.";
                else if (wl.Length < bl.Length)
                    return "Black wins.";

                var wlist = white.OrderByDescending(p => CardNumber(p)).ToArray();
                var blist = black.OrderByDescending(p => CardNumber(p)).ToArray();
                for (int i = 0; i < 5; i++)
                {
                    if (CardNumber(wlist[i]) > CardNumber(blist[i]))
                        return "White wins.";
                    else if (CardNumber(wlist[i]) < CardNumber(blist[i]))
                        return "Black wins.";
                }
                return "Tie.";
            }
            else if (w.rank == 1)
            {
                var wl = white.GroupBy(p => CardNumber(p)).Where(p => p.Count() >= 2).OrderByDescending(p => p.Key).ToArray();
                var bl = black.GroupBy(p=> CardNumber(p)).Where(p=>p.Count()>=2).OrderByDescending(p => p.Key).ToArray();
                var min = Math.Min(wl.Length, bl.Length);
                for (int i = 0; i < min; i++)
                {
                    if (wl[i].Key > bl[i].Key)
                        return "White wins.";
                    else if (wl[i].Key < bl[i].Key)
                        return "Black wins.";
                }
                if (wl.Length > bl.Length)
                    return "White wins.";
                else if (wl.Length < bl.Length)
                    return "Black wins.";

                var wlist = white.OrderByDescending(p => CardNumber(p)).ToArray();
                var blist = black.OrderByDescending(p => CardNumber(p)).ToArray();
                for (int i = 0; i < 5; i++)
                {
                    if (CardNumber(wlist[i]) > CardNumber(blist[i]))
                        return "White wins.";
                    else if (CardNumber(wlist[i]) < CardNumber(blist[i]))
                        return "Black wins.";
                }
                return "Tie.";
            }
            else
            {
                var wl = white.OrderByDescending(p => CardNumber(p)).ToArray();
                var bl = black.OrderByDescending(p => CardNumber(p)).ToArray();
                for (int i = 0; i < 5; i++)
                {
                    if(CardNumber(wl[i]) > CardNumber(bl[i]))
                        return "White wins.";
                    else if (CardNumber(wl[i]) < CardNumber(bl[i]))
                        return "Black wins.";
                }
                return "Tie.";
            }
        }
    }

    return null;

}
(int rank,int value) Rank(int[] cards)
{
    int value = 0;
    if (StraightFlush(cards, out value))
        return (8, value);
    if (Four(cards, out value))
        return (7, value);
    if (FullHouse(cards, out value))
        return (6, value);
    if (Flush(cards, out value))
        return (5, value);
    if (Straight(cards, out value))
        return (4, value);
    if (Three(cards, out value))
        return (3, value);
    if (TwoPair(cards, out value))
        return (2, value);
    if (OnePair(cards, out value))
        return (1, value);
    High(cards, out value);
        return (0, value);
}

bool StraightFlush(int[] cards, out int value)
{
    value = -1;

    var c = cards.OrderBy(x => CardNumber(x)).ThenBy(x => CardShape(x)).ToArray();
    for (int i = 1; i < 5; i++)
    {
        if (CardShape(c[i - 1]) != CardShape(c[i])) return false;
    }
    for (int i = 1; i < 5; i++)
    {
        if (CardNumber(c[i - 1]) + 1 != CardNumber(c[i])) return false;
    }
    value = CardNumber(c[4]);
    return true;
}
bool Four(int[] cards, out int value)
{
    value = -1;
    var a = cards.GroupBy(p => CardNumber(p)).ToArray();
    for (int i = 0; i < a.Length; i++)
    {
        if (a[i].Count() >= 4)
        {
            value = a[i].Key;
            return true;
        }
    }
    return false;
}
bool FullHouse(int[] cards, out int value)
{
    value = -1;
    var a = cards.GroupBy(p => CardNumber(p)).ToArray();
    if (a.Length != 2) return false;
    if (a[0].Count() != 2 && a[0].Count() != 3) return false;
    value = Math.Max(a[0].Key, a[1].Key);
    return true;
}
bool Flush(int[] cards, out int value)
{
    value = -1;
    for (int i = 1; i < 5; i++)
    {
        if (CardShape(cards[i - 1]) != CardShape(cards[i])) return false;
    }
    value = cards.Max(p => CardNumber(p));
    return true;
}
bool Straight(int[] cards, out int value)
{
    value = -1;
    
    var c = cards.OrderBy(x => CardNumber(x)).ThenBy(x => CardShape(x)).ToArray();
    for (int i = 1; i < 5; i++)
    {
        if (CardNumber(c[i - 1]) + 1 != CardNumber(c[i]) ) return false;
    }
    value = CardNumber(c[4]);
    return true;
}
bool Three(int[] cards, out int value)
{
    value = -1;
    var g = cards.GroupBy(p=>CardNumber(p)).ToArray();
    for (int i = 0; i < g.Length; i++)
    {
        if (g[i].Count() == 3)
        {
            value = g[i].Key;
            return true;
        }
    }
    return false;
}
bool TwoPair(int[] cards, out int value)
{
    value = -1;
    var g = cards.GroupBy(p => CardNumber(p)).Where(p=>p.Count()>=2).ToArray();
    if (g.Length < 2) return false;

    value = Math.Max(g[0].Key, g[1].Key);
    return true;
}
bool OnePair(int[] cards, out int value)
{
    value = -1;
    var g = cards.GroupBy(p => CardNumber(p)).Where(p => p.Count() >= 2).ToArray();
    if (g.Length < 1) return false;

    value = g.Max(p => p.Key);
    return true;
}
bool High(int[] cards, out int value)
{
    value = cards.Max(p => CardNumber(p));
    return true;
}