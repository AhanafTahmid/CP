#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    a.push_back(1);
    map<int,int> mp;
    mp[1]=1;
    for(int i=2;i<=n;i++){
        if(mp[i]==1) continue;
        int p = i;
        while(p<=n){
            if(mp[p]!=1){
                a.push_back(p);
                mp[p]=1;
                p = p*2;
            }
        }
    }

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;


}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}