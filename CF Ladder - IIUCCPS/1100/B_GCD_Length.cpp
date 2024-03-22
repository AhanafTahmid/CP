#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c;cin>>a>>b>>c;
    string s1(a,'0');
    string s2(b,'0');
    s1[0] = '1';
    s2[0] = '1';
    s2[b-c] = '1';
    string x = '1' + string(a - 1, '0');
    cout<< x <<endl;
    cout<< s1 << " "<< s2<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}