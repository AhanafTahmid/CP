#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &i: a)cin>>i;
    
    int next = (a[0]+1), prev = (a[0]-1);
    if(next>n) next = -1;
    if(prev<=0) prev = -1;
    for(int i=1;i<n;i++){
        if(prev!=-1 && prev == a[i]){
            prev = (a[i]-1);
            if(prev<=0) prev = -1;
        }
        else if(next!=-1 && next == a[i]){
            next = (a[i]+1);
            if(next>n) next = -1;
        }
        else{
            cout<< "NO" <<endl;
            return;
        }
    }
    cout<< "YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}