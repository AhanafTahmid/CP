#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    n = st.size();
    int a = *st.begin();
    int b = *++st.begin();
    if(a==1){
        cout<<"Yes"<<endl;
        return;
    }
    int ct1 = 0, ct2 = 0, ct3 = 0;
    for(auto x: st){
        if(x%a==0)ct1++;
        if(x%b==0)ct2++;
        if(x%a == 0 || x%b==0)ct3++;
    }
    if(ct1==n || ct1==n-1){//2 4 7 16
        cout<<"Yes"<<endl;
        return;
    }
    if(ct2==n || ct2==n-1){//3 4 8 16
        cout<<"Yes"<<endl;
        return;
    }
    if(ct3==n){
        cout<<"Yes"<<endl;
        return;
    }
    cout<< "No" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}