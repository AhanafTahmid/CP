#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if(n%2==0){
        cout<< "No" <<endl;
        return;
    }
    vector<int>a(n+1);
    int st = n+1;
    for(int i=n;i>=1;i-=2){
        a[i] = st;
        st++;
    }
    for(int i=n-1;i>=1;i-=2){
        a[i] = st;
        st++;
    }
    cout<<"Yes" <<endl;
    for(int i=1;i<=n;i++){
        cout<< i << ' ' << a[i] << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}