#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    int v = a + (b*2);
    if(a&1)cout<<"NO"<<endl;
    else if(a==0 && b&1)cout<<"NO"<<endl;
    else cout<< (v&1?"NO":"YES") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}