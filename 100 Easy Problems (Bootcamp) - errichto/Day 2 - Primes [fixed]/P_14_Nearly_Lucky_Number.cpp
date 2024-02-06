#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    int ct = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7') ct++;
    }
    if( ((ct/4)==1 && ct%4==0) || ((ct/7)==1 && ct%7==0) && ct!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}