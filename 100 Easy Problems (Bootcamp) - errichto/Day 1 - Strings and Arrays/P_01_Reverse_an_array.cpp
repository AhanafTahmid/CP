#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<< ar[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}