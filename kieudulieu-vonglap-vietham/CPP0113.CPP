#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
            int a=n%100;
            if(a==86) 
                cout << "1\n";
             if(a!=86) cout<<"0\n";  
    }
}