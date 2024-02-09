#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;
    cin>> n >>k;
    int odd_ct = (n%2==0)?n/2: (n/2) + 1;
    if(k<=odd_ct) cout <<(k*2)-1 <<endl;
    else cout<<(k-odd_ct)*2 <<endl;
    
}

signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}