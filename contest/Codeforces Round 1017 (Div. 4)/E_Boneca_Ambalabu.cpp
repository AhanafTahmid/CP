#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    vector<int>v(31,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<31;j++){
            if(a[i]&(1LL<<j)){
                v[j]++;
            }
        }
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        int s = 0;
        for(int j=0;j<31;j++){
            if(a[i]&(1LL<<j)) s += (n-v[j])*(1LL<<j);
            else s += v[j]*(1LL<<j);
        }
        if(s>ans)ans = s;
    }
    cout<< ans <<endl;

}


int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}