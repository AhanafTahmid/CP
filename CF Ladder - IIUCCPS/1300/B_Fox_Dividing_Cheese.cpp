#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int f(int a, int g){
    int ct = 0;
    while(a>g){
        int tmp = a;
        bool ok2 = 0;
        if(a%5==0 && !ok2){
            tmp = tmp - (tmp/5 * 4);
            if(tmp>=g) a = a - (a/5 * 4),ct++, ok2 = 1;
            else tmp = a;
        }
        if(a%3==0 && !ok2){
            tmp = tmp - (tmp/3 * 2);
            if(tmp>=g) a = a - (a/3 * 2),ct++, ok2 = 1;
            else tmp = a;
        }
        if(a%2==0 && !ok2){
            tmp = tmp - (tmp/2);
            if(tmp>=g) a = a - (a/2),ct++, ok2 = 1;
            else tmp = a;
        }
        if(!ok2 && a!=g){
            return -1;
        }
    }
    return ct;
}

void solve(){
    int a,b;cin>>a>>b;
    int g = __gcd(a,b);
    int aa = f(a/g,1);
    int bb = f(b/g,1);
    if(aa==-1 || bb==-1)cout<< -1 <<endl;
    else cout<< aa + bb <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}