#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,cf=1,cl=1;
    string s,ss;
    cin>>a>>b;
    cin>>s;

    for(int i=0;i<a;i++){
        if(s[b]==s[i]) cf++;
    }
    if(s[b]>=65 && s[b]<=90){
        s[b]+=32;
    }
    else s[b]-=32;
    for(int i=0;i<a;i++){
        if(s[b]==s[i]) cl++;
    }

    if(cf>=cl) cout<<cf<<endl;
    else cout<<cl<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}