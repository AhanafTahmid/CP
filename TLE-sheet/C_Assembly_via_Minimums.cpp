#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll ln = (n*(n-1))/2;
    vector<ll>a;
    for(ll k=0;k<ln;k++){
        int x;cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());

    for(ll k=0,j=1;k<ln;){
        cout<<a[k]<<" ";
        //cout<<k<<endl;
        k+=(n-j);//5-1=4, 4-1=3
        j++;
    }
    cout<<a[ln-1]<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}