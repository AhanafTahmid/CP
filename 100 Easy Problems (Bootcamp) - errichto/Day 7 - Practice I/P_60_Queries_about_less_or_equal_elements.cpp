#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n,m;
    cin>> n >> m;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    while(m--){
        int x;cin>>x;
        int idx = upper_bound(a.begin(),a.end(),x) - a.begin();
        if(a[idx--]==x)cout<< idx <<" ";
        else cout<< idx + 1 <<" ";
    }
    cout<<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}