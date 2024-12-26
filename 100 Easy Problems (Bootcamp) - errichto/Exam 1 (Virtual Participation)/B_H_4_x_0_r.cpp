#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    string s;
    cin>> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') s[i] = '4';
        else if(s[i]=='i') s[i] = '1';
        else if(s[i]=='e') s[i] = '3';
        else if(s[i]=='o') s[i] = '0';
        else if(s[i]=='s') s[i] = '5';
    }
    cout<< s <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}