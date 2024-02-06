#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin>> n;
    int ar[10000];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++)
            if(ar[j]>ar[j+1])swap(ar[j],ar[j+1]); 
        for(int k=0;k<n;k++)cout<< ar[k] <<" ";
        cout<<endl;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}