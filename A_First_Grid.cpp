#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    cin>>a;
    cin>>b;
    if(a=="##"||b=="##") cout<<"Yes"<<endl;
    else if(a[0]=='#' && b[0]=='.'  || 
       a[1]=='.' && b[1]=='#'  ||
       a[0]=='.' && b[0]=='#' || 
       a[1]=='#' && b[1]=='.') 
       cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}