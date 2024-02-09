#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int r,q;
    int mx = -1;
    int in = -1;
    for(int i=0;i<n;i++){
        cin>>r>>q;
        if(r<=10 && q>mx){
            mx = q;
            in = i+1;
        }
    }
    cout<<in<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}