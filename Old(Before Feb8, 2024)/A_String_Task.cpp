#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    string ss;
    int l = s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='Y'||s[i]=='y'||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') continue;
        else{
            if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
                ss.push_back('.');
                ss.push_back(s[i]);
            }
            else{
                ss.push_back('.');
                ss.push_back(s[i]);
            }
        }
    }
    cout<<ss<<endl;
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}