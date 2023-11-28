#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,b,d;
    cin>>n>>b>>d;
    //long long ar[1004000];
    ll a;
    ll ct=0;
    ll s = 0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>b){
            continue;
        }
        s+=a;
        if(s>d){
            ct++;
            s = 0;//clears the bowl
        }
    }
    cout<<ct<<endl;
    
    


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}