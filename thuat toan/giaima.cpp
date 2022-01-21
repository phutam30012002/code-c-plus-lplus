#include<bits/stdc++.h>
using namespace std;
int qhd(string s)
{
    int n=s.size(),i;
    int f[n+1]={0};
    if(s[0]=='0') return 0;
    f[0]=1;f[1]=1;
    for(i=2;i<=n;i++)
    {
        if(s[i-1]!='0') f[i]=f[i-1];
        if(s[i-2]=='1'|| (s[i-2]=='2'&& s[i-1]<'7'))
            f[i]=f[i]+ f[i-2];
    }
    return f[n];
}
main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << qhd(s) <<"\n";
    }
}
// Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: ‘A’->1, ‘B’->2, .., ‘Z’->26. Hãy cho biết có bao nhiêu cách khác nhau để giải mã bản tin M. Ví dụ với bản mã M=”123” nó có thể được giải mã thành ABC (1 2 3), LC (12 3), AW(1 23).

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự số M.
// T, M thỏa mãn ràng buộc: 1≤T≤100;  1≤length(M)≤40.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ví dụ:

// Input

// Output

// 2
// 123
// 2563

// 3
// 2

