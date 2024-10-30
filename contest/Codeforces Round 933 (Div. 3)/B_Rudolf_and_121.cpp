#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    for(int i=0;i<n-2;i++){
        if(a[i]==0)continue;
        if(a[i]<0){
            cout<<"NO"<<endl;
            return;
        }
        a[i+1] = a[i+1] - a[i] * 2;
        a[i+2] = a[i+2] - a[i];
        a[i] = 0;
    }
    if(a[n-1]!=0 || a[n-2]!=0){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}