#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    sort(a.begin(),a.end());
    set<int> st;
    for(int i=0;i<n;i++){
        while(a[i]>0){
            if(a[i]>0 && a[i]<=n && st.count(a[i])==0){
                st.insert(a[i]);
                break;
            }
            a[i]/=2;
        }
    }
    cout<< (st.size()==n?"YES":"NO") <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}