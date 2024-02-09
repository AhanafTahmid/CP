/*
    author: ahanaf101
*/

#include <bits/stdc++.h>
using namespace std;
long long j = 1;
void solve(int s){
    if(s==0){
        cout<<j<<endl;
        return;
    }
    j*=s;
    solve(s-1);
}


int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}