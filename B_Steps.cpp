#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    ll x,y;
    cin>>x>>y;
    ll k;
    cin>>k;
    ll dx,dy;
    ll ct = 0;
    ll st = 0;
    for(ll i=0;i<k;i++){
        cin>>dx>>dy;
        //x+=dx;
        //y+=dy;
        //cout<<x<<" "<<y<<endl;

        ll nx = 0, ny = 0;

        //positive kx
        if(dx>0) nx = (n - x) / dx;
        //negative
        else if(dx<0) nx = (1 - x) / dx;
        else if(dx==0) nx = 1e18;

        //positive ky
        if(dy>0) ny = (m - y) / dy;
        //negative
        else if(dy<0) ny = (1 - y) / dy;
        else if(dy==0) ny = 1e18;


        
        st+=min(nx,ny);
        x+=min(nx,ny)*dx;
        y+=min(nx,ny)*dy;

        //cout<<x<<" "<<y<<endl;
        //cout<<nx<<" "<<ny<<endl;
    }
     cout<<st<<endl;
    //cout<<ct<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}