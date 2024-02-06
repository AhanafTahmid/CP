#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    if(n==3)cout<<1<<endl<<3<<endl;
    //even 
    else if(!(n%2)){
        int l = n/2;
        cout<< l <<endl;
        for(int i=1;i<=l;i++)cout<< 2 <<" ";cout<<endl;
    }
    //odd
    else if(n%2){
        int l = (n-3)/2;
        cout<< l + 1 <<endl;
        for(int i=1;i<=l;i++)cout<< 2 <<" ";
        cout<< 3 <<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}