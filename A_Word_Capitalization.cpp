#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122){
        s[0]-=32;
        cout<<s;
    }
    else cout<<s;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}