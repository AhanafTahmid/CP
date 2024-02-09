#include <bits/stdc++.h>
using namespace std;
int c =0;
int solve(long long p){
    if(p==1){
        cout<<c<<endl;
        return 0;
    }
    c++;
    return solve(p/2);
}

int main(){
    long long n;
    cin>>n;
    solve(n);
    return 0;
}