#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int> st,st2;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            if(n/i != i ) st2.insert(n/i);
        }
    }

    for(auto x: st2){
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                int ct = 1;
                if(x/i != i ) ct++;
                int v = n / (i*(x/i));
                bool ok = ct==2 && st.count(v) && v!=i && v!=x/i;
                if(ok){
                    cout<<"YES"<<endl;
                    cout<< i << ' ' << n/x << ' ' << x/i << endl;
                    return;
                }
            }
        }
    }
    cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}