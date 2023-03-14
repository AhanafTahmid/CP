#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    int 
    cin>>a;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[j]==a[i]) sm++;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}