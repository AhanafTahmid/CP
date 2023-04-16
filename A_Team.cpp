#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],b[2000],c[2000],n,i,p=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if((a[i]+b[i]+c[i])>=2)
            p++;
    }
    cout<<p;
    return 0;
}