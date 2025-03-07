#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n+1),b;
    int tot = (n * (n+1)) / 2;
    int vv = sqrt(tot);
    bool sq = (vv * vv) == tot;
    if(sq){
        cout<< -1 <<endl;
        return;
    }

    set<int>st,st2;
    for(int i=1;i<=n;i++)st2.insert(i);
    int v = 1;
    // while(v*v<=5e5){
    //     int val = v*v;
    //     st.insert(val);
    //     v++;
    // }

    int s = 0;
    while(b.size()!=n){
        v = -1;
        for(int x: st2){
            int v1 = sqrt(x+s);
            bool p = (v1 * v1) == (x+s);
            if(!p){
                b.push_back(x);
                //st2.erase(x);
                v = x;
                s+=x;
                break;
            }
        }
        if(v!=-1) st2.erase(v);
    }
    

    // vector<int>lat;
    // for(int i=1;i<=n && a.size()!=n;){
    //     if(st.count(s + i))lat.push_back(i);
    //     else if(lat.size()>=1 && !st.count(s + lat[0])){
    //         a.push_back(s + lat[0]);
    //         s+=lat[0];
    //         lat.pop_front();
    //         if( !st.count(s + i) )a.push_back(i),s+=i;
    //     }
    //     else a.push_back(i),s+=i;
    //     i = (i + 1)%n;
    //    // cout<< s << endl;
    // }
    
    for(int i=0;i<n;i++)cout<< b[i] << " \n"[i==n-1];
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}