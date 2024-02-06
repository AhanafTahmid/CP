#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>>n;
    int fib[50];
    fib[0] = 0;
    fib[1] = 1;
    if(n==0){
        cout<<"0 0 0"<<endl;
        return;
    }
    else if(n==1){
        cout<<"1 0 0"<<endl;
        return;
    }
    else if(n==2){
        cout<<"1 1 0"<<endl;
        return;
    }
    else if(n==3){
        cout<<"1 1 1"<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];
        if(fib[i]==n){
            printf("%d %d %d",fib[i-4],fib[i-3],fib[i-1]);
            return;
        }
    }
    cout<< "I'm too stupid to solve this problem" <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}