#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    for(int i=0;i+1<n;i++){
        if( abs(a[i] - a[i+1]) != 7 && abs(a[i] - a[i+1]) != 5){
            cout<< "NO" <<endl;
            return;
        }
    }
    cout<< "YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}