#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0)return;
    cout<<"I love Recursion"<<endl;
    solve(n-1);
}


int main(){

    int t=1;
    //cin >> t;
    int k;
    cin>>k;
    while(t--)solve(k); 
    return 0;
}