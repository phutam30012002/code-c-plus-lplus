#include<iostream>
#include<climits>
using namespace std;
 
long long maxSubArraySum(long long a[], long long size)
{
    long long max_so_far = INT_MIN, max_ending_here = 0;
 
    for (long long i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {long long n;
    cin >> n;
    long long a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    long long max_sum = maxSubArraySum(a, n);
    //if(max_sum <0) max_sum=-1;
    cout << max_sum <<"\n";
    }
    return 0;
}