#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(k%2)cout<<"No"<<endl;
    else{
        vector<int>a(n+1), ans;
        for(int i=1;i<=n;i++) a[i] = i;
        int mx = n;
        for(int i=1;i<=n;i++){
            int v = 2 * (mx - i);
            if(v<=k && k){
                k-=v;
                swap(a[i],a[mx]);
                mx--;
            }
        }
        if(k) cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            for(int i=1;i<=n;i++) cout<< a[i] <<' ';
            cout<<endl;
        }
   }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}