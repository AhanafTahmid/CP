#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int &i: a)cin>>i;

    int f = 1;
    for(int x: {0,1}){
        f = 1;
        int gc = 0;
        for(int i=x;i<n;i+=2){
            gc = gcd(gc, a[i]);
        }
        for(int i=!x;i<n;i+=2){
            if((a[i]%gc)==0){f = 0; break;}
        }
        if(f){
            cout<<gc<<endl;
            return;
        }
    }
    cout<<0<<endl;

}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}