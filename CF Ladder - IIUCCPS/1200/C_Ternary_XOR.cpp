#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string s1="1", s2="1";
    int l = 0;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){l=i;break;}
    }
    if(l){
        for(int i=1;i<l;i++){
            if(s[i]=='2'){
                s1+='1';
                s2+='1';
            }
            else if(s[i]=='0'){
                s1+='0';
                s2+='0';
            }
        }

        //maximum value is s1
        for(int i=l;i<n;i++){
            if(i==l)s1+='1';
            else s1+='0';
        }

        //minimum value is s2
        for(int i=l;i<n;i++){
            if(i==l)s2+='0';
            else s2+=s[i];
        }
        cout<< s1 << endl;
        cout<< s2 << endl;
    }
    else{
        for(int i=1;i<n;i++){
            if(s[i]=='2')s1+='1', s2+='1';
            else s1+='0', s2+='0';
        }
        cout<< s1 << endl;
        cout<< s2 << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}