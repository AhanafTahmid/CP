#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int aa = min(a,b), bb = max(a,b);
    int ct = 0;
    for(int i=aa;i<=bb;i++){
        if(i==c || i==d) ct++;
    }
    cout<< (ct==1?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}