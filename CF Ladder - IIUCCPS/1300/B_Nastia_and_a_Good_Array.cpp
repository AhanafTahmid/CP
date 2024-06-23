#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    vector<array<int, 4>>ans;
    for(int i=1;i<n;i++){
        if(__gcd(a[i-1],a[i])>1){
            int v = min(a[i-1],a[i]);
            if(v==a[i-1]){
                a[i-1] = v;
                a[i] = v+1;
                ans.push_back({i+1, i,v, v+1 });
            }
            else{
                a[i-1] = v+1;
                a[i] = v;
                ans.push_back({i, i+1,v+1, v });
            }
        }
    }

    cout<< ans.size() <<endl;
    for(auto x: ans){
        cout<< x[0] << ' ' << x[1] << ' ' << x[2] << ' ' << x[3] <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}