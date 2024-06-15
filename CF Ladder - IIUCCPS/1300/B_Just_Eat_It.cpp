#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int yasser = 0, adel = 0, sum = 0;
    for(int &i: a)cin>>i, yasser+=i;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
        adel = max(sum, adel);
        if(sum<0) sum = 0;
    }
    sum = 0;
    for(int i=1;i<n;i++){
        sum+=a[i];
        adel = max(sum, adel);
        if(sum<0) sum = 0;
    }
    cout<< (yasser>adel?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}