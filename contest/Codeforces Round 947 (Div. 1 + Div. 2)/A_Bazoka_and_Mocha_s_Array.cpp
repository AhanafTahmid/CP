#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    int l=-1;
    if(is_sorted(a.begin(),a.end())){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            l = i+1;
            break;
        }
    }
    rotate(a.begin(),a.begin()+l,a.end());
    if(is_sorted(a.begin(),a.end())) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}