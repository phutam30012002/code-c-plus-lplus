#include <bits/stdc++.h>
using namespace std;
  
int equilibrium(int arr[], int n) 
{ 
    int sum = 0; 
    int leftsum = 0;
  
    for (int i = 0; i < n; ++i) 
        sum += arr[i]; 
  
    for (int i = 0; i < n; ++i) 
    { 
        sum -= arr[i];  
  
        if (leftsum == sum) 
            return i+1; 
  
        leftsum += arr[i]; 
    } 
  
 
    return -1; 
} 
  
 
int main() 
{ 
   int t;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       int a[n];
       for(int i=0;i<n;i++) cin >> a[i];
       cout  << equilibrium(a,n)<<"\n"; 
   }
    return 0; 
} 
/*#include <bits/stdc++.h>
using namespace std;
  
void find(int arr[],  int n)
{
    int mid = n / 2;
    int leftSum = 0, rightSum = 0;
  
    //calculation sum to left of mid
    for (int i = 0; i < mid; i++)
    {
        leftSum += arr[i];
    }
    //calculating sum to right of mid
    for (int i = n - 1; i > mid; i--)
    {
        rightSum += arr[i];
    }
  
    //if rightsum > leftsum
    if (rightSum > leftSum)
    {
        //we keep moving right until rightSum become equal or less than leftSum
        while (rightSum > leftSum && mid < n - 1)
        {
            rightSum -= arr[mid + 1];
            leftSum += arr[mid];
            mid++;
        }
    }
    else
    {
        //we keep moving right until leftSum become equal or less than RightSum
        while (leftSum > rightSum && mid > 0)
        {
            rightSum += arr[mid];
            leftSum -= arr[mid - 1];
            mid--;
        }
    }
  
    //check if both sum become equal
    if (rightSum == leftSum)
    {
        cout <<"First Point of equilibrium is at index ="<< mid << endl;
        return;
    }
  
    cout <<"First Point of equilibrium is at index ="<< -1 << endl;
}
int main()
{
    int arr[] = { 1,1,1,-1,1,1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    find(arr, n);
}*///tim kiem nhi phan