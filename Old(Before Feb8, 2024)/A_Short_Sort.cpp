#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    cin>>a;
    string b = "abc";
    int c =0;
    for(int i=0;i<3;i++){
        if(a[i]==b[i]) c++;
    }
    if(c>=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}