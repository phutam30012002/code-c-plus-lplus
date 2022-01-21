#include <bits/stdc++.h>
using namespace std;

int loai(int m) {
    long long num = 1;
    while (m--) {
        num *= 2;
        num %= 10;
    }
    return num % 10;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[100001];
        cin >> s;
        int num = 0;
        if (s[strlen(s) - 1] == '1') num++;
        for (int i = 1; i < strlen(s); ++i) {
            if (s[strlen(s) - 1 - i] != '0') {
                num += loai(i);
                num %= 10;
            }
        }
        if (num == 0 || num == 5) cout << "Yes\n";
        else cout << "No\n";
    }
}