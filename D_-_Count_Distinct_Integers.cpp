//
#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,n) for(int i=0;i<n;i++)
void solve(){
    int n,tt;
    cin>>n;
    vector<int> ar(n+2);
    vector<int>::iterator ip;
    for(int i=0;i<n;i++){
        cin>>tt;
        ar.push_back(tt);
    }
    ip = unique(ar.begin(),ar.end());
    LOOP(i,ar.size()){
        cout<<ar[i]<<endl;
    };
    //ar.resize(ar.begin(),ip);
    // for (ip = ar.begin(); ip != ar.end(); ++ip) {
    //     cout << *ip << " ";
    // }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}