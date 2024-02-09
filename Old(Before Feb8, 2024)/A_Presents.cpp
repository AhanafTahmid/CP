#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[10000];
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        mp[ar[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}