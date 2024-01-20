#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    ll p=1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p*=x;
        //cout<<p<<endl;
    }
    ll ans = 2023%p!=0;
    if(ans) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<< 2023/p <<" ";
        for(int i=1;i<k;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}