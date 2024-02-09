#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool not_vowel(char ch){
    return ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u';
}

void solve(){
    string s; 
    cin>>s;
    int ln = s.size();
    if(not_vowel(s[ln-1]) && s[ln-1]!='n'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<ln-1;i++){
        if(s[i]=='n'){
            continue;
        }
        else if(not_vowel(s[i]) && !not_vowel(s[i+1])){
            continue;
        }
        else if(not_vowel(s[i]) && not_vowel(s[i+1])){
            //cout<< s[i] <<" = "<<s[i+1]<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


signed main(){
    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}