#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    map<int, int> mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>=m)ans++;
        else mp[x]++;
    }
    ans = 0;

    for(auto i=mp.rbegin();i!=mp.rend();i++){
        int x = i->first;
        int y = i->second;
        int ct = -1;
        int f = 0;
        if(mp[m-x]==0){
            ans+=y;
            mp.erase(x);
        }
        while(mp[m-x]){
            cout<< ct<<' '<< m-x <<' '<< x <<' '<<mp[m-x]<<endl;
            ct++;
            mp[m-x]--;
            if(mp[m-x]==0){
                mp.erase(m-x);
            }
            if(ct==2)break;
            else ans++;
            f = 1;
        }
        cout<<ans<<"#"<<endl;
        if(f){
            //int tmp = ans;
            ans+=mp[m-x], ans+=mp[x];
            mp.erase(m-x);
            mp.erase(x);
        }
        cout<<ans<<"#"<<endl;
        cout<<endl<<endl<<endl;

        // cout<< x <<' '<<y<<endl;
        //cout<< ans <<endl;
    }


}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}