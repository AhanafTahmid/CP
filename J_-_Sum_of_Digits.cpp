#include <bits/stdc++.h>
using namespace std;
void solve(){
    string n;
    int c=0;
    cin>>n;
    if(n.size()==1) cout<<0<<endl;
    else cout<<n.size()-1<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}