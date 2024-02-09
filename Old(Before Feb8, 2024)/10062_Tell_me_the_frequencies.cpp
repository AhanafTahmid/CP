#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    while(getline(cin, s)){
        int fr[2000]={};
        for(int i=0;i<s.size();i++){
            fr[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            //cout<<(int)s[i];
            cout<<fr[i];
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}