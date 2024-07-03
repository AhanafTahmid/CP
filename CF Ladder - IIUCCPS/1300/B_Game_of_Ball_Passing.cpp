#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int z = 0, mx = 0, sum = 0, ans = 0;
    for(int &i: a){
        cin>>i,sum+=i;
        if(i==0) z++;
        mx = max(mx, i);
    }
    if(z==n) ans = 0;
    else if(2*mx<=sum) ans = 1;
    else ans = 2*mx - sum;
    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}