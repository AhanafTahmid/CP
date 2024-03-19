#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>a2(n);
    for(int &i: a)cin>>i;
    a2 = a;
    sort(a2.begin(),a2.end());
    for(int i=0;i<n;i++){
        if(a[i]!=a2[i]){
            cout<<a2[i]<<endl;
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}