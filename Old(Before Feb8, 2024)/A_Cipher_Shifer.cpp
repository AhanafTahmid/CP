#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    char ch = '*';
    for(int i=0;i<n;i++){
        if(ch=='*'){
            cout<<s[i];
            ch = s[i];
        }
        else if(s[i]==ch) ch='*';
    }
    cout<<endl;
}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}