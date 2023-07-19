/*
    author: ahanaf101
*/

#include <bits/stdc++.h>
using namespace std;
long long ss = 0;
void solve(int s){
    if(s==0){
        cout<<ss<<endl;
        return;
    }
    int x;
    cin>>x;
    ss+=x;
    solve(s-1);


}


int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}