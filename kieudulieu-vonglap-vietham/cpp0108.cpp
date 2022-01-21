#include<iostream>
#include<math.h>
using namespace std;
int nt(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
    if(n % i == 0) return 0;
    return 1;
}
int tang(int n) {
    int a = n % 10;
    n /= 10;
    while (n > 0) {
        if (a <= n % 10) return 0;
        a = n % 10;
        n /= 10;
    }
    return 1;
}
int giam(int n) {
    int a = n % 10;
    n /= 10;
    while (n > 0) {
        if (a >= n % 10) return 0;
        a = n % 10;
        n /= 10;
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        int b = 1;
        while (n > 0) {
            b *= 10;
            n--;
        }
        int a = b / 10;
        a += 1;
        for(int i = a; i < b; i += 2) {
            if (tang(i) || giam (i))
                if (nt(i)) count++;
        }
        cout << count <<"\n";
    }
}