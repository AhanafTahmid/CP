#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;

    int sum = 0;
    int msk = 1<<n;
    for(int i=0;i<msk;i++){
        sum = 0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)) sum+=a[j];
            else sum-=a[j];
        }
        if(sum%360 == 0){
            cout<< "YES" <<endl;
            return;
        }
    }
    cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}