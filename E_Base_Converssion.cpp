#include <bits/stdc++.h>
using namespace std;
int f =0;
void solve(int n){
    
        if(n==0){
            return;
        }
        solve(n/2);
        cout<<n%2;
}


int main(){

    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
        cout<<endl;
    }; 
    return 0;
}