#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c && b<=d) cout<<"POSSIBLE";
    else cout<<"IMPOSSIBLE";
    cout<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}