#include <bits/stdc++.h>
using namespace std;
int inf = 1e9;
void solve(){
    int n;
    cin>>n;
    int v;
    int a = inf, b = inf,ct = 0;
    for(int i=0;i<n;i++){
        cin>>v;
        if(a>b)swap(a,b);
        if(v<=a) a=v;
        else if(v<=b) b=v;
        else a = v,ct++;

    }
    cout<<ct<<endl;
    // vector<int> a;
    // a.push_back(ar[0]);
    // vector<int> b;
    // for(int i=0;i<n-1;i++){
    //     if(ar[i]<ar[i+1]) b.push_back(ar[i+1]);
    //     else b.push_back(ar[i]);
    // }

    // if(n==1)cout<<0<<endl;
    // else{
    //     long long act = 0, bct = 0;
    //     for(int i=0;i<a.size()-1;i++){
    //         if(a[i]<a[i+1]) act++;
    //     }
    //     for(int i=0;i<b.size()-1;i++){
    //         if(b[i]<b[i+1]) bct++;
    //     }
    //     cout<<act+bct<<endl;
    // }



    

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}