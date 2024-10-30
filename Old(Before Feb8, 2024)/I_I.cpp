#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,ar[1000000],fr[1000000]={};
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>ar[i];
        fr[ar[i]] = ar[i];
    }
    for(int i=1;i<=n;i++){
        if(fr[i]==0){
            cout<<i<<endl;
        }
        //cout<<fr[i];
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}