#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //string s;
    //cin>>s;
    int fr[26]={};
    char s;
    for(int i=0;i<n;i++){
        cin>>s;
        fr[s-97]++;
    }
    for(int i=0;i<26;i++){
        while(fr[i]){
            cout<<char(i+97);
            fr[i]--;
        }
    }
}