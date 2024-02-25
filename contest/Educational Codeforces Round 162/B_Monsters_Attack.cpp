#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;
    int sum2 = 0;
    int req = LLONG_MIN;
    for(int i=0;i<n;i++)cin>>a[i], sum+=a[i];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<0) x = x * -1;
        b[i] = x;
        sum2+=x;
        req = max(req, x);
    }
    int capable = (sum + k - 1) / k;
    if(capable<=req)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}