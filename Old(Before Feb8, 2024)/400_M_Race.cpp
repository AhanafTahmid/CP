//
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c) cout<<"ALICE"<<endl;
    else if(b<a && b<c) cout<<"BOB"<<endl;
    else if(c<a && c<b) cout<<"CHARLIE"<<endl;
}

int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}