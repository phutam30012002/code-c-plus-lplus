#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
    while (t--)
     {
        int n;
        cin >> n;
        char d[15];
        for (int i = 0; i < 15; i++)
        {
            cin >> d[i];
        }
        char d1[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
        char d2[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        double dem=0;
        if (n == 101)
        {
            for (int i = 0; i < 15; i++)
            {
                if (d[i]==d1[i]) dem++;
            }

        }
        if (n == 102)
        {
            for (int i = 0; i < 15; i++)
            {
                if (d[i]==d2[i]) dem++;
            }

        }

        cout <<fixed << setprecision(2) << dem*2/3 << endl;
    }
}