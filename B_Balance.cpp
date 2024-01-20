#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int mini = 1e4;
    for(int i=0;i<n-1;i++){
        mini = min(abs(ar[i]-ar[i+1]),mini);
    }
    cout<<mini<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}