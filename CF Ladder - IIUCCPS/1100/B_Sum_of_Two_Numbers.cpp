#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int calc(string s){
    return accumulate(s.begin(),s.end(),0LL, [](int sum, char ch){
        return sum + ch - '0';
    });
}

void solve(){
    int n;cin>>n;
    int v = n/2;
    if(!(n&1))cout<< v <<' '<< v <<endl;
    else{
        if(n%20!=19){
            cout<< v << ' ' << v + 1 <<endl;
            return;
        }
        for(int i=v,j = v+1;j<=n;i--,j++){
        int tmp = abs(calc(to_string(i)) - calc(to_string(j)));
        if(tmp<=1){
            cout<<i<<' '<<j<<endl;
            break;
        }
    }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}