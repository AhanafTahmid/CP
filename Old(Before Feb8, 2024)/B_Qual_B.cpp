#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,cto=0;
    string s;
    cin>>a>>b;
    cin>>s;
    for(int i=0;i<a;i++){
        if(s[i]=='o') cto++;
        if(cto>b) s[i]='x';
    }
    cout<<s<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}