#include <bits/stdc++.h>
using namespace std;
void solve(){
    int c=0;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<b.size();i++){
        if(b[i]=='R' && b[i+1]=='R') c++;
        if(b[i]=='G' && b[i+1]=='G') c++;
        if(b[i]=='B' && b[i+1]=='B') c++;
    }
    cout<<c<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}