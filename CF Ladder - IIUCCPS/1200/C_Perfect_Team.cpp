#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

//ok(00111111110000000), find the last 1
void solve(){
    int c,m,x;cin>>c>>m>>x;

    int l = 0, r = min(c,m), mid;
    int ans = 0;
    while(l<r){
        mid = (l+r+1)/2;
        bool ok = c>=mid && m>=mid && (c+m+x - 2*mid)>=mid;
        if(ok){
            l = mid;
            ans = l;
        }
        else r = mid - 1;
    }

    cout<< ans << endl;
    

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}