#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
    int minIndex = 0;
    int min = ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]<=min) min = ar[i], minIndex = i;
    }
    cout<< minIndex <<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}