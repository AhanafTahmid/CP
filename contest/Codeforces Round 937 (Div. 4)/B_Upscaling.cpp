#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    n = 2 * n;
    string s = "";
    string s2 = "";
    int ct = 1;
    for(int i=1;i<=n;i++){
        if(ct==1 || ct==2)s = s + "#", s2 = s2 + ".", ct++;
        else{
            s = s + ".";
            s2 = s2 + "#",
            ct==4?ct=0:0;
            ct++;
        }
    }

    s = s + '\n' + s + '\n';
    s2 = s2 + '\n' + s2 + '\n';
    n = n/2;
    for(int i=1;i<=n;i++){
        if(i&1) cout<< s;
        else cout<< s2;
    }

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}