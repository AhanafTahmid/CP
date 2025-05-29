#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        if(s[i]=='A')a.push_back(i);
        else b.push_back(i);
    }

    bool ok = 0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if( a[i] + 1 == n && b[j] == 0 ) break;
            else if( (a[i] == 0 && b[j] + 1 == n )  || a[i] > b[j] ) ok = 1;
            else break;
        }
        if(ok) break;
    }
    cout<<(ok?"Alice":"Bob")<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}