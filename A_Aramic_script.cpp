#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int c = 0;
    string s;
    set<char> ar;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            ar.insert(s[i]);
        }
        if(ar.find(s)==0){
            c++;
        }
    }
    cout<<c<<endl;
    // for (auto& ar : s) {
    //     cout << ar << ' ';
    // }
}


int main(){

    int t=1;
   //cin >> t;
    while(t--)solve(); 
    return 0;
}