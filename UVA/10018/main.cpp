#include <iostream>

int reverseNumber(int number) {
    int temp = number;
    int reverseNumber = 0;
    while (temp > 0) {
        reverseNumber *= 10;
        reverseNumber += temp % 10;
        temp /= 10;
    }
    return reverseNumber;
}

bool isNumberPalindrome(int number, int reverseNumber) {
    while (reverseNumber > 0 || number > 0) {
        if (reverseNumber == 0 || number == 0) return false;
        if (reverseNumber % 10 != number % 10)return false;
        reverseNumber /= 10;
        number /= 10;
    }
    return true;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, i = 0;
        std::cin >> n;
        long long temp = n;
        do {
            temp += reverseNumber(temp);
            i++;
        } while (!isNumberPalindrome(temp, reverseNumber(temp)));
        std::cout << i << ' ' << temp << '\n';
    }
}
