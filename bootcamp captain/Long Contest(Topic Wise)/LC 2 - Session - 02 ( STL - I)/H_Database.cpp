#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int solve(){
    int n, d; cin>>n>>d;
    int fr[100000]={};
    map<int , set<int> > mp;
    for(int i=0;i<d;i++){
        int x,y;cin>>x>> y;   
        fr[x]++;     
        mp[x].insert(y);
    }
    for(auto [x,y]: mp){
        if(fr[x]!=y.size()){
            return 1;
        }
        //cout << x << " " <<fr[x]<<" " << y.size() << endl; 
    }
    return 0;

}

signed main(){
    int t=1;
    cin >> t;
    int i = 1;
    while(t--){
        if(!solve()) printf("Scenario #%lld: possible\n",i);
        else printf("Scenario #%lld: impossible\n",i);
        i++;
    }
    return 0;
}