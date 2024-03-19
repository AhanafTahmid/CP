#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    sort(a.begin(),a.end());
    if(a[0]!=a[1])cout<<"YES"<<endl;
    else{
        int ans = 0;
        for(int i=n-1;i>=1;i--){
            ans+= (a[i]%a[0] > 0);
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}