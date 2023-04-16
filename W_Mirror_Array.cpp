#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a[1000][1000];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    int nn;
    cin>>nn;
    for(int i=0;i<n;i++){
        for(int j=x-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
  
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}