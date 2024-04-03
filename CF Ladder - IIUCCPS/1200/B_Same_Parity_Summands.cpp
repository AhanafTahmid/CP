#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    if(n==k){
        cout<<"YES"<<endl;
        for(int i=1;i<=k;i++)cout<<1<<" \n"[i==k];
    }
    else if( (n&1 && !(k&1)) || n<k || (n%2==0 && n/2<k && n%2!=k%2)) cout<<"NO"<<endl;
    else if((n&1 && k&1) || (n%2==k%2)){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++)cout<<1<<' ';
        cout<< n - 1 * (k-1) <<endl;
    }
    else if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=1;i<k;i++)cout<<2<<' ';
        cout<< n - 2 * (k-1) <<endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}