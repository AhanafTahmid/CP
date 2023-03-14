#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,ct=0,i,j;
    string c;
    cin>>n;
    cin>>c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(c[i]==c[j]){
                ct++;
                //cout<<"yes"<<endl;
                //cout<<c[i]<<" " <<c[j]<<endl;
            }
            cout<<c[i]<<" " <<c[j]<<endl;
        }
    }
    cout<<ct<<endl;
    //if(ct==0) cout<<-1<<endl;
    //else cout<<n-ct<<endl;

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}