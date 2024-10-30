#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int h, m;
    cin>> h >> m;
    int converted = h*60 + m;
    cout<< 1440-converted <<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}