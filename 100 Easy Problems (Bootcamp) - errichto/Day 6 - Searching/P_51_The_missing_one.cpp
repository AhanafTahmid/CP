#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    //int ar[n+1];
    //for(int i=0;i<n-1;i++)cin>>ar[i];
    // sort(ar,ar+n-1);
    // for(int i=0;i<n;i++){
    //     if(ar[i]!=i+1){
    //         cout<<i+1<<endl;
    //         return;
    //     }
    // }

    ll val = (n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        int x;cin>>x;
        val-=x;
    }
    cout<< val <<endl;

}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}