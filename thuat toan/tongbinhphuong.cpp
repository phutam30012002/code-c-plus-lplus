#include<bits/stdc++.h>
using namespace std;
int f[10000];
void qhd()
{
    int  i,j;
    for(i =1;i <= 10000;i++) {
        f[i]=i;
        for(j=1;j*j <=i;j++)
        {
            f[i]= min (f[i],f[i-j*j ]+1);
        }
    }
    
}
main()
{
    int t,n;
    cin >> t;
    qhd();
    while(t--)
    {
        cin >> n;
        cout << f[n] << endl;
    }
}
// Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 102 hoặc 100 = 52 + 52 + 52 + 52. Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi test là một số tự nhiên N được viết trên 1 dòng.
// T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10000.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ví dụ:

 

// Input

// Output

// 3
// 100
// 6
// 25

// 1
// 3
// 1
 

