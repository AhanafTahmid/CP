#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<int> fr(1000,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='e') fr['e']++;
        else if(s[i]=='g') fr['g']++;
        else if(s[i]=='y') fr['y']++;
        else if(s[i]=='p') fr['p']++;
        else if(s[i]=='t') fr['t']++;
    }
    sort(fr.begin(),fr.end());
    //cout<<fr[s.size()-1];
    for(auto x:fr){
        cout<<x;
    }
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}