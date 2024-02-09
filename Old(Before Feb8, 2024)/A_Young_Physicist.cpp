#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z,n;
    cin>>n;
    int x1=0,y1=0,z1=0;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0 && y1==0 && z1==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}