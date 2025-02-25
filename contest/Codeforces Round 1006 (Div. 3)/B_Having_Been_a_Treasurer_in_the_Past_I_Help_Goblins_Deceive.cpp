#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ct1 = 0, ct2 = 0, ct3 = 0;
    for(char ch: s){
        ct1+= (ch=='-');
        ct2+= (ch=='_');
    }
    ct3 = ct1/2;
    if( ct1 % 2 ) ct3++;
    cout<< max(0LL, ct2 * ct3 * ( ct1 % 2 ? (ct3-1) : ct3 ) ) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}