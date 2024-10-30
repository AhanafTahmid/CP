#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m;
    cin>> n >> m;
    int ar[m+1]={};
    for(int i=0;i<n;i++){
        int x, y;
        cin>> x >> y;
        for(int j=x;j<=y;j++){
            ar[j] = 1;
        }
    }
    int ct = 0;
    for(int i=1;i<=m;i++){
       if(!ar[i])ct++;
    }
    cout<< ct <<endl;
    for(int i=1;i<=m;i++){
       if(!ar[i])cout<< i <<" ";
    }
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}