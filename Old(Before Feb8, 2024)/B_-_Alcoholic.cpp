#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,v,p,nn,val,s=0;
    int i,f=0;
    cin>>n>>x;
    for(i=1;i<=n;i++){
        cin>>v>>p;
        nn = v*p;
        s+=nn;
        if(s > x*100){
            val = i;
            f = 1;
            break;
        }
        
    }
    if(f) cout<<val<<endl;
    else cout<<-1<<endl;

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}