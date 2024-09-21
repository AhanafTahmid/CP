#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int ct = 0;
    if(n<=2){
        cout<< 0 <<endl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if(a[i-1] > a[i] && a[i] < a[i+1]) ct++;
        if(a[i-1] < a[i] && a[i] > a[i+1]) ct++;
    }
    cout<< ct <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}