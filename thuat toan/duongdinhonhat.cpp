#include<bits/stdc++.h>
using namespace std;
int a[500][500], c[500][500], n,m;
int qhd()
{
    memset(c,0,sizeof(c));
    int i,j;
    for(i=1;i<=m;i++) c[1][i] = a[1][i]+c[1][i-1];
    for(i=1;i<=n;i++) c[i][1] =a[i][1] +c[i-1][1];
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=m;j++)
        {
            c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]))+a[i][j];
        }
    }
    return c[n][m];
}
main()
{
    int t,i,j;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(i=1;i<=n;i++)
        {
             for(j=1;j<=m;j++) 
             {
                 cin >> a[i][j];
             }
        }
        cout << qhd() << endl;
    }
}
// Cho bảng A[] kích thước N x M (N hàng, M cột).

// Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].

// Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
// Mỗi test gồm số nguyên dương N và M (1 < N, M < 500)
// N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i] ≤ 1000).
// Output: 

// Với mỗi test, in ra giá trị tổng điểm nhỏ nhất tìm được trên một dòng.
// Ví dụ:

// Input

// Output

// 1

// 3 3

// 1 2 3

// 4 8 2

// 1 5 3

 

// 8

 

// Giải thích test: Đường đi (1, 1) - (1, 2) - (2, 3) - (3, 3).