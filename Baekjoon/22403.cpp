#include <iostream>
#include <string>

int main()
{
    int n, s = 0;
    bool flag = true;
    std::cin >> n;
    while (n--)
    {
        std::string str;
        std::cin >> str;
        if (str.compare("A")==0)
        {
            s += 1;
        }
        else
        {
            s -= 1;
            if (s < 0)flag = false;
        }
    }
    std::cout << ((s == 0 && flag)?"YES":"NO");
}