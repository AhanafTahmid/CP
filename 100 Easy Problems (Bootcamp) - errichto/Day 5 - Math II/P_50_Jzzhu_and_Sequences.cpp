#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define md 1000000007

void solve(){
    int x,y;
    cin>> x >>y;
    int n;
    cin>> n;
    int f[20];
    f[1] = x;
    f[2] = y;

    for(int i=3;i<=8;i++){
        f[i] = (f[i-1] - f[i-2]);
        //cout<< f[i] <<endl;
    }

    if(n==1){
        cout<< ((x%md)+md)%md <<endl;
        return;
    }
    else if(n==2){
        cout<< ((y%md)+md)%md <<endl;
        return;
    }
    int ans = (n - 6*(n/6));

    if(!ans) cout<< ((f[6]%md)+md)%md <<endl;
    else cout<< ((f[ans]%md)+md)%md <<endl;

}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}