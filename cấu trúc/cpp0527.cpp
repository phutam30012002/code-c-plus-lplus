/*#include<bits/stdc++.h>
using namespace std;
struct tg
{
    int h,p,g;
};
struct tg ds[10000];
void input (tg ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> ds[i].h >> ds[i].p >> ds[i].g;
    }
}
void sapxep(tg ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ds[i].h> ds[j].h)
            {
                swap(ds[i],ds[j]);
            }else if(ds[i].h==ds[j].h)
            {
                if(ds[i].p > ds[j].p)
                {
                    swap(ds[i],ds[j]);
                }else if(ds[i].p==ds[j].p)
                {
                    if(ds[i].g>ds[j].g)
                    {
                        swap(ds[i],ds[j]);
                    }
                }
            }
        }
    }
}
void output(tg ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << ds[i].h <<" " << ds[i].p <<" " << ds[i].g<<"\n";
    }
}
int main()
{
    int n;
    cin >> n;
    struct tg ds[n];
    input(ds,n);
    sapxep(ds,n);
    output(ds,n);
    return 0;
}*/
#include<iostream>
#include<algorithm>

using namespace std;

struct tg
{       
    int h,p,g;
};

void compa( struct tg a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++ ){
            if(a[i].h>a[j].h){
                swap(a[i],a[j]);
            }
            else if(a[i].h==a[j].h){
                if(a[i].p>a[j].p) swap(a[i],a[j]);
                else if(a[i].p==a[j].p){
                    if(a[i].g>a[j].g) swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].h<<' '<<a[i].p<<' '<<a[i].g<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    struct tg a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].h>>a[i].p>>a[i].g;
    }
    compa(a,n);
}