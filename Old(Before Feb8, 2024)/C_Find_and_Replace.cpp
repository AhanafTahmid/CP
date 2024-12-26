#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    cin>>s;
    string s;
    for(int i=0;i<n;i++){
        if(find(s.begin(),s.end(),a[i])) s[i]='0';
        s.push_back(s[i]);
        if(a[i]!=a[i+1])
    }
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}