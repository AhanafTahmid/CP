#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int i,j;
    int l = s.size();
    int c=0;
    string s2 = "hello";
    for(i=0,j=0;i<l;i++){
        if(s[i]==s2[j]){
            j++;
            c++;
        }
    } 
    if(j==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}