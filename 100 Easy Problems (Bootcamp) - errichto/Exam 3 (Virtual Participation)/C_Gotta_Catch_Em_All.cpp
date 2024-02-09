#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
        cout<< st.size() <<" ";
    }
    cout<<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}