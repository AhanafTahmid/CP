#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[104000]={11};
    int c = 0;
    int p = 0;
    int ct  = 0;
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++){
       if(ar[i]==-1) c++;
       else if(ar[i]!=-1) p+=ar[i];

       if(c>0){
            p--;
            c--;
            if(p<0){
                ct++;
                p=0;
            }
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