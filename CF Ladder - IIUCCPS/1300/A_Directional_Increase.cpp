#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int s = 0, ok = 0;
    for(int i=n-1;i>=0;i--){
        s+=a[i];
        if(a[i]!=0) ok = 1;

        if(s>=0 && ok==1 && i!=0){
            cout<<"No"<<endl;
            return;
        }
    }
    if(s==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}