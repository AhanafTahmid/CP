#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    if(st.size()!=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int32_t main(){
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}