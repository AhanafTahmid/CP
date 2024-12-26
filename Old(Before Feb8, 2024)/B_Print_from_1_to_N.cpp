#include <bits/stdc++.h>
using namespace std;
void solve(int nn){
    if(nn==1){
        cout<<1<<endl;
        return;
    }
    solve(nn-1);
    cout<<nn<<endl;
}


int main(){

    int t=1;
    cin >> t;
    solve(t); 
    return 0;
}