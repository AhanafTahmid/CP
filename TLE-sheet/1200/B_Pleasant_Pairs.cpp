#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, ans=0;
    string a;
    cin>>n;
    while(n--){
        cin>>a;
        if(a[1]=='+')ans++;
        else ans--;
    }
    cout<<ans<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}