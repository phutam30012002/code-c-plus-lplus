#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  a, b, c, s = 1;
        cin >> a >> b >> c;
        while (b--) s = s * a % c;
        cout << s << endl;
    }
}