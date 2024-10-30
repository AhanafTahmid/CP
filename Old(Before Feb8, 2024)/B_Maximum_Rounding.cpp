#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    //s+='0';
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && s[i+1]>='5'){
            s[i]='1';
        }
        if(s[i]>='5'){
            s[i]='0';
            s[i+1]++;
        }
        
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    

}


int main(){

    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}