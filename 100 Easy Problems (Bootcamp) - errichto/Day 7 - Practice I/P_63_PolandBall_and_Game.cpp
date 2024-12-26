#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    vector<string> a;
    vector<string> b;
    set<string> st;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        a.push_back(s);
        st.insert(s);
    }
    for(int i=0;i<m;i++){
        string s; cin>>s;
        b.push_back(s);
        st.insert(s);
    }


    if(n>m)cout<<"YES"<<endl;
    else if(st.size() & 1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}