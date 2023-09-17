#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int big = a>b?a:b;
    int sm = a<b?a:b;
    int ct = 0;
    while(1){
        if(big<=sm){
            cout<<ct<<endl;
            return;
        }
        big-=c;
        sm+=c;
        ct++;
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}