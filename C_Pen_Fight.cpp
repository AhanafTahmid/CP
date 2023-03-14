#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,p[100100],q,i,j,x,y,z,now,f=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>p[i];
    }
    cin>>q;
    cin>>z>>x>>y;
    for(i=1;i<=n;i++){
        if(p[x]>p[y]){
            f=1;
            break;
        }
        else if(p[x]<p[y]){
            f=2;
            break;
        }
    }
    int xth,yth;
    cin>>xth>>yth;
    int cx,cz;
    cin>>cx>>cz;
    cout<<2<<endl;
    if(f==1) cout<<x<<endl;
    else if(f==2) cout<<y<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}