#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string a = "abcdefghijklmnopqrstuvwxyz";
    string p = "";
    for(int i=0;i<k;i++){
        p+=a[i];
    }
    string pass=p;
    //loop
    int rep = n/k;
    for(int i=0;i<rep;i++){
        pass+=p;
    }
    
    for(int i=0;i<n;i++){
        cout<<pass[i];
    }
    cout<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}