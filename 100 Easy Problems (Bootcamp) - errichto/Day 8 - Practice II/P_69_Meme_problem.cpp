#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    string s;
    getline(cin, s);
    int n = s.size();
    //char = 1, int = 4, long long = 8,
    int multiply = 1;
    string a = "";
    for(int i=0;i<n;i++){
        if(s[0]=='c') multiply = 1;
        else if(s[0]=='l') multiply = 8;
        else if(s[0]=='i') multiply = 4;

        if(s[i]>='0' && s[i]<='9')a+=s[i];
    }   
    int num = stoi(a);
    cout<< multiply * num <<endl;
}


int main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}