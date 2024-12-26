#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n+1),b;
    for(int i=1;i<=n;i++)cin>>a[i];

    cout<< 1 << ' ';
    for(int i=2;i<=n;i++){
        int l = 1, r = i+1, m;//r cannot be i cause i can also be true sometimes
        while(l+1<r){
            m = (l+r)>>1;
            if(a[i-m+1]>=m) l = m;
            else r = m;
        }
        //cout<< l << ' ' << r <<endl;
        //if(a[i-l+1]<i)l--;
        b.push_back(l);
    }
    for(auto x: b)cout<< x << ' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}