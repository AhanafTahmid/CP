#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int nn = n;
    if(n%2==0){
        cout<<n/2<<' '<<n/2<<endl;
    }
    else{
        set<int> st;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                st.insert(i);
                if(n/i != i) st.insert(n/i);
            }
        }
        int ans = LLONG_MAX, a = 1, b = n-1;
        for(auto x: st){
            if(ans>=lcm(x, n-x)){
                ans = lcm(x, n-x);
                a = x;
                b = n-x;
            }
        }
        cout<< a <<' '<< b <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}