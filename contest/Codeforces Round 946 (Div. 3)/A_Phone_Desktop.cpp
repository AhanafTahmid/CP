#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int ceil(int a,int b){
    return (a+b-1)/b;
}
void solve(){
    int x,y;cin>>x>>y;
    int ans = ceil(y,2);
    int rem = ans * 7 + (y%2?4:0);
    if(rem>=x)cout<< ans <<endl;
    else {
        x-=rem;
        cout<< ans + ceil(x,15) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}