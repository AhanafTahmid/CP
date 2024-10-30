#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    string ar;
    if(n==0){
        return;
    }
    cin>>ar;
    int l = ar.size();
    
    for(int i=0;i<l;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    solve(n-1);
}


int main(){

    int t=1;
    cin >> t;
    solve(t); 
    return 0;
}