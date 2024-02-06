#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>> n;
    int lim = 50;
    int f[lim] = {};
    f[0] = 0;
    f[1] = 1;
    for(int i=2;i<=50;i++){
        f[i] = f[i-1] + f[i-2];
    }

    if(n==0){
        cout<<"yes"<<endl;
        return;
    }

    //nc2 -> 51C2 -> O(n*n)
    // for(int i=0;i<=lim;i++){
    //     for(int j=i+1;j<=lim;j++){
    //         if(f[i]+f[j]==n){
    //             cout<<"yes"<<endl;
    //             return;
    //         }
    //     }
    // }
    
    // cout<< "no" <<endl;


    //Better approach -> O(n*1) [O(1) on average for searching in unordered map]
    unordered_map<int,int> mp;
    for(int i=0;i<=50;i++){
        if(mp.find(n-f[i])!=mp.end()){
            cout<<"yes"<<endl;
            return;
        }
        mp[f[i]];
    }
    cout<<"no"<<endl;


}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}