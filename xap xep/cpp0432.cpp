#include<bits/stdc++.h>
using namespace std;
int sx(string x,string y)
{
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx) >0 ? 1 : 0;
}
void ghep(vector<string> a)
{
	sort (a.begin(),a.end(),sx);
	for(string x:a)
	cout << x;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		vector<string> a;
		for(int i=0;i<n;i++)
		{
			cin >> s;
			a.push_back(s);
		}
		ghep(a);
		cout <<endl;
	}
}
