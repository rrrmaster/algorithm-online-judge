#include <iostream>
#include <vector>

int getElectricityBill(int wh) {
    if (wh <= 100) return wh * 2;
    else if (wh <= 10000) return 200 + (wh - 100) * 3;
    else if (wh <= 1000000) return 29900 + (wh - 10000) * 5;
    else return 4979900 + (wh - 1000000) * 7;
}

int getWatt(int bill) {
    int wh = 0;
    wh += std::min(bill, 200) / 2;
    bill -= 200;
    if (bill > 0) {
        wh += std::min(bill, 29700) / 3;
        bill -= 29700;
        if (bill > 0) {
            wh += std::min(bill, 4950000) / 5;
            bill -= 990000 * 5;
            if (bill > 0) {
                wh += bill / 7;
            }
        }
    }
    return wh;
}

int getMyWatt(int totalPrice, int totalWatt) {
    int left = 0, right = totalWatt;

    while (left <= right) {
        int mid = (left + right) / 2;
        int myWh = getElectricityBill(mid);
        int heWh = getElectricityBill(totalWatt - mid);

        if (heWh - myWh == totalPrice) {
            return myWh;
        } else if (heWh - myWh > totalPrice) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main() {
    int a, b;
    while (std::cin >> a >> b && a && b) {
        int totalWatt = getWatt(a);
        std::cout << getMyWatt(b, totalWatt) << '\n';
    }
}