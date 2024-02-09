#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    set<int> st;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(x>=1 && x<=n)st.insert(x);
    }
    if(st.size()==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}