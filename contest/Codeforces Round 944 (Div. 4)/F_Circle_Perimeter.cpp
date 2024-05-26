#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int r;cin>>r;
    int c = 0;
    for(int i=0;i<=r;i++){
        int x = r-i;
        int a = sqrt(r*r - x*x);
        int b = sqrt((r+1)*(r+1) - x*x);
        if(x*x + b*b == (r+1)*(r+1))b--;
        if(x*x + a*a < r*r ) a++;
        c+=(b-a+1);
    }
    c-=2;
    c*=4;
    c+=4;
    cout<< c <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}