#include<bits/stdc++.h>
using namespace std;
const string s1="100";
int timkiem(string s, string s1)
{
       int len=s1.size();
       size_t found=s.find(s1);
       int dem=0;
       int a[100];
       while( found!=string::npos)
       {
           s.erase(found,len);
           int x=found;
           if()
           dem+=len;
           found=s.find(s1);
       }
      return dem;
      //cout << s<<"\n";
   
}
int main()
{
    //freopen("o","w",stdout);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {

        string s;
        cin >> s;
        cout << timkiem(s,s1) <<"\n";
        //timkiem(s,s1);
    }
}
// C++ implementation of program to find the maximum length
// that can be removed
/*#include<bits/stdc++.h>
using namespace std;
 
// Function to find the length of longest sub-string that
// can me make removed
// arr  --> pair type of array whose first field store
//          character in string and second field stores
//          corresponding index of that character
int longestNull(string str)
{
    vector<pair<char,int> > arr;
 
    // store {'@',-1} in arr , here this value will
    // work as base index
    arr.push_back({'@', -1});
 
    int maxlen = 0;   // Initialize result
 
    // one by one iterate characters of string
    for (int i = 0; i < str.length(); ++i)
    {
        // make pair of char and index , then store
        // them into arr
        arr.push_back({str[i], i});
 
        // now if last three elements of arr[]  are making
        // sub-string "100" or not
        while (arr.size()>=3 &&
               arr[arr.size()-3].first=='1' &&
               arr[arr.size()-2].first=='0' &&
               arr[arr.size()-1].first=='0')
        {
            // if above condition is true then delete
            // sub-string "100" from arr[]
            arr.pop_back();
            arr.pop_back();
            arr.pop_back();
        }
 
        // index of current last element in arr[]
        int tmp = arr.back().second;
 
        // This is important, here 'i' is the index of
        // current character inserted into arr[]
        // and 'tmp' is the index of last element in arr[]
        // after continuous deletion of sub-string
        // "100" from arr[] till we make it null, difference
        // of these to 'i-tmp' gives the length of current
        // sub-string that can be make null by continuous
        // deletion of sub-string "100"
        maxlen = max(maxlen, i - tmp);
    }
 
    return maxlen;
}
 
// Driver program to run the case
int main()
{
    cout << longestNull("1011100000100");
    return 0;
}*/

