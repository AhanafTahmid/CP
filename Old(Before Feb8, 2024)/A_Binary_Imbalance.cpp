#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c0=0; 
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])s.push_back('1');  
        else s.push_back('0');
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1')c1++;  
        else c0++;
    }
    //cout<<s<<endl;
    //cout<<c1<<" "<<c0<<endl;
    if(c1>c0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}