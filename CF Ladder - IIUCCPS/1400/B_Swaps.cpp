#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    int ans = n-1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ans = min(ans, i);
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(a[0]<b[i]){
            ans = min(ans, i);
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(b[0]>a[i]){
            ans = min(ans, i);
            break;
        }
    }

    cout << ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}