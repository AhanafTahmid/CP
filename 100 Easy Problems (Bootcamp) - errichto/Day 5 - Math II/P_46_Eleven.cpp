#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int fib[n+1];
    fib[0] = fib[1] = fib[2] = 1;
    vector<char> ans(n+1,'o');
    ans[0] = ans[1] = 'O';
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];
        if(n<fib[i]) break;
        //cout<< fib[i] <<endl;
        ans[fib[i]]='O';
    }

    for(int i=1;i<=n;i++){
        cout<<ans[i];
    }
    cout<<endl;

    
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}