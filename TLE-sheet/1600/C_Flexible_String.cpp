#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string a;cin>>a;
    string b;cin>>b;
    set<char> st(a.begin(),a.end());
    string s = "";
    for(char ch: st)s+= ch;
    
    int ans = 0;
    int nn = s.size();
    k = min(nn, k);

    for(int i=0;i<(1<<nn);i++){
        set<char>t;
        if (__builtin_popcount(i) != k) continue;
        for(int j=0;j<nn;j++){
            if( i & (1<<j) )t.insert(s[j]);
        }
        int ct = 0;
        int tans = 0;
        for(int j=0;j<n;j++){
            if( t.count(a[j]) || a[j] == b[j]){
                ct++;
            }
            else{
                tans+= (ct* (ct+1))/2;
                ct = 0;
            }
        }
        if( ct>0 ) tans+= (ct* (ct+1))/2;
        ans = max(tans, ans);
    }
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}