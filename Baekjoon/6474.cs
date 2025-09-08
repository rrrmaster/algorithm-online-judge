using System;
using System.Collections.Generic;

Dictionary<char, char> words = new Dictionary<char, char>()
{
    { 'A', 'A' },
    { 'E', '3' },
    { 'H', 'H' },
    { 'I', 'I' },
    { 'J', 'L' },
    { 'L', 'J' },
    { 'M', 'M' },
    { 'O', 'O' },
    { 'S', '2' },
    { 'T', 'T' },
    { 'U', 'U' },
    { 'V', 'V' },
    { 'W', 'W' },
    { 'X', 'X' },
    { 'Y', 'Y' },
    { 'Z', '5' },
    { '1', '1' },
    { '2', 'S' },
    { '3', 'E' },
    { '5', 'Z' },
    { '8', '8' },
};
while (true)
{
    string str = Console.ReadLine();
    if (str == null) 
        break;
    bool palindrome = Palindrome(str);
    bool mirror = Mirror(str);

    if (palindrome && mirror)
    {
        Console.WriteLine($"{str} -- is a mirrored palindrome.\n");
    }
    else if(palindrome)
    {
        Console.WriteLine($"{str} -- is a palindrome.\n");
    }
    else if (mirror)
    {
        Console.WriteLine($"{str} -- is a mirrored string.\n");
    }
    else
    {
        Console.WriteLine($"{str} -- is not a palindrome.\n");

    }
}

bool Palindrome(string str)
{
    int length = str.Length;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
            return false;
    }
    return true;
}
bool Mirror(string str)
{
    int length = str.Length;
    for (int i = 0; i < length; i++)
    {
        if (!words.ContainsKey(str[length - i - 1]) || str[i] != words[str[length - i - 1]])
            return false;
    }
    return true;
}