#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 

void solve(){
    int n, b, c; cin>>n>>b>>c;
    if(b==1 && c==0) cout<< 0 <<endl;
    else if(n==1){
        if(c == 0) cout<< 0 <<endl;
        else cout<< 1 <<endl;
    }
    else if(n==2){
        vector<int>a{c, b + c};
        if(a[0]==0 && a[1]==1) cout<< 0 <<endl;
        else if(a[0]==0 || a[1]==1 || a[0] == 1) cout<< 1 <<endl;
        else cout<< 2 <<endl;
    }
    else{
        vector<int>a{c, b + c,2 * b + c};
        if( a[0] == a[2] ){
            if( a[0]+ 2 == n || a[0]+ 1 == n ) cout<< n - 1 <<endl;
            else if(a[0]+2<n)cout<< -1 <<endl;
            else cout<< n <<endl;
        }
        else{
            int v = n - a[0];
            int diff = a[1] - a[0];
            int nn = max(0LL, (v + diff - 1) / diff );
            cout<< n - nn <<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}