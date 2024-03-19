#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>f(n+1,0);
    set<int> st;
    for(int &i: a){
        cin>>i;
        st.insert(i);
        f[i]++;
    }
    
    int ln = st.size();
    int mx = *max_element(f.begin(),f.end());
    if(n==1)cout<<0<<endl;
    else if(n==ln)cout<<1<<endl;
    else if(mx>ln)cout<< ln <<endl;
    else if(mx==ln)cout<< mx-1 <<endl;
    else cout<< mx <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}