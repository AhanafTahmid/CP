#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n,x;
    cin>> n>> x;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>> ar[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]+ar[j]==x){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}