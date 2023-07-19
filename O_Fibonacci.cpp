#include <bits/stdc++.h>
using namespace std;
int solve(int p){
    if(p==1) return 0;
    if(p==2 || p==3) return 1;
    return solve(p-1)+solve(p-2);
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}