#include <iostream>

bool clocks[3600] = {};

int reverse_number(int number) {
    int reverseNumber = 0;
    while (number) {
        reverseNumber *= 10;
        reverseNumber += number % 10;
        number /= 10;
    }
    return reverseNumber;
}

bool is_number_palindrome(int number, int reverse_number) {
    while (reverse_number || number) {
        if (!reverse_number || !number || reverse_number % 10 != number % 10) return false;
        reverse_number /= 10;
        number /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int h = 0; h < 24; ++h) {
        for (int m = 0; m < 60; ++m) {
            clocks[h * 60 + m] = is_number_palindrome(h * 100 + m, reverse_number(h * 100 + m));
        }
    }

    while (t--) {
        int h, m;
        scanf("%d:%d", &h, &m);
        int i = h * 60 + m + 1;
        do {
            if (clocks[i]) {
                int a = i / 60;
                int b = i % 60;
                printf("%02d:%02d\n", a, b);
                break;
            }
            i++;
            i %= 3600;
        } while (true);
    }
}
