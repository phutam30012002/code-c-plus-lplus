

#include <iostream>
using namespace std;
int m = 1e9 + 7;
long long POW(long long a, long long b) {
    long long tich = 1;
    while (b > 0) {
        if (b % 2 == 1) tich = (tich * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return tich;
}
int main() {
    long long a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << POW(a, b) << "\n";
    }
}