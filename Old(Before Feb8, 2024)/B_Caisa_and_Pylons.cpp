#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[330000];
    int m = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        m = max(m,ar[i]);
    }
    cout<<m<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}