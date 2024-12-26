#include <bits/stdc++.h>
using namespace std;
void solve(){
    //cout<<(2<<0);
    // int n,ans,val;
    // cin>>n;
    // if(n==1){
    //     //cout<<1<<endl;
    //     //return;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<val<<endl;
    //     val = (2<<i);  
    //     if(val == n){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     if(val>n){
    //         val = (2<<i-1);
    //         ans = n - val + 1;
    //         cout<<ans<<endl;
    //         return;
    //     }
    // }


    int a;
    cin>>a;
    int n = a/2;
    for(int i=1;i<=n+1;i++)
        cout<<(i&(a<<1))<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}