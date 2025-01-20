#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int l, r;cin>>l>>r;
    int a = 0, b = 0, c = l;
    for(int i=0;i<31;i++){
        int v = (1<<i);
        if(v<=r) a = v;
        else{
            b = a - 1;
            break;
        }
    }
    while(a == c || b == c){
        c++;
    }
    cout<< a << ' ' << b << ' ' << c <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}