#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int md = 998244353;

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
    if(s[i]=='1')a[i]=(i+1);
    }

    for(int j=1;j<n;j++){
        a[j]+=a[j-1];
    }
    
    int ans=0,p=1;
    for(int i=n-1;i>=0;i--){
        if(a[i]%2)ans=(ans+p)%md;
        p=(p*2)%md;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}