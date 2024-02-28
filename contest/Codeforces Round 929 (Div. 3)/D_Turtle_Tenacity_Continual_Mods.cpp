#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    int ans = 0;
    int tmp = 1;
    for(int i=0;i<n;i++){
        tmp%=a[i];
        cout<< tmp <<endl;
    }
}

int32_t main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}