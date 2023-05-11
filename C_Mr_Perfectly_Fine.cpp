#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int m;
    string s;
    map<int,string> mp;
    for(int i=0;i<n;i++){
        cin>>m>>s;
        mp.insert({m,s});
        //if(mp[i]=="00"){
            //mp.erase(i);
        //}
        //cin>>mp.first>>mp.second;
    }
    for(int i=0;i<n;i++){
        //cout<<mp[i]<<endl;
    }
    for(auto it:mp){
        cout<<it.second<<endl;
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}