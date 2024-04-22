#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    string tmp = "", tmp2;
    bool f = 0;
    //length 1
    for(int i='a';i<='z';i++){
        f = 0;
        for(char c: s){
            if(char(i)==c){
                f = 1;
                break;
            }
        }
        if(!f){
            cout<< char(i) <<endl;
            return;
        }
    }
    //length 2
    for(int i='a';i<='z';i++){
        for(int j='a';j<='z';j++){
            tmp = "";
            tmp+= char(i);
            tmp+= char(j);
            f = 0;
            for(int k = 0; k < n - 1;k++){
                tmp2 = "";
                tmp2+= s[k];
                tmp2+= s[k + 1];
                if(tmp==tmp2){
                    f = 1;
                    break;
                }
            }
            if(!f){
                cout<< tmp <<endl;
                return;
            }
        }
    }
    //length 3
    for(int i='a';i<='z';i++){
        for(int j='a';j<='z';j++){
            for(int k='a';k<='z';k++){
                tmp = "";
                tmp+= char(i);
                tmp+= char(j);
                tmp+= char(k);
                f = 0;
                for(int l = 0; l < n - 2 ;l++){
                    tmp2 = "";
                    tmp2+= s[l];
                    tmp2+= s[l + 1];
                    tmp2+= s[l + 2];
                    if(tmp==tmp2){
                        f = 1;
                        break;
                    }
                }
                if(!f){
                    cout<< tmp <<endl;
                    return;
                }
            }  
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}