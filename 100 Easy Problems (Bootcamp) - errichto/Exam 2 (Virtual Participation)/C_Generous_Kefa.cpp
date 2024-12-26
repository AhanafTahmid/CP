#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n, f;
    cin>> n >> f;
    int fr[26]={};
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        fr[ch-'a']++;
    }
    sort(fr,fr+26);
    int flg = 0;
    for(int i=0;i<26;i++){
        if(fr[i]>f){
            flg = 1;
        }
    }
    if(flg)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}