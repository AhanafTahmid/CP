#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    if(a==1 || b==1)cout<<"YES"<<endl;
    else if(a&1){
        int mn = a;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                mn = i;
                break;
            }
        }
        if(mn>b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<< "NO" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}