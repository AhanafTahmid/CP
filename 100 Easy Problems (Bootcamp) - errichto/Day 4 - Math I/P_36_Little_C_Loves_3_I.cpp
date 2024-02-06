#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    if(n%3==0) printf("%d %d %d\n",1,1,n-2);
    else  printf("%d %d %d\n",1,2,n-3);
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}