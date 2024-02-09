#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,i,f=0;
    cin>>x>>y;
    int a,b;
    for(i=0;i<x;i++){
        cin>>a>>b;
        if(y==b){
            f = 1;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}