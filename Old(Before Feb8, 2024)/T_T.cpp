#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.size()<=10) cout<<s;
    else cout<<s[0]<<s.size()-2<<s[s.size()-1];
    cout<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}