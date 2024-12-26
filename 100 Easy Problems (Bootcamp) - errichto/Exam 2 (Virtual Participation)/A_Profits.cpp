#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int no_days, dream_money;
    cin >> no_days >> dream_money;
    ll sum = 0;
    for(int i=0;i<no_days;i++){
        int x; cin>> x;
        sum+=x;
        if(sum>=dream_money){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<< -1 <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}