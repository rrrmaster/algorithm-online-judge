#include <iostream>

struct Rocket {
    float mi, ti, Fi;
};
Rocket rocket[31];

double distance(double a, double v, double t) {
    return v * t + 0.5 * a * t * t;
}

double velocity(double a, double v, double t) {
    return v + a * t;
}

int main() {
    int k;
    std::cin >> k;
    for (int T = 1; T <= k; T++) {
        int n;
        float m;
        std::cin >> n >> m;
        double mass = m;
        double v = 0;
        double d = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> rocket[i].mi >> rocket[i].ti >> rocket[i].Fi;
            mass += rocket[i].mi;
        }
        for (int i = 0; i < n; ++i) {
            double t = rocket[i].ti;
            double a = rocket[i].Fi / mass - 9.81;
            d += distance(a, v, t);
            v = velocity(a, v, t);
            mass -= rocket[i].mi;
        }
        printf("Data Set %d:\n%.2f\n", T, d);
    }
}