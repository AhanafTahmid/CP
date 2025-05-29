#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, x;cin>>n>>x;
    int ct = 0;
    int nn = n;
	while (nn) {
		ct += (nn & 1);
		nn >>= 1;
	}
    if( x == 0 && n==1) cout<< -1 << endl;
    else if( x>0 && n == 1 ) cout<< x <<endl;
    else if(n&1)
    else if( n <= ct) cout<< ct <<endl;
    else{
        n-=ct;
        if(n&1) cout<< n + x + 1 <<endl;
        else cout<< n + x <<endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}