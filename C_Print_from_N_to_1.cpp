#include <bits/stdc++.h>
using namespace std;
void solve(int nn){
    if(nn==1){
        cout<<1;
        return;
    }
    cout<<nn<<" ";
    solve(nn-1);
}


int main(){

    int t=1;
    cin >> t;
    solve(t); 
    return 0;
}