#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int md = 998244353;
int power(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a) %m;
        b >>= 1;
    }
    return res;
}


int inverse(int i){
    return power(i, md-2, md);
}


void solve(){
    cout<< (inverse(3))% md ;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}