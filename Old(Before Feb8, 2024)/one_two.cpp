#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,j,c=0,c0=0;
    cin>>n;
    int ar[n+2];
    for(i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]==2){
            c++;
        }
        if(ar[i]==1){
            c0++;
        }
    }
    if(c%2==1) cout<<-1<<endl;
    else if(c==0) cout<<1<<endl;
    else cout<<c0+(c/2)<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}