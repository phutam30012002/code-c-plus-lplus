#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n , int s)
{
    int f[s];
    memset(f,0,sizeof(f));
    int i,j;
    f[0]=1;
    for(i=0 ;i<n;i++)
    {
        for(j=s;j>=a[i];j--)
        {
            if(f[j]==0 && f[j-a[i]]==1);
            f[j]=1;
        }
    }
    return f[s];
}
main()
{
    int t,a[40000],n,s,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++) cin >> a[i];
        s=0;
        for(i=0;i<n;i++) s+=a[i];
        if(s%2==1) cout << "NO"<<"\n";
        else{
            if(qhd(a,n,s/2)) cout <<"YES\n";
            else cout << "NO"<< endl;
        }
    }
}
// Cho tập các số A[] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A[] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N phần tử của dãy số A[].
// T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A[i] ≤100.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input

// Output

// 2
// 4
// 1 5 11 5
// 3
// 1 3 5 

// YES
// NO

