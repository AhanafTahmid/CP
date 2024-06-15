#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int n,mn=INT_MAX;cin>>n;
    vector<int>a(n),b,c;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn = min(mn, a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]%mn==0)b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    for(int i=0,j=0;i<n;i++){
        if(a[i]%mn==0)c.push_back(b[j]),j++;
        else c.push_back(a[i]);
    }
    if(is_sorted(c.begin(),c.end())) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}