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
        for(int j=0;j<x;j++){
            if(a[i][j]==nn){
                cout<<"will not take number"<<endl;
                return;
            }
        }
    }
    cout<<"will take number"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}