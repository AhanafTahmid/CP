#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,c=1;
    cin>>n;
    vector<string> ar(n);
    for(i=0;i<n;i++){
        cin>>ar[i];
        ar.push_back(ar[i]);
    }
    for(i=0;i<n-1;i++){
        if(ar[i]!=ar[i+1]) c++;
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}