// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n,k;
//         cin >> n >> k;
//         char x='B';
//         string s="A";
//         for(int i=2;i<=n;i++)
//         {
//             s=s + x+s;
//             x++;
//         }
//        // cout << s <<"\n";
//        cout << s[k-1] << endl;
//     }
// }
// Xâu ký tự S được tạo ra bằng cách bổ sung dần các ký tự chữ cái Tiếng Anh in hoa như sau.

// Bước 1: Chỉ có chữ cái A
// Bước 2: Thêm chữ cái B vào giữa 2 chữ A => S = "ABA"
// Bước 3: Thêm chữ cái C vào giữa 2 xâu đã có ở bước 2: S = "ABACABA"
// Cứ như vậy cho đến bước thứ N (0 < N < 26)

// Hãy xác định ký tự thứ K trong bước biến đổi thứ N là chữ cái gì?

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
// Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 25, 1 ≤ K ≤ 2N - 1).
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int deQuy(int n, int k){
	long long a = pow(2, n - 1);
	if(k == 2 && n == 1) return 1;
	if(k == 1 && n == 1) return 0;
	if(k > a) k = 2 * a - k;
	if(k == a) return n - 1;
	return deQuy(n - 1, a - k);
}
int main(){
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		cout << (char) ('A' + deQuy(n, k)) << endl;
	}
}