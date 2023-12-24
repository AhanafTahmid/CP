#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s1 = "ROYGBIV";
    string s2 = "";
    string s3 = "GBIVGBIV";

    int rem = n%7;
    int tot = n/7;
    for(int i=0;i<tot;i++){
        s2+=s1;
    }

    for(int i=0;i<rem;i++){
        s2+=s3[i];
    }
    cout<<s2<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}