#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int x){
    int num, ans;
    num = ans = x;
    int z = 2;
    while (z * z <= num){
        int cnt = 0;
        while (num % z == 0){
            num /= z;
            cnt++;
        }
        if (cnt > 0) ans -= ans / z;
        z++;
    }
    if (num > 1) ans -= ans / num;
    return ans;
    
}

void solve(){
    int a, m; cin >> a >> m;
    cout << f(m / __gcd(a, m)) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}