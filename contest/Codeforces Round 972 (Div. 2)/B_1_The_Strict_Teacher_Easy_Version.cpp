#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, m, q;cin>>n>>m>>q;

    int t1,t2;cin>>t1>>t2;
    int d;cin>>d;

    if(t1>t2) swap(t1,t2);
    //ttd
    if( d>=t1 && d>=t2){
        cout<< n - t2 <<endl;
    }
    //dtt
    else if(d<=t1 && d<=t2){
        cout<< t1-1 <<endl;
    }
    else{
        int v = t2 - t1; 
        cout << v/2 << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}