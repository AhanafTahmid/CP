#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool ok(ll n){
    return n%4==0 || n%7==0 || n%77==0 || n%47==0 || n%74==0 || n%44==0 || n%444==0 || n%447==0
    || n%474==0 || n%747==0 || n%774==0;
}

void solve(){
    string s;
    cin>> s;
    int ct=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7') ct++;
    }
    if(ct==s.size()){
        cout<<"YES"<<endl;
    }
    else{
        ll nn = ok( stoi(s));
        if(nn){
            cout<<"YES"<<endl;
        }
        else cout<< "NO" <<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}