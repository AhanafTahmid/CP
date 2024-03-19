#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, x;cin>>n>>m>>x;
    set<int>st;
    set<int>tmp;
    st.insert(x);
    for(int i=0;i<m;i++){
        int dis;cin>>dis;
        char d; cin>>d;

        if(d=='0'){
            tmp.clear();
            for(auto i: st){
                int v = i+dis>n?(i+dis)%n:i+dis;
                tmp.insert(v);
            }
            st = tmp;
        }

        if(d=='1'){
            tmp.clear();
            for(auto i: st){
                int v = i-dis<=0?n+(i-dis):i-dis;
                tmp.insert(v);
            }
            st = tmp;
        }

        if(d=='?'){
            tmp.clear();
            for(auto i: st){
                int v = i+dis>n?(i+dis)%n:i+dis;
                int v1 = i-dis+n>n?(i-dis+n)%n:i-dis+n;
                tmp.insert(v);
                tmp.insert(v1);
            }
            st = tmp;
        }

    }
    cout<<st.size()<<endl;
    for(auto x: st)cout<< x <<" ";
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}