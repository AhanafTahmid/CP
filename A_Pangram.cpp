#include <bits/stdc++.h>
using namespace std;
void solve(){
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // set<char> a;
    // for(int i=0;i<s.size();i++){
    //     char ss = (char)tolower(s[i]);
    //     a.insert(ss);
    // }
    // if(a.size()>=26){
    //     cout<<"YES"<<endl;
    // }
    // else cout<<"NO"<<endl;

    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> a;
    vector<int> isTrue(26,true);
    

    //fill(isTrue, isTrue + 26, 4);
    for(int i=0;i<s.size();i++){
        char ss = (char)tolower(s[i]);
        isTrue[ss-97] = false;
    }

    
    for(int i=0;i<26;i++){
        if(isTrue[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}