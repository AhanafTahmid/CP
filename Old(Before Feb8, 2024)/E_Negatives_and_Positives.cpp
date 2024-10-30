//https://codeforces.com/contest/1791/problem/E
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,s=0;
    cin>>n;
    vector<int>ar(n);
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    for(i=0;i<n;i++){
        if(ar[0]<=0 && ar[1]<=0){
            ar[0]=-ar[0];
            ar[1]=-ar[1];
        }
        s+=ar[i];        
        
    }
   cout<<s<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}