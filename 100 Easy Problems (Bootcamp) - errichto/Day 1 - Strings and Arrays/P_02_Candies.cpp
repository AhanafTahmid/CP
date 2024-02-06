#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int a,b;
    cin>>a>>b;
    int s = 0;
    for(int i=a;i<=b;i++){
        s+= ar[i];
    }
    cout<< s <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}