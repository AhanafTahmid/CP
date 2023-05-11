#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if(n==1) cout<<k<<endl;
    else if(n==k) cout<<1<<endl;
    else{
        if(n<k){
            if(k==1){
                cout<<1<<endl;
                return;
            }
            for(int i=1;i<=k;i++){
                if(i*n>=k){
                    cout<<i<<endl;
                    return;
                }
            }
        }
        else if(n>k){
            if(k==1){
                cout<<1<<endl;
                return;
            }
            for(int i=1;i<=n;i++){
                if(i*k>=n){
                    cout<<i<<endl;
                    return;
                }
            }
        }

        
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}