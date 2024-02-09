#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    //cin >> s;
    getline(cin,s);
    int l = s.size();
    for(int i = 0; i < l; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            cout << s[i];
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}



