#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    string s, ans = "";cin>>s;
    int n=s.size();
    vector<int> f(10,0);
    for(int i=0;i<n;i++){
        f[s[i]-'0']++;
    }

    for (int i = 0;i<=9; i++) {
        //cout<< i << ' ' << mn <<endl;
        for (int d = 9-i; d <= 9; d++) {
            if (f[d] > 0) {
                ans += char(d + '0');
                f[d]--;
                break;
            }
        }
    }

    cout<< ans <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}