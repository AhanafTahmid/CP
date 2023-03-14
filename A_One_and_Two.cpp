#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,j,c1=1,c2=1,f=0,in;
    cin>>n;
    int ar[n+2];
    for(i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(i=1;i<=n;i++){
        c2=1;
        c1*=ar[i];
        for(j=i+1;j<=n;j++){
            c2*=ar[j];
        }
        if(c1==c2){
           // cout<<"YES"<<i<<" "<<endl;
            in = i;
            f = 1;
            break;
        }
    }
    if(f==1)cout<<in<<endl;
    else cout<<-1<<endl;
  
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}