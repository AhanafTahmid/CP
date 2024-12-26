#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++){
        if(ar[i]>=ar[i+1]) c++;
        else break;
    }


    for(int i=0;i<n-1;i++){
        if(ar[i]<=ar[i+1]) c++;
        else break;
    }



}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}å