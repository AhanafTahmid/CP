#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    set<int> st;
    for(int &i: a)cin>>i, st.insert(i);
    if(st.size()==1)cout<<-1<<endl;
    else{
        int ans = n, ct = 1;
        for(int i=1;i<n;i++){
            if(a[0]!=a[i]){
                ans = min(ans, ct);
                ct = 0;
            }
            else ct++;
        }
        ans = min(ans, ct);
        cout<< ans <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}