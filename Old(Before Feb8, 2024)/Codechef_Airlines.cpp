#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,r;
    cin>>x>>y>>r;
    if(10*x>=y) cout<<y*r<<endl;
    else cout<<10*r*x<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}