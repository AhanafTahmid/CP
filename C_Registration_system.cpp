#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    int fr[10000]={};
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
        if(mp[s]==1) cout<<"OK"<<endl;
        else cout<<s<<mp[s]-1<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}