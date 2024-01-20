#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    map<int,int> mp;
    int a,b,c;
    cin>>a>>b>>c;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    for(auto x: mp){
        if(x.second==1)cout<<x.first<<endl;
    }   
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}