#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int l = s.size();
    int f=0;
    for(int i=0;i<l;i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            f = 1;
        }
        else{
            if(f) cout<<" ";
            cout<<s[i];
            f = 0;
        }
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}