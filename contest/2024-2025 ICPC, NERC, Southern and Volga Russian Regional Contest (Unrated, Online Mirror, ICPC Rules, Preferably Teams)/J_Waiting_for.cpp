#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n ;cin>>n;
    int s = 0, s2 = 0;
    for(int i=0;i<n;i++){
        char ch;cin>>ch;
        int p;cin>>p;
        if(ch == 'P') s-=p;
        else{
            s+=p;
            if (s>=1) cout<< "YES" <<endl,s=0;
            else cout<< "NO" <<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}