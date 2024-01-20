#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x[1005],y[1005];
    for(int i=0;i<4;i++){
        cin>>x[i]>>y[i];
    }
    ll s1 = abs(x[0]-x[1]);
    ll s2 = abs(y[0]-y[1]);
    if(s1) cout<<s1*s1<<endl;
    else cout<<s2*s2<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}