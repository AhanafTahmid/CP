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
    vector<int>v(st.begin(),st.end());
    n = v.size();
    if(n==1){
        cout<< v[0] << ' ' << 0 <<endl;
        return;
    }
    int s = 0;
    int c = 0;
    int sta = v[0];
    int e = v.back();
    for(int i=sta;i<=e;i++){
        c = 0;
        for(int x: v){
            c+= abs(x - (i - 1));
        }   
        cout<< c <<endl;

        //s+= (v[i] - v[i-1] - 1);
    }
    
    //cout<< kkk << ' ' << s <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}