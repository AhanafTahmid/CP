#include <bits/stdc++.h>
using namespace std;
int c=1;
int solve(int n){
    if(n==1) return c;
    if(n%2==1){
        c++;
        return solve(3*n+1);
    }
    else if(n%2==0){
        c++;
        return solve(n/2);
    }
    return n;
    //c++;
    //return solve(n/2);    
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}