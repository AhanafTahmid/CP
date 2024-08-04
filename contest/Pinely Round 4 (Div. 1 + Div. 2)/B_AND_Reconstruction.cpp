#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n-1), b(n);
    for(int &i: a)cin>>i;
    a.push_back(a.back());

    b[0] = a[0];
    for(int i=1;i<n;i++){
        b[i] = a[i-1] | a[i];
    }

    for(int i=0;i<n-1;i++){
        if( (b[i] & b[i+1]) != a[i] ){
            cout<< -1 <<endl;
            return;
        }
    }
    for(auto x: b)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}