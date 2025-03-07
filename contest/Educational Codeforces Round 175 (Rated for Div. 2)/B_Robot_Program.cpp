#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x, k;cin>>n>>x>>k;
    string s;cin>>s;
    int t = 0, ind = 0, ok = (x==0);
    if( x < 0 ){
        while(x<0 && ind<n && t!=k){
            if( s[ind] ==  'L' ) x--;
            else if( s[ind] ==  'R' ) x++;
            ind++;
            t++;
        }
        if( x == 0) ok = 1;
    }
    else{
        while(x>0 && ind<n && t!=k){
            if( s[ind] ==  'L' ) x--;
            else if( s[ind] ==  'R' ) x++;
            t++;
            ind++;
        }
        if( x == 0) ok = 1;
    }
    
    int minln = 1;
    ind = 0;
    if( ok ){
        while(ind<n){
            if( s[ind] ==  'L' ) x--;
            else if( s[ind] ==  'R' ) x++;
            ind++;
            if( x == 0)break;
            minln++;
        }
    }
    
    k-=t;
    int ans = (ok == 1) + (x==0?k/minln:0);
    
    cout<< (ok?ans:0) <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}