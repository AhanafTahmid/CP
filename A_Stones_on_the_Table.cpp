#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,c=0;
    string a;
    cin>>n;
    cin>>a;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) c++;
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}