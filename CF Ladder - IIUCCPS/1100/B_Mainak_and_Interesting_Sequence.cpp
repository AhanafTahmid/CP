#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    if(n>m)cout<<"No"<<endl;
    else{
        if(n%2==1){
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++)cout<<1<<" ";
            cout<<m-n+1<<endl;
        }
        else if(n%2==0 && m%2==0){
            cout<<"Yes"<<endl;
            for(int i=0;i<n-2;i++)cout<<1<<" ";
            cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
        }
        else if(n%2==0 && m%2==1){
            cout<<"No"<<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}