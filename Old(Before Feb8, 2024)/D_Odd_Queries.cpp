#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,q;
    cin>>n>>q;
    //ll ar[100000];
    //ll p[100000]={};
    vector<int>ar(n);
    vector<int>p(n,0);

    for(int i=0;i<n;i++){
        cin>>ar[i];
        p[i]=p[i-1]+ar[i];
    }
    ll f,l,k;
    ll s2;
    for(int i=0;i<q;i++){
        s2=0;
        cin>>f>>l>>k;
        ll s2 = ((l-f)+1)*k + (f<1?0:p[f-2]) + (p[n-1]-p[l-1]);
        if(s2%2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
    

}


int main(){

    ll t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}