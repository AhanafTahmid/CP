#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x,y;
    cin>>x>>y;
    ll g = __gcd(x,y);
    ll l = (x*y)/g;

    ll mx = max(x,y);
    ll mn = min(x,y);
    //a = 1 = a * b, if lcm (a, b ) == b cout lcm * (b / a) else cout lcm
    if(l==mx){
        cout<<l*(mx/mn)<<endl;
    }
    else cout<<l<<endl;  
        
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}