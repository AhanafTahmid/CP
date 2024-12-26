#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int mn = 1e18, mx = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<< 0 <<endl;
        return;
    }

    bool ok = 0;

    while(1){
        ok = 1;
        for(int i=0;i<n-1;i++){
            int a1 = a[i], a2 = a[i+1];
            int v = a1+a2;
            if(a1>a2 && v%2==0){
                a[i] = v/2;
                a[i+1] = v/2;
                ok = 0;
                break;
            }
            else if(a1>a2 && v%2==1){
                a[i] = v/2;
                a[i+1] = (v/2) + 1;
                ok = 0;
                break;
            }
        }

        // for(auto x: a) cout<< x <<' ';
        // cout<<endl;

        if(ok)break;
    }
    
    for(auto x: a){
        mn = min(x, mn);
        mx = max(x, mx);
    }
    cout<< mx - mn <<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}